// File Self Example.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <Windows.h>
#include <string>
#include <fstream>
#undef max
#include <sstream>
#include <time.h>
#include <limits>


using namespace std;

void help();
void boss1();
void chapter1();
void chapter2();
void chapter3();
void endChapter1();
void endChapter2();
void wait();
void troll1();
void castle();
void trap();
void end();




string lowercase(string str);

	string action;
	int health;
	string race;
	string weapon;	
	char lives = 0;
	int score = 0;

int main()

{
	srand(time(NULL));
	string name;
	string confirmName;




	system("Color 74");
	cout << "Before we start, please know that this" << endl <<
	"project is not case sensitive" << endl;
	system("pause");
	system("cls");
	cout << "Hello, welcome to Ameridonia." << endl;
	system("pause");
	system("cls");
	cout << "Please enter your name." << endl;
	getline(cin, name);
	cout << "So your name is " << name << "? yes or no?" << endl;
	getline(cin, confirmName);
	confirmName = lowercase(confirmName);
	
	while (confirmName != "yes" && confirmName != "no")
	{

		cout << "You need to answer yes or no, other things do not work." << endl;
		getline(cin, confirmName);


	}
	if (confirmName == "no")
	{
		cout << "This is your last chance to pick a name." << endl;
		cout << "Please enter your name below." << endl;
		getline(cin, name);

	}
	if (name == "aaron" || name == "Aaron")
	{
		cout << "YOU DUN MESSED UP AARON" << endl;

	}
	else if (name == "Logan Saso" || name == "Logan" || name == "logan" || name == "logan saso")
	{
		cout << "It is good to have you back creator." << endl;
	}
	else if (name == "cole" || name == "Cole")
	{
		cout << "Oh hey cole." << endl;
	}


	cout << "Ok your name is " << name << "." << endl;
	system("pause");
	system("cls");
	cout << "Let us set up your character." << endl;
	system("pause");
	system("cls");
	cout << "How many lives would you like 1 (hard), 2 (medium), or 3 (easy)?" << endl;
	
	std::cin.ignore();
	std::cin.clear();
	if (std::cin >> lives)
	{
	
	
		while(lives != 1 && lives != 2 && lives != 3 && !isdigit(lives))
		{
			cout << "You need to input a number, not words." << endl;
			cout << "How many lives would you like 1 (hard), 2 (medium), or 3 (easy)?" << endl;
			cin.ignore();
			cin >> lives;
		}
	
	}

	
	int lives = 0;
   /*   std::cout << "How many lives would you like 1 (hard), 2 (medium), or 3 (easy)?" << std::endl;
    std::cin >> lives;


    while(!(std::cin >> lives) || lives < 1 || lives > 3)
    {
        std::cout << "You need to input a number, not words." << std::endl;
        std::cout << "How many lives would you like 1 (hard), 2 (medium), or 3 (easy)?" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits < std::streamsize >::max(), '\n');
		cin >> lives;
		if (lives == 1 || lives == 2 || lives == 3)
		{
			break;
		}
    }
	*/






	cout << "Ok, now your lives are saved for this session." << endl;
	system("pause");
	system("cls");

	cout << "What race would you like to be?" << endl;
	cout << "Elf, Dwarf, Knight, or Wizard" << endl;

	while (race != "elf" && race != "dwarf" && race != "knight" && race != "wizard" && race != "super logan" && race != "jarl expheric")

	{
		
		getline(cin, race);
		race = lowercase(race);

	}
	if (race == "elf")

	{
		race = "Elf";
	}

	else if (race == "dwarf")

	{
		race = "Dwarf";
	}
	else if (race == "knight")

	{
		race = "Knight";
	}
	else if (race == "wizard")
	{
		race = "Wizard";
	}
	else if (race == "super logan")
	{
		race = "Super Logan";
	}
	else 
	{
		race = "Jarl Expheric";
	}





	cout << "Ok, you are now a " << race << "." << endl;
	system("pause");
	system("cls");
	cout << "Ok " << name << ", the " << race <<  ", welcome to your adventure." << endl;
	system("pause");
	system("cls");
	

	cout << "You find yourself in forest deep within the heart of ameridonia." << endl
		 << "You do not remember who you are or where you came from or why." << endl
		 << "All you know is that you are a brave " << race << " and you need to" << endl
		 << "save the princess from her ultimate doom from the mightyest sorcerers." << endl
		 << "You are now on your way to save her. Go brave " << race << ", save her." << endl;


	wait();
	cout << "Chapter 1 start" << endl;
	wait();
	chapter1();
	cout << "Chapter 1 complete." << endl;
	wait();
	cout << "Chapter 2 start" << endl;
	wait();
	chapter2();
	cout << "Chapter 2 complete." << endl;
	wait();
	cout << "Finale Start." << endl;
	wait();
	chapter3();
	wait();

	return 0;
}




