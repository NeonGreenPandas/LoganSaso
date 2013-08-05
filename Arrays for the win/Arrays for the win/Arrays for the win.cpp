// Arrays for the win.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>


using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Sleep(300);




	ifstream numberin;
	ofstream numberout;

	numberin.open("numberstest");
	int num1;
	int num2;

	numberin >> num1 >> num2;

	numberin.close();
	numberout.close();

	return 0;
}

