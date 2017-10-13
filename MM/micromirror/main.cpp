/*
*
*  Micromirror Project Main File
*
*  October 02 2017 by stas kanevksy
*
*/


//project includes:
#include "project_constants.h"
#include "helper_functions.h"

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