void chapter1()
{
	cout << "You walk along a lonley road littered" << endl <<
		  "with leaves and biodegrading leftovers." << endl;
	system("pause");
	system("cls");
	cout << "To your left you see dense forest." << endl <<
		   "You notice a cottage directly in front of you" << endl <<
		   "and a castle to your right." << endl << 
		   "Unfortunatly, it is not the castle with the princess." << endl;

	

	//cin.ignore();

	//getline(cin, action);



	
	while (true)



	{
			cout << "Where would you like to go?" << endl;
			cin >> action;
			action = lowercase(action);


			if (action == "forward")
			{
			cout << "You head toward the cottage at the edge of your view. \nThere is no light in the windows and nobody is home." << endl;
			system("pause");
			system("cls");
			cout << "You hear a slight snoring noise to your right." << endl << "Would you like to check it out? Yes or No?" << endl;
			string confirm;
			cin >> confirm;
			confirm = lowercase(confirm);
				if (confirm != "Yes" && confirm != "No" && confirm != "no" && confirm != "yes")
				{
					cout << "Please, be a good person. Don't make me keep having to talk to you." << endl;
				}
				else if (confirm == "no" || confirm == "No")
				{
					cout << "You return to the crossroads you were at before and start heading towards the castle." << endl;
					return;
			
				}
	
				else
				{
					boss1();
					break;
				
				}
			}

			else if (action == "left")
			{
				cout << "You walk into the forest to see the remenants of a small campfire." << endl
					<< "You pass it off as nothing and follow a small path through the trees." << endl;
				boss1();
			}
			else if (action == "right")
			{
				cout << "You head to the castle to your right." << endl;
				wait();
				return;
			}
			else
			{
				cout << "You can choose left right or forward." << endl;
				wait();


			}

	}






	return;
}




	void boss1()
	{



		string bossChoice1;
		cout << "You see a troll sleeping in a tree." << endl << "Trying not to wake him, you slowly walk away." << endl;
		wait();
		cout << "YOU FAIL TO CREEP AWAY AND THE MONSTER AWAKINS!!!!!!" << endl;
		system("pause");
		system("cls");
		cout << "Would you like to attack " << endl << "(Chance to die 50% chance for score 100% if you survive)" << endl << " or run (Chance to die 10% chance for score 0%)?" << endl << "Attack or Run" << endl;
		cout << "This boss is worth 50 points." << endl;
		cout << "You currently have " << score << " points" << endl;
		cin >> bossChoice1;
		bossChoice1 = lowercase(bossChoice1);
		int randomNumber;

		while(true)
		{

			if (bossChoice1 == "run")
			{
				randomNumber = rand()%11;
				cout << "You chosen to run" << endl;

				if(randomNumber == 0)
				{
					cout << "I am sorry, you died." << endl;
					score = score - 1;
					lives--;
					cout << "Your score has not changed, it is still zero." << endl;
					cout << "You now have " << lives << " lives." << endl;

				}
				else
				{
					cout << "You have ran away with the swiftness of the wind behind you." << endl;
					cout << "You head to the only civilization you can see, the castle." << endl;

				}


				break;
			}


			else if (bossChoice1 == "attack")
			{
				randomNumber = rand()%2;
				cout << "You chosen to attack" << endl;

				if(randomNumber == 0)
				{
					cout << "I am sorry, you died." << endl;
					score = score - 1;
					lives--;
					cout << "Your score has not changed, it is still zero." << endl;
					cout << "You now have " << lives << " lives." << endl;

				}
				else
				{
					cout << "You have killed the monster to reveal a shiny coin" << endl << " with writing saying 50 SCORE on it." << endl;
					score = score + 50;
					cout << "Your score is now " << score << "." << endl;
					cout << "You, brave " << race << " head to the castle to see if you can get some food and lodging." << endl;

				}


				break;
			}
		

			else 
			{
			cout << "Will you please just choose one of the options." << endl;
			cout << "Attack or Run" << endl;
			cin >> bossChoice1;
			system("pause");
			system("cls");
		
		
			}

		}
	}
	void wait()
	{
		system("pause");
		system("cls");
	}


