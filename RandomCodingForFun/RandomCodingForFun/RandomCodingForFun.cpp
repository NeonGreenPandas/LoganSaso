#include "stdafx.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include <time.h>
#include <sstream>


void wait();

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x = 0;
	int y = 0;
	cout << "I want you to choose a number and enter it below." << endl;
	cin >> y;
	wait();
	cout << "Now I am going to generate a random number between 0 and " << y << endl;
	srand(time(NULL));
	while(true)
	{
		
		x = rand()%y;
		cout << x << endl;
		//Sleep(8);
		if (x == 42)
		{
			cout << "You randomly generated the meaning of life and all things." << endl;
			wait();
		}
	}






	return 0;
}

void wait()
	{
		system("pause");
		system("cls");
	}