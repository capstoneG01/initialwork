/*
 * This file provides all the handler functions for the UI controls on
 * Firmware page and teh required helper functions
 * Copyright (C) 2015 Texas Instruments Incorporated - http://www.ti.com/
 * ALL RIGHTS RESERVED
 *
*/

#include <QFileDialog>
#include <QMessageBox>
#include <QFileInfo>
#include <QTimer>
#include <QTime>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "API.h"
#include "usb.h"
#include "flashloader.h"

/******************helper functions***************/

/**
 * @brief MainWindow::ProcessChosenFirmwareImage
 * Gets the Batch files and configuration details from the selected Firmware Image
 * and updates the respective "Power Up Defaults" controls on the Firmware Page accordingly
 */
void MainWindow::processChosenFirmwareImage()
{

    QStringList fileNameList = (ui->firmwareName_textEdit->toPlainText()).split("\n", QString::SkipEmptyParts);

    if(m_firmware)
        delete m_firmware;
    if(m_firmwareSlave)
        delete m_firmwareSlave;

    m_firmwareSlave = NULL;

    m_firmware =  new Firmware(fileNameList[0]);
    if(m_firmware == NULL)
    {
        showError(GET_ERR_STR());
        return;
    }
    if(!m_firmware->isValid())
    {
        showError("Not a valid Firmware Image.");
        return;
    }
    if(m_dualAsic && fileNameList.size() > 1)
    {
        m_firmwareSlave = new Firmware(fileNameList[1]);
        if(m_firmwareSlave == NULL)
        {
            showError(GET_ERR_STR());
            return;
        }
        if(!m_firmwareSlave->isValid())
        {
            showError("Not a valid Firmware Slave Image.");
            return;
        }
    }
    ui->firmwareBatchFile_comboBox->clear();
    ui->defaultBatch_comboBox->clear();
    ui->defaultBatch_comboBox->addItem("None");
    ui->frmwBatchFile_tbl->setRowCount(0);
    ui->firmwareBatchFile_groupBox->setEnabled(false);
    ui->i2cSlaveAdd->clear();
    ui->seqCacheSize_spinBox->setValue(0);


    int batchFileCount = m_firmware->getNumBatchFiles();
    if(batchFileCount < 0)
        showError(GET_ERR_STR());
    for(int i = 0; i < batchFileCount ; i ++)
    {
        char batchFileName[16];
        BAT_BatchFile_t* batch_File = m_firmware->getBatchFile(i);

        if (batchFileCount)
            ui->firmwareBatchFile_groupBox->setEnabled(true);

        if(BAT_GetName(batch_File, batchFileName) < 0)
            showError(GET_ERR_STR());
        ui->firmwareBatchFile_comboBox->addItem(QString(batchFileName));
        ui->defaultBatch_comboBox->addItem(QString(batchFileName));

    }

    uint32 config_value;
    if(m_firmware->getConfigBits(FW_CFG_SPREAD_SPECTRUM,&config_value) < 0)
        showError(GET_ERR_STR());
    ui->spreadSpectrum_comboBox->setCurrentIndex(config_value);

    if(m_firmware->getConfigBits(FW_CFG_STARTUP_STATE,&config_value) < 0)
        showError(GET_ERR_STR());
    ui->startupState_comboBox->setCurrentIndex((int)config_value);

    if(m_firmware->getConfigBits(FW_CFG_HDMI_ENABLE,&config_value) < 0)
        showError(GET_ERR_STR());
    ui->hdmiReceiver_comboBox->setCurrentIndex(config_value);

    if(m_firmware->getConfigBits( FW_CFG_DEF_BATCH, &config_value) < 0)
        showError(GET_ERR_STR());
    int defaultBatchFile = config_value + 1;
    ui->defaultBatch_comboBox->setCurrentIndex(defaultBatchFile);

    if(m_firmware->getConfigBits( FW_CFG_SEQ_CACHE, &config_value) < 0)
        showError(GET_ERR_STR());
    ui->seqCacheSize_spinBox->setValue(config_value);

    if(m_firmware->getConfigBits(FW_CFG_I2C_ADDRESS,&config_value) < 0)
        showError(GET_ERR_STR());
    ui->i2cSlaveAdd->setText(QString("%1").arg(config_value));

    if(m_firmware->getConfigBits( FW_CFG_MASTER_DMD_A_SWAP,&config_value) < 0)
        showError(GET_ERR_STR());
    ui->bitSwapAMaster->setChecked(config_value);

    if(m_firmware->getConfigBits(FW_CFG_MASTER_DMD_B_SWAP,&config_value) < 0)
        showError(GET_ERR_STR());
    ui->bitSwapBMaster->setChecked(config_value);

    if(m_firmware->getConfigBits( FW_CFG_MASTER_DMD_AB_SWAP,&config_value) < 0)
        showError(GET_ERR_STR());
    ui->channelSwapABMaster->setChecked(config_value);

    if(m_firmware->getConfigBits( FW_CFG_SLAVE_DMD_A_SWAP,&config_value) < 0)
        showError(GET_ERR_STR());
    ui->bitSwapASlave->setChecked(config_value);

    if(m_firmware->getConfigBits(FW_CFG_SLAVE_DMD_B_SWAP,&config_value) < 0)
        showError(GET_ERR_STR());
    ui->bitSwapBSlave->setChecked(config_value);

    if(m_firmware->getConfigBits( FW_CFG_SLAVE_DMD_AB_SWAP,&config_value) < 0)
        showError(GET_ERR_STR());
    ui->channelSwapABSlave->setChecked(config_value);

    if(m_firmware->getConfigBits(FW_CFG_FLASH_READ_DELAY,&config_value) < 0)
        showError(GET_ERR_STR());
    ui->readDelay->setText(QString("%1").arg(config_value));

    if(m_firmware->getConfigBits(FW_CFG_FLASH_WRITE_DELAY,&config_value) < 0)
        showError(GET_ERR_STR());
    ui->writeDelay->setText(QString("%1").arg(config_value));

    if(m_firmware->getConfigBits(FW_CFG_FLASH_WRITE_WIDTH,&config_value) < 0)
        showError(GET_ERR_STR());
    ui->writePulseWidth->setText(QString("%1").arg(config_value));

    if(m_firmware->getConfigBits(FW_CFG_FLASH_CS_HOLD,&config_value) < 0)
        showError(GET_ERR_STR());
    ui->CS_DataHoldTime->setText(QString("%1").arg(config_value));

    uint08 tag[32];

    if(m_firmware->getConfigBytes(FW_CFG_FW_TAG,tag) < 0)
        showError(GET_ERR_STR());
    QString firmwareTag = "";
    firmwareTag.append(QString::fromUtf8((const char*)tag));
    ui->firmwareTag_lineEdit->setText(firmwareTag);

}

