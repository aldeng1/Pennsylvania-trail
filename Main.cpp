#include<iostream>
#include <cstdlib> 



#include"begingameselection.h"
#include"nameanddateselection.h"
#include"TrailStops.h"				//trailstops stop;    100 Harrisburg  200 State College    350  Pittsburgh     500 Erie
//#include""
//#include""
//#include""
//#include""
//#include""









int main()
{
	int distance = 0, score = 0;

	begingameselection start;

	nameanddateselection names;

	trailstops stop;







	stop.Philadelphia(distance);

	while (distance < 500)		//Miles from Philadelphia to Lake Erie
	{






		if (distance % 5 == 0)			//Stops the code every 5 miles so the player can have a chnace to look at map/hunter/inventory menu
		{
			stop.midtrail(distance);
		}






		if (distance==100) 
		{
			stop.Harrisburg(distance);
		}
		if (distance == 200)
		{
			stop.StateCollege(distance);
		}
		if (distance == 350)
		{
			stop.Pittsburgh(distance);
		}

		distance = distance + 1;
	}

	//do some score calculation with number of people left,amount of food left, character chosen, supplies, etc. This should be an easy step

	std::cout << "Congratulations on completing your adventure and reaching Erie!\nYou have reached a score of " << score << " points." << std::endl;

	return 0;
}