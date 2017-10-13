// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	printf("Primes\nPlease enter a number...\n");
	do {
		n = getchar();
		printf("You chose %c\n", n);
	} while (n != '.');
	return 0;
}

