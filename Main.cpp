#include<iostream>
#include <cstdlib> 
#include<string>

#include"begingameselection.h"
#include"nameanddateselection.h"
#include"TrailStops.h"				//trailstops stop;    100 Harrisburg  200 State College    350  Pittsburgh     500 Erie
#include"probabilities.h"	
#include"items.h"	

#define maxdist 500

template <typename T>

int disfunc(T x)
{
	return x + 1;
}

int main()
{
	int distance = 0, score = 0, number;
	std::string name;

	begingameselection start;

	nameanddateselection names;
	names.nameanddateselectionfunc();
	
	trailstops stop;

	stop.setbank( start.getinitialcash() );

	stop.Philadelphia(&distance);

	while (distance < maxdist)		//Miles from Philadelphia to Lake Erie
	{

		if (distance % 5 == 0)			//Stops the code every 5 miles so the player can have a chnace to look at map/hunter/inventory menu
		{
			if (stop.getfood() < 5)				//Inheritance from base class  items to trailstops
			{
				std::cout << "You have ran out of food! Your journey ends here. Good luck next time!" << std::endl;
				exit(0);
			}
			else
			{
				stop.setfoodless(5);			//Inheritance from base class  items to trailstops
			}

			stop.operate();				//Inheritance from base class probabilities to trailstops
			stop.datesoperate(names.getmonthnumber(),&distance);		//Inheritance from base class probabilities to trailstops


			std::cout << "You have traveled " << distance << " miles so far!" << std::endl;
			std::cout << std::endl;
			stop.midtrail(&distance);
		}

		if (distance==100) 
		{
			std::cout << "You have traveled " << distance << " miles so far!" << std::endl;
			std::cout << std::endl;
			stop.Harrisburg(&distance);
		}
		if (distance == 200)
		{
			std::cout << "As you arrive in state college, you decide if you want to visit a bar or not.\n"
				"1: Yes  2: No"<<std::endl;
			std::cin >> number;

			if (number == 1)
			{
				name = *names.getnamepassaway();
				std::cout << name << " has passed away after blacking out at the bar." << std::endl;

			}

			std::cout << "You have traveled " << distance << " miles so far!" << std::endl;
			std::cout << std::endl;
			stop.StateCollege(&distance);
		}
		if (distance == 350)
		{
			std::cout << "You have traveled " << distance << " miles so far!" << std::endl;
			std::cout << std::endl;
			stop.Pittsburgh(&distance);
		}

		int (*fcnptr)(int) { &disfunc };			//fucntion pointer initialized
		(*fcnptr)(distance);						//function pointer called

		distance = distance + 1;
		std::cout << distance << " miles traveled." << std::endl;
	}

	if (start.getcharacternumber() == 1)
	{
		score = (300* names.getremainingnames()) + (stop.getbank()) + (40* stop.gethorses()) + (10 * stop.getwheels()) + (stop.getbullets()) + (3 * stop.getfood());
		//Inheritance from base class  items to trailstops
	}
	else if (start.getcharacternumber() == 2)
	{
		score = (200 * names.getremainingnames()) + stop.getbank() + (40 * stop.gethorses()) + (10 * stop.getwheels()) + (stop.getbullets()) + (3 * stop.getfood());
		//Inheritance from base class  items to trailstops
	}
	else if (start.getcharacternumber() == 3)
	{
		score = (100 * names.getremainingnames()) + stop.getbank() + (40 * stop.gethorses()) + (10 * stop.getwheels()) + (stop.getbullets()) + (3 * stop.getfood());
		//Inheritance from base class  items to trailstops
	}	

	std::cout << "Congratulations on completing your adventure and reaching Erie!\nYou have reached a score of " << score << " points." << std::endl;

	return 0;
}