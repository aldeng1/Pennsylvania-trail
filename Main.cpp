#include<iostream>
#include <cstdlib> 

#include"begingameselection.h"
#include"nameanddateselection.h"
#include"TrailStops.h"				//trailstops stop;    100 Harrisburg  200 State College    350  Pittsburgh     500 Erie



int main()
{

	int distance = 0, score = 0;

	begingameselection start;

	nameanddateselection names;

	trailstops stop;




	stop.Philadelphia(&distance);

	while (distance < 500)		//Miles from Philadelphia to Lake Erie
	{


		if (distance % 5 == 0)			//Stops the code every 5 miles so the player can have a chnace to look at map/hunter/inventory menu
		{
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

		distance = distance + 1;
	}

	//do some score calculation with number of people left,amount of food left, character chosen, supplies, etc. This should be an easy step

	std::cout << "Congratulations on completing your adventure and reaching Erie!\nYou have reached a score of " << score << " points." << std::endl;

	return 0;
}