

/*
*
*  Micromirror Project Main File
*
*  October 02 2017 by stas kanevksy
*
*/


//project file includes:
//#include "project_constants.h"
#include "helper_functions.h"
//API file includes:
//#include "c:\Texas Instruments-DLP\DLPC900REF-SW-3.0.0\DLPC900REF-GUI\Sources\GUI\HiresLib\API.h"
//#include "c:\Texas Instruments-DLP\DLPC900REF-SW-3.0.0\DLPC900REF-GUI\Sources\GUI\HiresLib\usb.h"
#include "HiresLib\usb.h"
//#include "HiresLib\API.h"
//system includes:
#include <stdio.h>// standard input / output functions
#include <string.h>     // string function definitions  // File control definitions
#include <errno.h>// Error number definitions
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <windows.h>


//using namespace std; // std:: is not needed is we are using a namespace...


int main(int argc, char **argv)
{
	int rollingValue = 0;
	std::cout << "Micromirror main function start " << rollingValue << std::endl;
	//or
	//printf(""Micromirror main function start %d"\n",rollingValue);
	
	//USB_SetFakeConnection(TRUE);



	//USB_IsConnected();

	int usb_handle;
	USB_Init();

	if (USB_IsConnected() == false)
	{
		usb_handle = USB_Open();
	}

	if (USB_IsConnected())
	{
	}

	
	printf("USB Opened! %d \n", usb_handle);
	/*int usb = USB_Open();
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
	printf("%d %d", test, h);*/

/*
	std::cout << "I want to show you some balls... Please Enter a number: ";
	std::cin >> rollingValue;
	print_balls(rollingValue);
	std::cout << "Thank you ! Enter any muner to to close....." << std::endl;
	std::cin >> rollingValue;
*/
	std::cout << "Micromirror main function End " << rollingValue << std::endl;
	//or
	//printf(""Micromirror main function End %d"\n",rollingValue);
	return 0;
}