/**
 * @brief MainWindow::AddBatchFile
 * adds the Batch File commands displayed in the Batch Files frame "Batch Commads Sequence" to
 * the firmware with the name mentioned in the batchFileName_lineEdit textbox
 * If the Batch commands have on the fly command in it, sets the isAddPattenrs to true
 * @param isAddPatterns - O - a bool is set If Pattenrs hav eto be added to teh firmware
 * @return
 */
int MainWindow::addBatchFile(bool *isAddPatterns)
{
    QString batchFileName = ui->batchFileName_lineEdit->text();
    if (batchFileName.isEmpty())
    {
        showStatus("Error: Enter a name for the batch file");
        return -1;
    }
    int numSplashImages = m_firmware->getNumSplashes();

    if(BAT_SetName(m_batchFile, batchFileName.toUtf8().constData()) < 0)
        showError(GET_ERR_STR());

    if(BAT_IsOTFPtnPresent(m_batchFile))
    {
        BAT_OTF2SplashPtn(m_batchFile,numSplashImages);
        *isAddPatterns = true;
    }
    else
    {
        *isAddPatterns = false;
    }

    if(m_firmware->addBatchFile(m_batchFile) < 0)
        showError(GET_ERR_STR());

    if(m_dualAsic && m_firmwareSlave)
        m_firmwareSlave->addBatchFile(m_batchFile);

    return 0;
}


/**
 * @brief MainWindow::AddPatterns
 * Adds the patterns from the Pattern Mode page, to the firmware Or updates
 * On the Fly
 * @return
 */
