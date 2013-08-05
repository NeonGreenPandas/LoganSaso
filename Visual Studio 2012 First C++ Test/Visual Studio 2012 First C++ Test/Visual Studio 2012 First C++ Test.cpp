// Visual Studio 2012 First C++ Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>

using namespace std;

void wait();

int _tmain(int argc, _TCHAR* argv[])
{
	string choice;
	cout << "This is my first Visual Studio 2012 program." << endl;
	cout << "Basically, enter a word or sentence below and I will repeat it back to you." << endl;
	wait();
	getline(cin, choice);
	wait();
	cout << "This is your message." << endl;
	cout << choice << endl;
	wait();
	cout << "Thanks for trying this." << endl;
	wait();
	return 0;
}

void wait()
{
	system("pause");
	system("cls");
}