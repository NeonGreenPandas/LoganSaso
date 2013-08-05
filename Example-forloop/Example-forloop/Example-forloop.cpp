// Example-forloop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <string>
#include <time.h>




using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x = 1;
	char y = 1;
	srand(time(NULL));
	int x; 
	x = rand()%11;



	while (x<5)
	{
		y++;
		cout << y;
		
		

		if (x = 1)
		{
			system("Color 0");
		}
		else if (x = 2)
		{
			system("Color 1");
		}
		else if (x = 3)
		{
			system("Color 2");
		}
		else if (x = 4)
		{
			system("Color 3");
		}

		else if (x = 5)
		{
			system("Color 4");
		}

		else if (x = 6)
		{
			system("Color 5");
		}

		else if (x = 7)
		{
			system("Color 6");
		}

		else if (x = 8)
		{
			system("Color 7");
		}


		else if (x = 9)
		{
			system("Color 8");
		}

		else if (x = 10)
		{
			system("Color 9");
		}


































		
	}

	return 0;
}

