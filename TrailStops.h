#pragma once
#include<iostream>
#include <cstdlib>
#include <ctime>

#include "map.h"
#include "Items.h"


class trailstops
{

private:

	int number=0;
	int hunting;

	mapdata currentlocation;
	store supplies;

public:


	void Philadelphia(int* distance)
	{	
		while (number != 1)
		{

			std::cout << "Welcome to Philadelphia and the start of your adventure!" << std::endl;
			std::cout << "1. Continue on Trail\n2. Check Supplies\n3. Look at map\n4. Buy Supplies" << std::endl;
			std::cin >> number;
			std::cout << std::endl;

			if (number == 2)
			{
				std::cout << "Horses:         " << supplies.gethorses() <<std::endl;
				std::cout << "Wheels:         " << supplies.getwheels() << std::endl;
				std::cout << "Bullets:        " << supplies.getbullets() << std::endl;
				std::cout << "Food:           " << supplies.getfood() << std::endl;
				std::cout << "Cash:           " << supplies.getbank() << std::endl;
			}
			else if (number == 3)
			{
				currentlocation.map(distance);
			}
			else if (number == 4)
			{
				supplies.store1();
			}
		}
		number = 0;
	}

	void Harrisburg(int* distance)
	{
		while (number != 1)
		{

			std::cout << "Welcome to Harrisburg! Ensure to prepare more supplies before you continue your adventure!" << std::endl;
			std::cout << "1. Continue on Trail\n2. Check Supplies\n3. Look at map\n4. Buy Supplies" << std::endl;
			std::cin >> number;
			std::cout << std::endl;

			if (number == 2)
			{
				std::cout << "Horses:         " << supplies.gethorses() << std::endl;
				std::cout << "Wheels:         " << supplies.getwheels() << std::endl;
				std::cout << "Bullets:        " << supplies.getbullets() << std::endl;
				std::cout << "Food:           " << supplies.getfood() << std::endl;
				std::cout << "Cash:           " << supplies.getbank() << std::endl;
			}
			else if (number == 3)
			{
				currentlocation.map(distance);
			}
			else if (number == 4)
			{
				supplies.store1();
			}
		}
		number = 0;
	}

	void StateCollege(int* distance)
	{
		while (number != 1)
		{

			std::cout << "Welcome to State College! Ensure to prepare more supplies before you continue your adventure!" << std::endl;
			std::cout << "1. Continue on Trail\n2. Check Supplies\n3. Look at map\n4. Buy Supplies" << std::endl;
			std::cin >> number;
			std::cout << std::endl;

			if (number == 2)
			{
				std::cout << "Horses:         " << supplies.gethorses() << std::endl;
				std::cout << "Wheels:         " << supplies.getwheels() << std::endl;
				std::cout << "Bullets:        " << supplies.getbullets() << std::endl;
				std::cout << "Food:           " << supplies.getfood() << std::endl;
				std::cout << "Cash:           " << supplies.getbank() << std::endl;
			}
			else if (number == 3)
			{
				currentlocation.map(distance);
			}
			else if (number == 4)
			{
				supplies.store1();
			}
		}
		number = 0;
	}

	void Pittsburgh(int* distance)
	{
		while (number != 1)
		{

			std::cout << "Welcome to Pittsburgh! Ensure to prepare more supplies before you continue your adventure!" << std::endl;
			std::cout << "1. Continue on Trail\n2. Check Supplies\n3. Look at map\n4. Buy Supplies" << std::endl;
			std::cin >> number;
			std::cout << std::endl;

			if (number == 2)
			{
				std::cout << "Horses:         " << supplies.gethorses() << std::endl;
				std::cout << "Wheels:         " << supplies.getwheels() << std::endl;
				std::cout << "Bullets:        " << supplies.getbullets() << std::endl;
				std::cout << "Food:           " << supplies.getfood() << std::endl;
				std::cout << "Cash:           " << supplies.getbank() << std::endl;
			}
			else if (number == 3)
			{
				currentlocation.map(distance);
			}
			else if (number == 4)
			{
				supplies.store1();
			}
		}
		number = 0;
	}


	void midtrail(int* distance)
	{
		while (number != 1)
		{

			std::cout << "You have stopped midtrail. Spend your time wisely." << std::endl;
			std::cout << "1. Continue on Trail\n2. Check Supplies\n3. Look at map\n4. Go Hunting" << std::endl;
			std::cin >> number;
			std::cout << std::endl;

			if (number == 2)
			{
				std::cout << "Horses:         " << supplies.gethorses() << std::endl;
				std::cout << "Wheels:         " << supplies.getwheels() << std::endl;
				std::cout << "Bullets:        " << supplies.getbullets() << std::endl;
				std::cout << "Food:           " << supplies.getfood() << std::endl;
				std::cout << "Cash:           " << supplies.getbank() << std::endl;
			}
			else if (number == 3)
			{
				currentlocation.map(distance);
			}
			else if (number == 4)
			{

				srand(time(nullptr));

				if (supplies.getbullets() >= 5)
				{
					hunting = rand() % 100 + 1;

					std::cout << "You have collected " << hunting << " pounds of food hunting." << std::endl;

					supplies.setbullets(5);			//bullets lost from hunting
					supplies.setfoodmore(hunting);		//food added to current food supplies

					// need to add 2 days to counter for hunting
				}
				else
				{
					std::cout << "You need at least 5 bullets per hunting session! Make sure to purchase more at the next stop!" << std::endl;
				}
			}
		}
		number = 0;
	}
};
