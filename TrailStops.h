#pragma once
#include<iostream>
#include <cstdlib>
#include <ctime>

#include "map.h"

class trailstops
{

private:

	int number=0;
	int hunting;

	mapdata currentlocation;

public:


	void Philadelphia(int distance)
	{	
		while (number != 1)
		{

			std::cout << "Welcome to Philadelphia and the start of your adventure!" << std::endl;
			std::cout << "1. Continue on Trail\n2. Check Supplies\n3.Look at map\n4. Change Food Rations\n5. Buy Supplies" << std::endl;
			//We could consider coding more and adding something about trading with people, and how to set pace and rest time etc.
			std::cin >> number;

			if (number == 2)
			{
				//Have to brain storm an idea of how to keep this information available
			}
			else if (number == 3)
			{
				currentlocation.map(distance);
			}
			else if (number == 4)
			{
				//Going to have another h file deal with the food rations  WAIT to do this one last code is getting complicated
			}
			else if (number == 5)
			{
				//get function to buy supplies have not made code yet
				//create a different h file for this and just call it here bc it will be used in many places
			}

		}

	}

	void Harrisburg(int distance)
	{
		while (number != 1)
		{

			std::cout << "Welcome to Harrisburg! Ensure to prepare more supplies before you continue your adventure!" << std::endl;
			std::cout << "1. Continue on Trail\n2. Check Supplies\n3.Look at map\n4. Change Food Rations\n5. Buy Supplies" << std::endl;
			//We could consider coding more and adding something about trading with people, and how to set pace and rest time etc.
			std::cin >> number;

			if (number == 2)
			{
				//Have to brain storm an idea of how to keep this information available
			}
			else if (number == 3)
			{
				currentlocation.map(distance);
			}
			else if (number == 4)
			{
				//Going to have another h file deal with the food rations
			}
			else if (number == 5)
			{
				//get function to buy supplies have not made code yet
				//create a different h file for this and just call it here bc it will be used in many places
			}

		}
	}

	void StateCollege(int distance)
	{
		while (number != 1)
		{

			std::cout << "Welcome to State College! Ensure to prepare more supplies before you continue your adventure!" << std::endl;
			std::cout << "1. Continue on Trail\n2. Check Supplies\n3.Look at map\n4. Change Food Rations\n5. Buy Supplies" << std::endl;
			//We could consider coding more and adding something about trading with people, and how to set pace and rest time etc.
			std::cin >> number;

			if (number == 2)
			{
				//Have to brain storm an idea of how to keep this information available
			}
			else if (number == 3)
			{
				currentlocation.map(distance);
			}
			else if (number == 4)
			{
				//Going to have another h file deal with the food rations
			}
			else if (number == 5)
			{
				//get function to buy supplies have not made code yet
				//create a different h file for this and just call it here bc it will be used in many places
			}

		}
	}

	void Pittsburgh(int distance)
	{
		while (number != 1)
		{

			std::cout << "Welcome to Pittsburgh! Ensure to prepare more supplies before you continue your adventure!" << std::endl;
			std::cout << "1. Continue on Trail\n2. Check Supplies\n3.Look at map\n4. Change Food Rations\n5. Buy Supplies" << std::endl;
			//We could consider coding more and adding something about trading with people, and how to set pace and rest time etc.
			std::cin >> number;

			if (number == 2)
			{
				//Have to brain storm an idea of how to keep this information available
			}
			else if (number == 3)
			{
				currentlocation.map(distance);
			}
			else if (number == 4)
			{
				//Going to have another h file deal with the food rations
			}
			else if (number == 5)
			{
				//get function to buy supplies have not made code yet
				//create a different h file for this and just call it here bc it will be used in many places
			}

		}
	}


	void midtrail(int distance)
	{
		while (number != 1)
		{

			std::cout << "You have stopped midtrail. Spend your time wisely." << std::endl;
			std::cout << "1. Continue on Trail\n2. Check Supplies\n3.Look at map\n4. Change Food Rations\n5. Go Hunting" << std::endl;
			//We could consider coding more and adding something about trading with people, and how to set pace and rest time etc.
			std::cin >> number;

			if (number == 2)
			{
				//Have to brain storm an idea of how to keep this information available
			}
			else if (number == 3)
			{
				currentlocation.map(distance);
			}
			else if (number == 4)
			{
				//Going to have another h file deal with the food rations
			}
			else if (number == 5)
			{

				srand(time(nullptr));

				hunting = rand() % 100 + 1;

				std::cout << "You have collected " << hunting << " pounds of food hunting.";

				//need to add this to food counter, and need to add 2 days to counter for hunting


			}

		}
	}




};