int MainWindow::addPatterns()
{
    int totalSplashImages;

    if(m_elements.size() <= 0)
    {
        showStatus("No patterns to add!");
        return -1;
    }

    if(calculateSplashImageDetails(&totalSplashImages))
    {
        showStatus("Error while adding patterns to firmware");
        return -1;
    }

    if(updatePatternMemory(totalSplashImages, true))
    {
        showStatus("Error while adding patterns to firmware");
        return -1;
    }
    return 0;
}
/**
 * @brief MainWindow::UpdateFWConfigData
 * Gets the firmware configuration details from the repsective UI fields on Firmware Page
 * and updates the selected Firmware Image accordingly
 * @param fw - I - A pointer to the current Firmware Image that is selected
 */
void MainWindow::updateFWConfigData(Firmware *fw)
{
    QString firmwareTag = ui->firmwareTag_lineEdit->text();
    QByteArray ba = firmwareTag.toLocal8Bit();
    uint08 tag[32];

    //just fill contents with 0xFF since the content will be copied in both
    //master and slave images it will be easier to compare
    memset(tag,0xFF,sizeof(tag));
    strcpy((char *)tag,ba.data());

    if(fw == NULL)
        return;

    if(fw->setConfigBytes(FW_CFG_FW_TAG,tag) < 0)
        showError(GET_ERR_STR());

    if (ui->startupState_checkBox->isChecked())
    {
        if(fw->setConfigBits(FW_CFG_STARTUP_STATE,ui->startupState_comboBox->currentIndex()) < 0)
            showError(GET_ERR_STR());
    }

    if (ui->hdmiReceiver_checkBox->isChecked())
    {
        if(fw->setConfigBits(FW_CFG_HDMI_ENABLE, ui->hdmiReceiver_comboBox->currentIndex()) < 0)
            showError(GET_ERR_STR());
    }

    if (ui->defaultBatch_checkBox->isChecked())
    {
        if(fw->setConfigBits(FW_CFG_DEF_BATCH, ui->defaultBatch_comboBox->currentIndex() - 1) < 0)
            showError(GET_ERR_STR());
    }

    if(ui->seqCacheSize_checkBox->isChecked())
    {
        if(fw->setConfigBits(FW_CFG_SEQ_CACHE, ui->seqCacheSize_spinBox->value()) < 0)
            showError(GET_ERR_STR());
    }

    if (ui->setAsDefaultBatch->isChecked())
    {
        if(ui->clearAll_checkBox->isChecked())
        {
            if(fw->setConfigBits(FW_CFG_DEF_BATCH, 0) < 0)
                showError(GET_ERR_STR());
        }
        else
        {
            if(fw->setConfigBits(FW_CFG_DEF_BATCH, ui->defaultBatch_comboBox->count() - 1) < 0)
                showError(GET_ERR_STR());

        }
    }

    if (ui->i2cSlaveAdd_checkBox->isChecked())
    {
        if(fw->setConfigBits(FW_CFG_I2C_ADDRESS, ui->i2cSlaveAdd->text().toUInt()) < 0)
            showError(GET_ERR_STR());
    }

    if (ui->setSpreadSpectrum_checkBox->isChecked())
    {
        if(fw->setConfigBits(FW_CFG_SPREAD_SPECTRUM, ui->spreadSpectrum_comboBox->currentIndex()) < 0)
            showError(GET_ERR_STR());
    }

    if (ui->DMDBusSwap_checkBox->isChecked())
    {
        if(ui->bitSwapAMaster->isChecked())
        {
            if(fw->setConfigBits(FW_CFG_MASTER_DMD_A_SWAP, 1) < 0)
                showError(GET_ERR_STR());
        }
        else
        {
            if(fw->setConfigBits(FW_CFG_MASTER_DMD_A_SWAP, 0) < 0)
                showError(GET_ERR_STR());
        }

        if(ui->bitSwapBMaster->isChecked())
        {
            if(fw->setConfigBits(FW_CFG_MASTER_DMD_B_SWAP,1) < 0)
                showError(GET_ERR_STR());
        }
        else
        {
            if(fw->setConfigBits(FW_CFG_MASTER_DMD_B_SWAP,0) < 0)
                showError(GET_ERR_STR());
        }

        if(ui->channelSwapABMaster->isChecked())
        {
            if(fw->setConfigBits(FW_CFG_MASTER_DMD_AB_SWAP,1) < 0)
                showError(GET_ERR_STR());
        }
        else
        {
            if(fw->setConfigBits(FW_CFG_MASTER_DMD_AB_SWAP,0) < 0)
                showError(GET_ERR_STR());
        }

        if(ui->bitSwapASlave->isChecked())
        {
            if(fw->setConfigBits(FW_CFG_SLAVE_DMD_A_SWAP, 1) < 0)
                showError(GET_ERR_STR());
        }
        else
        {
            if(fw->setConfigBits(FW_CFG_SLAVE_DMD_A_SWAP, 0) < 0)
                showError(GET_ERR_STR());
        }

        if(ui->bitSwapBSlave->isChecked())
        {
            if(fw->setConfigBits(FW_CFG_SLAVE_DMD_B_SWAP,1) < 0)
                showError(GET_ERR_STR());
        }
        else
        {
            if(fw->setConfigBits(FW_CFG_SLAVE_DMD_B_SWAP,0) < 0)
                showError(GET_ERR_STR());
        }

        if(ui->channelSwapABSlave->isChecked())
        {
            if(fw->setConfigBits(FW_CFG_SLAVE_DMD_AB_SWAP,1) < 0)
                showError(GET_ERR_STR());
        }
        else
        {
            if(fw->setConfigBits(FW_CFG_SLAVE_DMD_AB_SWAP,0) < 0)
                showError(GET_ERR_STR());
        }

    }

    if(ui->updateFlashWaitCycle_checkBox->isChecked())
    {

        if(fw->setConfigBits(FW_CFG_FLASH_READ_DELAY,ui->readDelay->text().toUInt()) < 0)
            showError(GET_ERR_STR());
        if(fw->setConfigBits(FW_CFG_FLASH_WRITE_DELAY,ui->writeDelay->text().toUInt()) < 0)
            showError(GET_ERR_STR());
        if(fw->setConfigBits(FW_CFG_FLASH_WRITE_WIDTH,ui->writePulseWidth->text().toUInt()) < 0)
            showError(GET_ERR_STR());
        if(fw->setConfigBits(FW_CFG_FLASH_CS_HOLD,ui->CS_DataHoldTime->text().toUInt()) < 0)
            showError(GET_ERR_STR());

    }
}

