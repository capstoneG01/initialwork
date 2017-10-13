/*
*
*  Micromirror Project Main File
*
*  October 02 2017 by stas kanevksy
*
*/


//project file includes:
#include "project_constants.h"
#include "helper_functions.h"
//API file includes:
#include "../../GUI/HiresLib/API.h"
#include "../../GUI/HiresLib/usb.h"
//system includes:
#include <stdio.h>      // standard input / output functions
#include <string.h>     // string function definitions
#include <fcntl.h>      // File control definitions
#include <errno.h>      // Error number definitions
#include <stdlib.h>
#include <iostream>
#include <fstream>



//using namespace std; // std:: is not needed is we are using a namespace...


int main(int argc, char **argv)
{
	int rollingValue = 0;	
	std::cout << "Micromirror main function start " << rollingValue << std::endl;
	//or
	//printf(""Micromirror main function start %d"\n",rollingValue);
	/*
	USB_SetFakeConnection(TRUE);

	USB_IsConnected();

	USB_Init();

	printf("USB Opened!\n");
	int usb = USB_Open();
	printf("%d USB Handle Number!",usb);

	uint08 x;
	int w = USB_Write(&x);
	printf("%d %d", w, &x);

	unsigned int a, b, c, d;
	int temp = LCR_GetVersion(&a, &b, &c, &d);
	printf("%d %d %d %d %d \n", temp, a, b, c, d);

	unsigned char e, f, g;
	int bla = LCR_GetBLStatus( &e , &f, &g);
	printf("%d %d %d %d %d \n", bla, e, f, g);

	unsigned char h = 'a';
	const char *i;
	int test = API_GetCommandName(h, &i);
	printf("%d %d", test, h);










COMMENTS TO DO:

I see the issue.  You are telling it to set up a "Fake" connection. In the GUI this is the Virtual Connection, but this will prevent you from actually connecting to USB.

Starting at the top of the directory where Sources is you want to go to Sources\GUI\mainwindow.cpp and look at the section "MainWindow::MainWindow(QWidget *parent) :" [Line 80]

In this section it calls USB_Init(), which happens as the GUI brings up the window and initializes the USB driver (but does not connect).

In this same file look at"void MainWindow::on_connectButton_clicked()" [Line 506]

Notice that it checks to see if USB is connected and calls USB_Open() if not.

Then it checks again and if it is connected it grabs a bunch of information and populates items throughout the GUI.

I understand where you are coming from, and hope this helps.



*/



















	
	std::cout << "I want to show you some balls... Please Enter a number: " ;
	std::cin >> rollingValue;
	print_balls(rollingValue);
	std::cout << "Thank you ! Enter any muner to to close....." << std::endl;
	std::cin >> rollingValue;
	
	std::cout << "Micromirror main function End " << rollingValue << std::endl;
	//or
	//printf(""Micromirror main function End %d"\n",rollingValue);
	return 0;
}









