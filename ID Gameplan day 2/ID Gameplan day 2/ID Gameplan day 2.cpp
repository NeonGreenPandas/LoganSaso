// ID Gameplan day 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <iostream>
#include <Windows.h>
#include <string>
#include <time.h>
#include <fstream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{




	ifstream in_stream;
	ofstream out_stream;
	 
	string name;
	out_stream.open("name.txt");
	cout << "Please enter your name." << endl;
	cin >> name;
	out_stream << name;



	in_stream.close();
	out_stream.close();
	






























































































































































	return 0;
}

