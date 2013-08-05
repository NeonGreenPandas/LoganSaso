// File Writing and Reading.cpp : Defines the entry point for the console application.
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


	//This can be used to ask for and store names in a file called name.txt


	


	ifstream streamin;
	ofstream streamout;
	 string name;
	streamout.open("name.txt");
	cout << "Please enter your name." << endl;
	getline(cin, name);
	streamout << name;
	


	// in_stream.close();
	// out_stream.close();
	

	
















	//recieves name
	streamin.open("name.txt");

	//if there is an error
	if (streamin.fail())
	{
		cout << "An error has occured. The file or folder does not exist or is not readable." << endl;

		//exits the program
		exit(1);



	}


	cout << "This is the name you entered earlier: " << name << endl;





	streamin.close();
	streamout.close();




















return 0;





}