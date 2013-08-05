// File Self Example.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <Windows.h>
#include <string>
#include <fstream>
#include <iostream>
#include <time.h>



using namespace std;


int _tmain(int argc, _TCHAR* argv[])

{

	ifstream filein;
	ofstream fileout;
	int lives;
	string race;
	string weapon;

	cout << "Hello, welcome to ameridonia." << endl;
	system("pause");
	system("cls");
	cout << "First, you have to set up your character." << endl;
	system("cls");
	cout << "How many lives would you like one through five?" << endl;
	cin >> lives;

	while (lives != 1 && lives != 2 && lives != 3 && lives != 4 && lives != 5)

	{
		cout << "Please, I am not stupid." << endl << "Type in a number 1-5" << endl;
		cin >> lives;
	}
	
	fileout.open("lives.txt");
	fileout << lives;

	cout << "Ok, now your lives will be permenetly saved." << endl;
	system("pause");
	system("cls");

	cout << "What race would you like to be? Elf, Dwarf, Knight, or Wizard." << endl;
	system("pause");
	system("cls");
	

	cout << "You find yourself in forest deep withen the heart of ameridonia." << endl
		 << "You do not remember who you are or where you came from or why." << endl
		 << "All you know is that you are a brave" << race << "and you need to" << endl
		 << " save the princess from her ultimate doom from the mightyest sorcerers." << endl
		 << "You are now on your way to save her. Go brave " << race << ", save her." << endl;





































	return 0;
}

