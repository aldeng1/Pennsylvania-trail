#include <iostream>
#include <cstdlib> 
#include <string>

#include"begingameselection.h"				//includes .h files
#include"nameanddateselection.h"		//includes .h files
#include"TrailStops.h"				//trailstops stop;    100 Harrisburg  200 State College    350  Pittsburgh     500 Erie
#include"probabilities.h"				//includes .h files
#include"items.h"					//includes .h files

#define maxdist 500				//preprocessor defined

template <typename T>				// template for function below

int disfunc(T x)			//function to return distance after each iteration
{
	return x + 1;
}

int main()
{
	int distance = 0, score = 0, number;
	std::string name;

	begingameselection start;					//calls begingameselection class and constructor

	nameanddateselection names;					//calls nameanddateselection class
	names.nameanddateselectionfunc();			//calls names class function
	
	trailstops stop;							//defines trailstop class. 

	stop.setbank( start.getinitialcash() );			//gets the value for inital cash and sets it in the trailstop class

	stop.Philadelphia(&distance);			//calls philadelphia function in trailstop class	

	while (distance < maxdist)		//Miles from Philadelphia to Lake Erie / where preproccesor is called
	{

		if (distance % 5 == 0)			//Stops the code every 5 miles so the player can have a chnace to look at map/hunter/inventory menu
		{
			if (stop.getfood() < 5)				//Inheritance from base class trailstops to derived class items
			{
				std::cout << "You have ran out of food! Your journey ends here. Good luck next time!" << std::endl;
				exit(0);		// if player runs out of food game ends
			}
			else
			{
				stop.setfoodless(5);			//Inheritance from base class trailstops to derived class items
			}

			stop.operate();				//Inheritance from base class trailstops to derived class probabilities
			stop.datesoperate(names.getmonthnumber(),&distance);		//Inheritance from base class trailstops to derived class probabilities


			std::cout << "You have traveled " << distance << " miles so far!" << std::endl;
			std::cout << std::endl;
			stop.midtrail(&distance);		//calls midtrial function in trailstop class to allow player to look at map, supplies, etc.
		}

		if (distance==100)			//distance to harrisburg
		{
			std::cout << "You have traveled " << distance << " miles so far!" << std::endl;
			std::cout << std::endl;
			stop.Harrisburg(&distance);		//calls harrisburg function in trailstop class to allow player to look at map, supplies, etc.
		}
		if (distance == 200)		//distance to state college
		{
			std::cout << "As you arrive in state college, you decide if you want to visit a bar or not.\n"
				"1: Yes  2: No"<<std::endl;
			std::cin >> number;

			if (number == 1)		//accepts number if equal to 1 chose by player
			{
				name = *names.getnamepassaway();		//calls name function in nameanddate class to get name of character who passed away
				std::cout << name << " has passed away after blacking out at the bar." << std::endl;

			}

			std::cout << "You have traveled " << distance << " miles so far!" << std::endl;
			std::cout << std::endl;
			stop.StateCollege(&distance);			//calls state college function in trailstop class to allow player to look at map, supplies, etc.
		}
		if (distance == 350)		//distance to pittsburgh
		{
			std::cout << "You have traveled " << distance << " miles so far!" << std::endl;
			std::cout << std::endl;
			stop.Pittsburgh(&distance);				//calls pittsburgh function in trailstop class to allow player to look at map, supplies, etc.
		}

		int (*fcnptr)(int) { &disfunc };			//fucntion pointer initialized
		(*fcnptr)(distance);						//function pointer called

		distance = distance + 1;	//inc distance by 1 mile
		std::cout << distance << " miles traveled." << std::endl;		//outputs miles traveled
	}

	if (start.getcharacternumber() == 1)		// calls if charcater is redneck
	{
		score = (300* names.getremainingnames()) + (stop.getbank()) + (40* stop.gethorses()) + (10 * stop.getwheels()) + (stop.getbullets()) + (3 * stop.getfood());
		//Inheritance from base class trailstops to derived class items
		//score derived from harder things to acheive gets a better score

	}
	else if (start.getcharacternumber() == 2)		//calls if character is amish
	{
		score = (200 * names.getremainingnames()) + stop.getbank() + (40 * stop.gethorses()) + (10 * stop.getwheels()) + (stop.getbullets()) + (3 * stop.getfood());
		//Inheritance from base class trailstops to derived class items
	}
	else if (start.getcharacternumber() == 3)			//calls if character is football player
	{
		score = (100 * names.getremainingnames()) + stop.getbank() + (40 * stop.gethorses()) + (10 * stop.getwheels()) + (stop.getbullets()) + (3 * stop.getfood());
		//Inheritance from base class trailstops to derived class items
	}	

	std::cout << "Congratulations on completing your adventure and reaching Erie!\nYou have reached a score of " << score << " points." << std::endl;
	// outputs score 

	return 0;		//finishes program
}