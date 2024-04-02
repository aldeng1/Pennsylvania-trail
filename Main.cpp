#include<iostream>
#include <cstdlib> 

#include"begingameselection.h"
#include"nameanddateselection.h"
#include"TrailStops.h"				//trailstops stop;    100 Harrisburg  200 State College    350  Pittsburgh     500 Erie
#include"probabilities.h"	
#include"items.h"	

int main()
{
	int distance = 0, score = 0, number;
	std::string name;

	begingameselection start;

	nameanddateselection names;

	trailstops stop;

	probabilities step;

	store update;




	stop.Philadelphia(&distance);

	while (distance < 500)		//Miles from Philadelphia to Lake Erie
	{

		if (distance % 5 == 0)			//Stops the code every 5 miles so the player can have a chnace to look at map/hunter/inventory menu
		{
			if (update.getfood() < 5)
			{
				std::cout << "You have ran out of food! Your journey ends here. Good luck next time!" << std::endl;
				exit(0);
			}
			else
			{
				update.setfoodless(5);
			}

			step.operate();


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
				name = names.getnamepassaway();
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

		distance = distance + 1;
	}

	if (start.getcharacternumber() == 1)
	{
		score= (300* names.getremainingnames()) + (update.getbank()) + (40* update.gethorses()) + (10* update.getwheels()) + (update.getbullets()) + (3*update.getfood());
	}
	else if (start.getcharacternumber() == 2)
	{
		score = (200 * names.getremainingnames()) + update.getbank() + (40 * update.gethorses()) + (10 * update.getwheels()) + (update.getbullets()) + (3 * update.getfood());
	}
	else if (start.getcharacternumber() == 3)
	{
		score = (100 * names.getremainingnames()) + update.getbank() + (40 * update.gethorses()) + (10 * update.getwheels()) + (update.getbullets()) + (3 * update.getfood());
	}	

	std::cout << "Congratulations on completing your adventure and reaching Erie!\nYou have reached a score of " << score << " points." << std::endl;

	return 0;
}