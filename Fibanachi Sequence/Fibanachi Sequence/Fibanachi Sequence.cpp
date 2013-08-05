// Fibanachi Sequence.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <string>
#include <sstream>
#include <time.h>


using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{


	int fibArray[50];
	fibArray[0] = 0;
	fibArray[1] = 1;
	for (int i=2; i<50, i++;)
	{
		fibArray[i] = fibArray[i-1] + fibArray[i-2];


	}
	for (int i=0; i<50; i++)
	{
		cout << fibArray[i] << endl;


	}























	return 0;
}