/************************Handler functions******************/

/**
 * @brief MainWindow::on_chooseFirmware_Button_clicked
 */
void MainWindow::on_chooseFirmware_Button_clicked()
{
    QStringList fileNames;
    QFileInfo firmwareFileInfo;
    int indexMasterImage = 0;
    int indexSlaveImage = 0;

    //clearing the add  patterns, batch file controls
    ui->addBatchFile_checkBox->setChecked(false);
    ui->batchFileName_lineEdit->setText("");
    ui->clearAll_checkBox->setChecked(false);
    ui->addPat_checkBox->setChecked(false);
    ui->setAsDefaultBatch->setChecked(false);

    fileNames = QFileDialog::getOpenFileNames(this,
                                              QString("Select Firmware binary to update"),
                                              m_firmwarePath,
                                              "*.img");
    if (fileNames.size() <= 0)
        return;

    if((!m_dualAsic) && (fileNames.size() != 1))
    {
        showStatus("Choose only one firmware image for 1080p DMDs\n");
        return;
    }

    if(m_dualAsic)
    {
        if(fileNames.size() > 2)
        {
            showStatus("Maximum 2 firmware images can only be selected\n");
            return;
        }

        if (fileNames.size() == 2)
        {
            bool foundMaster = false, foundSlave = false;
            for(int i = 0; i < fileNames.size(); i++)
            {
                if(fileNames.at(i).endsWith("-master.img") || fileNames.at(i).endsWith("-master.bin"))
                {
                    foundMaster = true;
                    indexMasterImage = i;

                }
                if(fileNames.at(i).endsWith("-slave.img") || fileNames.at(i).endsWith("-slave.bin"))
                {
                    foundSlave = true;
                    indexSlaveImage = i;

                }
            }
            if (!foundMaster)
            {
                showStatus("Choose the correct master image. The image name should end with _master.img or _master.bin\n");
                return;
            }
            if (!foundSlave)
            {
                showStatus("Choose the correct slave image. The image name should end with _slave.img or _slave.bin\n");
                return;
            }
        }
    }

    firmwareFileInfo.setFile(fileNames.at(0));

    QDir dir = QFileInfo(firmwareFileInfo).absoluteDir();
    m_firmwarePath = dir.absolutePath();
    settings.setValue("FirmwarePath",m_firmwarePath);

    if (fileNames.size() == 2)
    {
        ui->firmwareName_textEdit->setText(fileNames.at(indexMasterImage));
        ui->firmwareName_textEdit->append(fileNames.at(indexSlaveImage));
    }
    else
    {
        ui->firmwareName_textEdit->setText(fileNames.at(0));
    }


    processChosenFirmwareImage();

}