void chapter2()
	{


		cout << "The castle is a welcoming place." << endl 
			 << "You meet some fine people in the marketplace." << endl 
			 << "After you rest, you ask for the castle the princess is captive in." << endl;
		cout << "You are told that there is a dark sorcerer to the west of the kingdom." << endl;
		cout << "Heading west you try to walk across a bridge and get stopped by a magical troll." << endl;
		wait();
		troll1();

	}
void troll1()
	{
		cout << "The troll speaks to you." << endl;
		cout << "Troll: You need to answer my riddle if you would like to pass." << endl;
		cout << "Troll: Use three consecutive days without using Wednesday, Friday, and Sunday." << endl;
		cout << "Enter your answer below." << endl;
		string answer;
		cin.ignore();
		getline(cin, answer);
		answer = lowercase(answer);
		






		while (true)
		{
		
			if(answer != "yesterday today tomorrow" && answer != "yesterday, today, tomorrow" && answer != "yesterday, today, and tomorrow" && answer != "yesterday today and tomorrow")
			{
				cout << "Would you like a hint?" << endl;
				string answer0;
				getline(cin, answer0);
				answer0 = lowercase(answer0);
				
				if (answer0 == "yes")
				{
						cout << "Your answer only has two words that end with 'day', the last one does not." << endl;
						cout << "Enter your answer below." << endl;
						string answer;
						cin.ignore();
						cin.clear();
						getline(cin, answer);
						answer = lowercase(answer);
						//wait();
						if (answer == "yesterday today tomorrow" || answer == "yesterday, today, tomorrow" || answer == "yesterday, today, and tomorrow" || answer == "yesterday today and tomorrow")
						{
							cout << "Good job, you may pass." << endl;
							break;
						}
						else
						{
							cout << "Make sure you spell correctly" << endl;
							wait();
							continue;
						}

				
				}
				else if (answer0 == "no")
				{

					
						cout << "Ok, you can be stubborn." << endl;
						cout << "Enter your answer below." << endl;
						//cin.ignore();
						getline(cin, answer);
						answer = lowercase(answer);
						if(answer == "yesterday today tomorrow" || answer == "yesterday, today, tomorrow" || answer == "yesterday, today, and tomorrow" || answer == "yesterday today and tomorrow")
						{
							cout << "Good job, you may pass." << endl;
							wait();
							return;
						
							
						}
						else
						{
							cout << "You need to make sure you spell correctly." << endl;
						}
					
				}
				wait();

			}
			else
			{
				cout << "Good job, you may pass." << endl;
				break;
				wait();

			}
		}		
	}


