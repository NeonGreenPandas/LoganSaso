// First Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>
#include <Windows.h>
#include <time.h>

using namespace std;



int sum(int num1,int num2);








int _tmain(int argc, _TCHAR* argv[])
{
	//is like double. can have decimals
	/* float f = 5.0;
	float a = 2.0;
	float c = f/a; *\

	//can have one number 1-128 or a letter 
	/* char e = 'c'; */

	//many chars in one (use this)
	/* string me = "creator"; */

	//displays something
	/* cout << "me"; */

	//endl used to end a line in cout
	// cout << "me"; << endl;

	//or use \n
	// cout << "me\n";

	//waits for input to put in x
	// cin >> x; 

	//can be true or false
	/* bool hadDog = true; */

	//When typing. I need to use things like personName or person_name to sepperate words in variables.









	//cout << "Hello World" << endl;
	//cout << c << endl;








	//first creator program. imperfect

	/* string x = "name";
	cout << "Please enter your name." << endl;
	cin >> x;
	if (x == "Logan")
	{
		cout << "Hello Creator" << endl;
	}
	cout << x << endl; */







// second creator program. better

	/*
	string myName;
	cout << "Hey, what's your name?" <<endl;
	cin >> myName;
	if (myName == "Logan")
	{
		cout << "Welcome back creator." << endl;
	}
	else
	{
		if (myName == "logan")
		{
		cout << "Welcome back creator." << endl;
		}
		else
		{
			cout << "Hello, " << myName << " thank you for running my program." << endl;
			system("pause");
			cout << "NOW YOU ARE HACKED!" << endl;
		}
	}
	*/
	


/*
	string myName;
	cout << "Hey, what's your name?" << endl;
	//cin.ignore();
	getline (cin, myName);
	cout << "Hello, " <<  myName << " nice to meet you. xD =D ;) <3" <<endl;

	*/

/*
	cout << "How many lives do you want?" << endl;
	int lives;
	cin >> lives;
	cout << "So you would like to have " << lives << " lives?" << endl;
	cout << "Yes or no?" << endl;
	string confirm;
	cin >> confirm;

	while (confirm != "yes" && confirm != "no")
	{
		cout << "You have to chose yes or no." << endl;
		cin >> confirm;
	}



	if (confirm == "no")
	{
		cout << "Ok, then how many lives would you like?" << endl;
		cin >> lives;
		
		if (lives == 42)
		{
			cout << "It appears you know the meaning of life and all things." << endl;
		}
		else
		{
		cout << "There we go, you have " << lives << " lives" << endl;
		}
	}
	else
	{
	
	if (lives == 42)
		{
			cout << "It appears you know the meaning of life and all things." << endl;
		}
	else
		{
		cout << "There we go, you have " << lives << " lives" << endl;
		}

	}
	*/



   /*
	cout << "Hello. Welcome to the world of your computer." << endl;
	system("pause");

	cout << "You will now embark on a magical" << endl
	 << "journey to the far off kingdoms of camalot." << endl;

	system("pause");

	cout << "Please choose your race." << endl;
	cout << "Dwarf  Knight  Druid  Wizard  Paladin  Shaco  or your choice" << endl;

	string race;
	getline(cin, race);

	cout << "So you want to be a " << race << "?" << endl;
	cout << "Yes or no?" << endl;

	string confirm;
	getline(cin, confirm);

	while (confirm != "yes" && confirm != "no")
	{
		cout << "You have to chose yes or no." << endl;
		cin >> confirm;
	}

	if (confirm == "no")
	{
		cout << "Ok, then what race would you like?" << endl;
		cout << "Dwarf  Knight  Druid  Wizard  Paladin  Shaco  or your choice" << endl;
		cin >> race;
		cout << "Good, you are now a " << race << endl;
	}
	else
	{
	cout << "Good, you are now a " << race << endl;
	}
	return 0;
	*/




	/* what do I want to do?
	I want to decide what I want for dinner each night of the week.


	logic:

	ask if I am hungry
	if yes, eat sushi
	if no, eat sushi\
	*/

/*
	cout << "Welcome to the dinner predictor 9000." << endl;


	system("pause");


	cout << "Are you hungry?" << endl;


	string hunger;


	getline(cin, hunger);

	if (hunger != "yes")
	{
		cout << "It does not matter, you want to eat sushi!" << endl;
	}

	else
	{
		cout << "GOOD, you want to eat sushi for dinner." << endl;
	}
	*/


/*



	string name;
	cout << "Please enter your first and last name." << endl;
	getline(cin, name);
	if (name == "goose")
	{
		cout << "Welcome to the black parade goose." << endl;
	}
	else  if(name == "logan")
	{
		cout << "Welcome back creator." << endl;
	}
	else  if(name == "will")
	{
		cout << "Your life now belongs to me." << endl;
	}
	else
	{
		cout << "Thank you for running my program." << endl;
	}



	*/
/*
	system("Color 6A");
	cout << "Ever wondered what your internal ip adress is?" << endl;
	system("pause");
	system("cls");
	cout << "When you continue, look for ipv4 adress." << endl;
	system("pause");
	system("cls");
	system("ipconfig");

	*/

/*	
	srand(time(NULL));
	int x=0;
	int a;
	for(a = 0; a < 20000; a++)
	{
	x++;
	cout << x;
	system("cls");
	int y = rand()%10;
	if(y==1)
		{
			system("Color A1");
		}
	else if(y==2)
		{
			system("Color B2");
		}
	else if(y==3)
		{
			system("Color C3");
		}

	else if(y==4)
		{
			system("Color D4");
		}
	else if(y==5)
		{
			system("Color E5");
		}
	else if(y==6)
		{
			system("Color F6");
		}
	else if(y==7)
		{
			system("Color D7");
		}

	else if(y==8)
		{
			system("Color F8");
		}
	else if(y==9)
		{
			system("Color F9");
		}
	else
		{
			system("Color F0");
		}

	
	}
	*/
	
/*

	srand(time(NULL));
	cout << "Lets play a game. I am going to choose a number between one and ten." << endl;
	system("pause");
	system("cls");
	int realNumber = rand()%11;
	int guess;
	cout << "Ok, I have my number." << endl;
	system("pause");
	system("cls");
	cout << "Please enter your guess below." << endl;
	cin >> guess;
	cout << "Your guess is being processed." << endl;
	system("pause");
	system("cls");
	while(guess != realNumber)
	{
		if (guess < realNumber)
		{
			cout << "Your guess is to low, please try again." << endl;
			cin >> guess;
		}
		else if (guess > realNumber)
		{
			cout << "Your guess is to high, please try again." << endl;
			cin >> guess;
		}
		else
		{
			cout << "You have to put in a number. Please try again." << endl;
			cin >> guess;
		}
			
	}

	cout << "Great job!!! You guessed it." << endl;

	*/






int num1 = 7;
int num2 = 3;
int num3 = sum(num1,num2);
cout << num3 << endl;





	return 0;
}


int sum(int num1, int num2)
{
	return(num1 + num2);
}