/**
 * Flash programming callback funtion to update the progress
 * @param param Main window ui
 * @param oper Current operation
 * @param address Current Address
 * @param percent Percentage completed
 * @return 0
 */
static int flashCallback(void *param, FL_Operation_t oper, uint32 address,
                         uint08 percent)
{
    Ui::MainWindow *ui = (Ui::MainWindow *)param;
    char const *operText[] = { "Erasing", "Programming" };
    char dispText[256];
    sprintf(dispText, "%s : 0x%08X", operText[oper], address);
    ui->firmwareDownloadStat_textEdit->setText(dispText);
    ui->firmwareDownloadStat_progressBar->setValue(percent);
    QApplication::processEvents();
    return 0;
}

/**
 * @brief MainWindow::on_downloadFirmware_Button_clicked
 */
void MainWindow::on_downloadFirmware_Button_clicked()
{
    QString fileList = ui->firmwareName_textEdit->toPlainText();

    if (fileList.isEmpty())
    {
        showStatus("Error: Choose the firmware image to be updated\n");
        return;
    }

    QStringList fileNames = fileList.split("\n", QString::SkipEmptyParts);
    int indexMasterImage = 0;
    int indexSlaveImage = 0;
    char const *errMsg = NULL;

    if(fileNames.size() <= 0)
        return;

    if((!m_dualAsic) && (fileNames.size() != 1))
    {
        showStatus("Choose only one firmware image for 1080p DMDs\n");
        return;
    }

    if(m_dualAsic)
    {
        if(fileNames.size() > 2)
        {
            showStatus("Maximum 2 firmware images can only be selected\n");
            return;
        }
        if(fileNames.size() == 2)
        {
            bool foundMaster = false, foundSlave = false;
            for(int i = 0; i < fileNames.size(); i++)
            {
                if(fileNames.at(i).endsWith("-master.img") || fileNames.at(i).endsWith("-master.bin"))
                {
                    foundMaster = true;
                    indexMasterImage = i;

                }
                if(fileNames.at(i).endsWith("-slave.img") || fileNames.at(i).endsWith("-slave.bin"))
                {
                    foundSlave = true;
                    indexSlaveImage = i;

                }
            }
            if (!foundMaster)
            {
                showStatus("Choose the correct master image. The image name should end with _master.img or _master.bin\n");
                return;
            }
            if (!foundSlave)
            {
                showStatus("Choose the correct slave image. The image name should end with _slave.img or _slave.bin\n");
                return;
            }
        }
    }

    QFileInfo firmwareFileInfo;
    QTime waitEndTime;
    BootLoaderStaus blInfoFrmHW;
    int blMajor = 0;
    int blMinor = 0;
    int blPatch = 0;
    bool blFWVerUpdateNeeded = true;

    firmwareFileInfo.setFile(fileNames.at(0));

    QDir dir = QFileInfo(firmwareFileInfo).absoluteDir();
    m_firmwarePath = dir.absolutePath();
    settings.setValue("FirmwarePath",m_firmwarePath);

    uint32 blSize = m_firmware->getBLSize();
    uint32 progOffset = blSize;


    if((int)blSize < 0)
        showError(GET_ERR_STR());

    ui->firmwareupdate_label->setText("Entering programming mode...");

    if(LCR_EnterProgrammingMode() < 0)
    {
        errMsg = "Unable to Enter Programming Mode";
        goto exit;
    }


    //If going from normal mode to bootloader mode, wait until connection closes; then wait again for reconnection
    USB_Close();
    waitEndTime = QTime::currentTime().addSecs(5);

    while(true)
    {
        //Update the GUI
        QApplication::processEvents();
        //timeout in case the target is already in bootloader mode.
        if(QTime::currentTime() > waitEndTime)
        {
            break;
        }
    }

    while(ui->connectButton->isEnabled() == false)
    {
        QApplication::processEvents(); //Update the GUI
    }

    /* Wait. Else sometimes flash cannot be accessed */
    waitEndTime = QTime::currentTime().addSecs(3);
    while(true)
    {
        QApplication::processEvents(); //Update the GUI
        if(QTime::currentTime() > waitEndTime)
            break;
    }

    ui->firmwareupdate_label->setText("Getting flash info...");

    //Disable the timer
    usbPollTimer->stop();

    FL_SetCallback(flashCallback, (void *)ui);

    if(LCR_GetBLStatus(&blInfoFrmHW) < 0)
    {
        errMsg = "Unable to get bootloader information";
        goto exit;
    }

    if(m_firmware->getBLVersion(&blMajor,&blMinor,&blPatch)== 0)
    {
        unsigned long blVerOnFile;
        unsigned long blVerOnHW;

        //Build big number of version
        blVerOnHW = MAKE_WORD32(0,blInfoFrmHW.blVerMajor,
                                blInfoFrmHW.blVerMinor,
                                blInfoFrmHW.blVerPatch);

        //Build big number of version
        blVerOnFile = MAKE_WORD32(0, blMajor, blMinor, blPatch);

        //If BL on HW is latest then skip
        if(blVerOnHW >= blVerOnFile)
        {
            blFWVerUpdateNeeded = false;
        }

        //Old firmware 1.1 detected, has v1.0.0 as BL Version
        //must use old method of erasing an programming the bootloader
        if(blVerOnHW <= 0x010000)
        {
            //Ensure the SetDataLength and SetAddress for firmware update
            //fallback to v1.0.0 bootloader supported commands
            FL_UseLegacyCommands(1);
        }
    }

    if(blFWVerUpdateNeeded)
    {
        QString title("BOOT LOADER UPDATE PENDING...");

        QString msg = QString("Bootloader needs update.\n"
                              "Exisiting on HW - v%1.%2.%3\nNew - %4.%5.%6.\n"
                              "Select YES to update bootloader")
                .arg(blInfoFrmHW.blVerMajor).arg(blInfoFrmHW.blVerMinor)
                .arg(blInfoFrmHW.blVerPatch).arg(blMajor)
                .arg(blMinor).arg(blPatch);

        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(0, title, msg,
                                      QMessageBox::Yes|QMessageBox::No);

        if (reply != QMessageBox::Yes)
        {
            blFWVerUpdateNeeded = false;
        }
    }

    if(blFWVerUpdateNeeded)
        progOffset = 0;

    if(FL_UpdateFlashInfo("Flash/FlashDeviceParameters.txt") < 0)
    {
        errMsg = GET_ERR_STR();
        goto exit;
    }

    ui->firmwareDownloadStat_progressBar->setValue(0);

    if ((m_dualAsic) && (fileNames.size() == 2))
    {
        ui->firmwareupdate_label->setText("Programming DLPC900 Master...");

        //TODO KV
        LCR_EnableMasterSlave(1,0);

        if (FL_ProgramFlash(fileNames.at(indexMasterImage).toLatin1().data(),
                            progOffset, 0))
        {
            ui->firmwareDownloadStat_textEdit->clear();
            ui->firmwareDownloadStat_progressBar->setValue(0);
            errMsg = GET_ERR_STR();
            goto exit;
        }

        /* Wait. Else sometimes flash cannot be accessed */
        waitEndTime = QTime::currentTime().addSecs(3);
        while(true)
        {
            QApplication::processEvents(); //Update the GUI
            if(QTime::currentTime() > waitEndTime)
                break;
        }

        ui->firmwareupdate_label->setText("Programming DLPC900 Slave...");

        LCR_EnableMasterSlave(0,1);

        if (FL_ProgramFlash(fileNames.at(indexSlaveImage).toLatin1().data(),
                            progOffset, 0))
        {
            ui->firmwareDownloadStat_textEdit->clear();
            ui->firmwareDownloadStat_progressBar->setValue(0);
            errMsg = GET_ERR_STR();
            goto exit;
        }

        LCR_EnableMasterSlave(1,1);
    }
    else
    {
        ui->firmwareupdate_label->setText("Programming DLPC900 firmware...");
        //Update the GUI
        QApplication::processEvents();

        if (FL_ProgramFlash(fileNames.at(0).toLatin1().data(), progOffset, 0))
        {
            ui->firmwareDownloadStat_textEdit->clear();
            ui->firmwareDownloadStat_progressBar->setValue(0);
            errMsg = GET_ERR_STR();
            goto exit;
        }
    }

exit:

    if(errMsg)
    {
        showError(errMsg);
        ui->firmwareupdate_label->setText("Programming Failed.");
    }
    else
    {
        ui->firmwareupdate_label->setText("Programming Completed successfully.");

    }
    ui->firmwareDownloadStat_textEdit->clear();
    ui->firmwareDownloadStat_progressBar->setValue(0);
    QApplication::processEvents();

    usbPollTimer->start();
    LCR_ExitProgrammingMode(); //Exit programming mode; Start application.
}