void chapter3()
 {
	cout << "You have crossed the bridge and you see a large castle in the distance." << endl;
	cout << "You can feel, in your heart, that the princess is in there." << endl;
	cout << "When you get there, you notice that there is a slight eerie noise echoing from the castle walls." << endl;
	cout << "You can see the princess locked away in the tallest room of the tallest tower." << endl;
	cout << "When you walk in, you see a thin wire heading along the ground and connected to a trap." << endl;
	wait();
	castle();
}

void castle()
	{
		while(0 < lives)
		{


			
			cout << "It appears the sorcer is not at home." << endl << "Unfortunatly, he has left a series of magical traps" << endl << "to prevent you from succeeding," << endl;
			cout << "You look for the stairs to go up to the princess," << endl <<
				"Before you get there, you come to a hallway of floating rocks." << endl;
			cout << "A sign tells you that there is only ONE succesful path" << endl << "across the TWO sets of rocks." << endl;
			wait();
			cout << "Each lane is labeled. Lane 1 is on the left and Lane 2 is on the right." << endl;
			cout << "Would you like to go left (lane 1) or right (lane 2)." << endl;
			string answer;
			getline(cin, answer);
			answer = lowercase(answer);
			if (answer == "left")
			{
				cout << "You have reached the rock safely and not fallen down." << endl;
				cout << "Where would you like to go now? Left or Right?" << endl;
				string answer0;
				getline(cin, answer0);
				answer0 = lowercase(answer0);
				if (answer0 == "right")
				{
				cout << "Good job, you have passed the first trap," << endl << "one more before you see the princess." << endl;
				wait();
				trap();
				}
				else if (answer == "right")
				{
				cout << "I am sorry, you have died." << endl;
				lives--;
				cout << "You have " << lives << " lives left." << endl;
			
			
			
			
			
			
				}
		
			}
			else
			{
			cout << "I am sorry, you have died." << endl;
			lives--;
			cout << "You now have " << lives << " lives." << endl;
			wait();
			
			}

		}
		cout << "I am sorry, you have no more lives." << endl;
		wait();
		cout << "GAME OVER" << endl;


	}

void trap()
	{
		cout << "You come to a room with spikes on the roof." << endl
			 << "There is TWO levers on the RIGHT wall." << endl;
		cout << "Which lever do you pull?" << endl;
		string answer1;
		cin >> answer1;
		answer1 = lowercase(answer1);
		if (answer1 == "right")
		{
			cout << "The door opens and you walk through." << endl;
			cout << "There is another TWO levers on the RIGHT wall." << endl;\
			cout << "What lever do you pull?" << endl;
			string answer2;
			cin.ignore();
			getline(cin, answer2);
			answer2 = lowercase(answer2);
			if (answer2 == "right")
			{
				cout << "Congradulations, you have made it through the second trap." << endl;
				wait();
				end();
			}
			else if (answer2 == "left")
			{
				cout << "I am sorry, you have died." << endl;
				lives--;
				cout << "You have " << lives << " lives." << endl;
				wait();
			}
			else
			{
				cout << "Bro really? Use a real answer." << endl;
				cout << "I will restart you at the second trap." << endl;
				trap();
			}
		}
		else if (answer1 == "left")
		{
			cout << "I am sorry, you have died." << endl;
			lives--;
			cout << "You have " << lives << " lives." << endl;
			wait();
			castle();
		}
		else
		{
		cout << "Bro really? Use a real answer." << endl;
		cout << "I will restart you at the second trap." << endl;
		trap();
		
		}


	}


void end()
	{
		cout << "You have reached the princess and the end of my game." << endl << "Thank you for playing!!" << endl;
		wait();
		cout << "Credits:" << endl << "Logan Saso..........Everything." << endl;
		cout << "You had a score of " << score << " and " << lives << " lives.";
		wait();
		exit(0);

	}



string lowercase(string str)
	{
		
		
		for (int i=0; i < str.length(); i++)
		{
			str[i] = tolower(str[i]);
		
		}

		return str;


	}