void MainWindow::on_saveBatchFile_Button_2_clicked()
{
    int index = ui->firmwareBatchFile_comboBox->currentIndex();

    if(index < 0 || index >= ui->firmwareBatchFile_comboBox->count())
        return;

    BAT_BatchFile_t* batchFile = m_firmware->getBatchFile(index);

    if(batchFile == NULL)
        return;

    QString batchFileName = QFileDialog::getSaveFileName(this,
                                              QString("Batch file name to save"),
                                              m_batchFilePath,
                                              "*.txt");

    if(BAT_SaveToFile(batchFile, batchFileName.toLatin1().data()) < 0)
    {
        showError(GET_ERR_STR());
        return;
    }
}

/**
 * @brief
 */
void MainWindow::on_firmwareBatchFile_comboBox_currentIndexChanged(int index)
{
    if(index < 0 || index >= ui->firmwareBatchFile_comboBox->count())
    {
        ui->frmwBatchFile_tbl->setRowCount(0);
        return;
    }

    BAT_BatchFile_t* batchFile = m_firmware->getBatchFile(index);

    if(batchFile == NULL)
    {
        ui->frmwBatchFile_tbl->setRowCount(0);
        return;
    }

    displayBatchFile(batchFile, ui->frmwBatchFile_tbl);
}

/**
 * @brief MainWindow::on_deleteBatch_Button_clicked
 */
void MainWindow::on_deleteBatch_Button_clicked()
{
    int id = ui->firmwareBatchFile_comboBox->currentIndex();
    if(m_firmware->removeBatchFile(id) < 0)
        showError(GET_ERR_STR());
    ui->firmwareBatchFile_comboBox->removeItem(id);
    ui->defaultBatch_comboBox->removeItem(id);
}
/**
 * @brief MainWindow::on_updateFirmware_Button_clicked
 */
void MainWindow::on_updateFirmware_Button_clicked()
{

    bool isAddPatterns = ui->addPat_checkBox->isChecked();

    if (ui->firmwareName_textEdit->toPlainText().isEmpty())
    {
        showStatus("Error: Choose the firmware image to be updated\n");
        return;
    }


    QStringList fileNameList = (ui->firmwareName_textEdit->toPlainText()).split("\n", QString::SkipEmptyParts);

    if(m_firmware == NULL)
    {
        m_firmware = new Firmware(fileNameList[0]);
    }
    if((fileNameList.size() > 1) && m_dualAsic && m_firmwareSlave == NULL)
        m_firmwareSlave = new Firmware(fileNameList[1]);

    if(m_firmwareSlave == NULL) //if only one image is slected, save the same as slave
       m_firmwareSlave  = new Firmware(fileNameList[0]);

    //update once this function added in firmware

    //Prevent using old Firmware v1.1 and v1.0 on this GUI tool
    int blMajor, blMinor,blPatch;
    if(m_firmware->getBLVersion(&blMajor,&blMinor,&blPatch) < 0)
    {
        //The firmware binary is old one and you must use old GUI
        //tool if you would like revert back
        showCriticalError("Please use GUI tool v1.1 or earlier to build images with firmware v1.1 or earlier..");
        return;
    }

    //For Dual ASIC and the input has master and slave image selected check
    // the second file bootloader version is correct
    if(m_dualAsic && m_firmwareSlave)
    {
        if(m_firmwareSlave->getBLVersion(&blMajor,&blMinor,&blPatch) <  0)
        {
            //The firmware binary is old one and you must use old GUI
            //tool if you would like revert back
            showCriticalError("Please use GUI tool v1.1 or earlier to build images with firmware v1.1 or earlier..");
            return;
        }
        //Check for dual asic system both master and slave has same number of batchfiles
        //and splash images else they are not in sync so signal error
        if(m_firmware->getNumBatchFiles()!=m_firmwareSlave->getNumBatchFiles())
        {
            showCriticalError("Master and Slave firmware image files not in sync - number of batchfiles mismatch");
            return;
        }

        if(m_firmware->getNumSplashes()!=m_firmwareSlave->getNumSplashes())
        {
            showCriticalError("Master and Slave firmware image files not in sync - number of 24-bit images mismatch");
            return;
        }

    }

    if (ui->clearAll_checkBox->isChecked())
    {
        int batchfileCount = m_firmware->getNumBatchFiles();

        if(batchfileCount < 0)
            showError(GET_ERR_STR());

        for(int i = batchfileCount - 1; i >= 0 ; i--)
        {
            if(m_firmware->removeBatchFile(i) < 0)
                showError(GET_ERR_STR());
            if(m_dualAsic && m_firmwareSlave)
            {
                if(m_firmwareSlave->removeBatchFile(i) < 0)
                    showError(GET_ERR_STR());
            }
        }

        int splashCount = m_firmware->getNumSplashes();
        if(splashCount < 0)
            showError(GET_ERR_STR());

        for(int i = splashCount - 1; i >= 0 ; i-- )
        {
            if(m_firmware->removeSplash(i) < 0)
                showError(GET_ERR_STR());

            if(m_dualAsic && m_firmwareSlave)
            {
                if(m_firmwareSlave->removeSplash(i) < 0)
                    showError(GET_ERR_STR());
            }
        }
    }


    if (ui->addBatchFile_checkBox->isChecked())
        if (addBatchFile(&isAddPatterns))
            return;

    if (ui->addPat_checkBox->isChecked())
    {
        if(isAddPatterns)
         {
            if (addPatterns())
            {
                ui->addPat_checkBox->setChecked(true);
                return;
            }
        }
    }
    if (ui->firmwareName_textEdit->toPlainText().isEmpty())
    {
        showStatus("Error: Choose the firmware image to be updated\n");
        return;
    }

    updateFWConfigData(m_firmware);

    QString outFileName;

    //To avoid overwriting files with same name
    //add date and time information to file
    QDate cDate;
    QTime cTime;

    QString date = cDate.currentDate().toString("MMddyyyy");
    QString time = cTime.currentTime().toString("HHmmss");

    if(m_dualAsic)
        outFileName = "dlp9000_" + date + time + "_firmwareimg-master.img";
    else
        outFileName = "dlp6500_" + date + time + "_firmwareimg.img";

    QString outFile(m_firmwarePath + "/" + outFileName);

    if(m_firmware->saveToFile(outFile) < 0)
    {
        showError(GET_ERR_STR());
        return;
    }

    QString statusMaster = "Firmware binary saved as " + outFile + "\n";


    QString outFileslave = "";

    if(m_dualAsic && m_firmwareSlave)
    {
        updateFWConfigData(m_firmwareSlave);

        outFileName = "dlp9000_" + date + time + "_firmwareimg-slave.img";

        outFileslave = m_firmwarePath + "/" + outFileName;
        if(m_firmwareSlave->saveToFile(outFileslave) < 0)
        {
            showError(GET_ERR_STR());
            return;
        }

        QString status  = statusMaster + "Slave binary saved as " + outFileslave;
        showStatus((const char*)status.toLocal8Bit().data());

    }

    else
        showStatus((const char*)statusMaster.toLocal8Bit().data());


    processChosenFirmwareImage();

    return;
}
