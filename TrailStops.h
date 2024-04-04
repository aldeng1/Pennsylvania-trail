#pragma once
#include<iostream>
#include <cstdlib>
#include <ctime>
#include<random>

#include "map.h"
#include "Items.h"
#include "probabilities.h"
#include "nameanddateselection.h"


class trailstops : public store , public probabilities
{

private:

	int num=0,counter=0,prob;
	int hunting;
	int moneystart;

	mapdata currentlocation;
	store supplies;
	nameanddateselection chance1;

public:

	void Philadelphia(int* distance)
	{	
		while (num != 1)
		{

			std::cout << "Welcome to Philadelphia and the start of your adventure!" << std::endl;
			std::cout << "1. Continue on Trail\n2. Check Supplies\n3. Look at map\n4. Buy Supplies" << std::endl;
			std::cin >> num;
			std::cout << std::endl;

			if (num == 2)
			{
				std::cout << "Horses:         " << supplies.gethorses() <<std::endl;
				std::cout << "Wheels:         " << supplies.getwheels() << std::endl;
				std::cout << "Bullets:        " << supplies.getbullets() << std::endl;
				std::cout << "Food:           " << supplies.getfood() << std::endl;
				std::cout << "Cash:           " << supplies.getbank() << std::endl;
			}
			else if (num == 3)
			{
				currentlocation.map(distance);
			}
			else if (num == 4)
			{
				supplies.store1(moneystart);
			}
		}
		num = 0;
	}

	void Harrisburg(int* distance)
	{
		while (num != 1)
		{

			std::cout << "Welcome to Harrisburg! Ensure to prepare more supplies before you continue your adventure!" << std::endl;
			std::cout << "1. Continue on Trail\n2. Check Supplies\n3. Look at map\n4. Buy Supplies" << std::endl;
			std::cin >> num;
			std::cout << std::endl;

			if (num == 2)
			{
				std::cout << "Horses:         " << supplies.gethorses() << std::endl;
				std::cout << "Wheels:         " << supplies.getwheels() << std::endl;
				std::cout << "Bullets:        " << supplies.getbullets() << std::endl;
				std::cout << "Food:           " << supplies.getfood() << std::endl;
				std::cout << "Cash:           " << supplies.getbank() << std::endl;
			}
			else if (num == 3)
			{
				currentlocation.map(distance);
			}
			else if (num == 4)
			{
				supplies.store1(moneystart);
			}
		}
		num = 0;
	}

	void StateCollege(int* distance)
	{
		while (num != 1)
		{

			std::cout << "Welcome to State College! Ensure to prepare more supplies before you continue your adventure!" << std::endl;
			std::cout << "1. Continue on Trail\n2. Check Supplies\n3. Look at map\n4. Buy Supplies" << std::endl;
			std::cin >> num;
			std::cout << std::endl;

			if (num == 2)
			{
				std::cout << "Horses:         " << supplies.gethorses() << std::endl;
				std::cout << "Wheels:         " << supplies.getwheels() << std::endl;
				std::cout << "Bullets:        " << supplies.getbullets() << std::endl;
				std::cout << "Food:           " << supplies.getfood() << std::endl;
				std::cout << "Cash:           " << supplies.getbank() << std::endl;
			}
			else if (num == 3)
			{
				currentlocation.map(distance);
			}
			else if (num == 4)
			{
				supplies.store1(moneystart);
			}
		}
		num = 0;
	}

	void Pittsburgh(int* distance)
	{
		while (num != 1)
		{

			std::cout << "Welcome to Pittsburgh! Ensure to prepare more supplies before you continue your adventure!" << std::endl;
			std::cout << "1. Continue on Trail\n2. Check Supplies\n3. Look at map\n4. Buy Supplies" << std::endl;
			std::cin >> num;
			std::cout << std::endl;

			if (num == 2)
			{
				std::cout << "Horses:         " << supplies.gethorses() << std::endl;
				std::cout << "Wheels:         " << supplies.getwheels() << std::endl;
				std::cout << "Bullets:        " << supplies.getbullets() << std::endl;
				std::cout << "Food:           " << supplies.getfood() << std::endl;
				std::cout << "Cash:           " << supplies.getbank() << std::endl;
			}
			else if (num == 3)
			{
				currentlocation.map(distance);
			}
			else if (num == 4)
			{
				supplies.store1(moneystart);
			}
		}
		num = 0;
	}


	void midtrail(int* distance)
	{
		counter = 0;

		while (num != 1)
		{

			std::cout << "You have stopped midtrail. Spend your time wisely." << std::endl;
			std::cout << "1. Continue on Trail\n2. Check Supplies\n3. Look at map\n4. Go Hunting" << std::endl;
			std::cin >> num;
			std::cout << std::endl;

			if (num == 2)
			{
				std::cout << "Horses:         " << supplies.gethorses() << std::endl;
				std::cout << "Wheels:         " << supplies.getwheels() << std::endl;
				std::cout << "Bullets:        " << supplies.getbullets() << std::endl;
				std::cout << "Food:           " << supplies.getfood() << std::endl;
				std::cout << "Cash:           " << supplies.getbank() << std::endl;
			}
			else if (num == 3)
			{
				currentlocation.map(distance);
			}
			else if (num == 4)
			{
				

				if (supplies.getbullets() >= 5  && counter==0)
				{

					std::random_device rd2;
					std::random_device rd3;

					std::mt19937 gen1(rd2());
					std::mt19937 gen2(rd3());

					std::uniform_int_distribution<> dis2(0, 50);
					std::uniform_int_distribution<> dis3(0, 99);

					hunting = dis2(gen1);
					prob = dis2(gen2);

					if (prob<4)
					{
						std::string* name = chance1.getnamepassaway();
						std::cout<< *name <<" has accentially shot themselves while trying to hunt and passed away. Remember there is always a chance hunting does not go as planned" << std::endl << std::endl;
					}

					std::cout << "You have collected " << hunting << " pounds of food hunting." << std::endl;

					supplies.setbullets(5);			//bullets lost from hunting
					supplies.setfoodmore(hunting);		//food added to current food supplies

					counter=counter+1;

				}
				else if(counter>0)
				{
					std::cout << "You can only hunt one time per midtrail stop." << std::endl;
				}
				else
				{
					std::cout << "You need at least 5 bullets per hunting session! Make sure to purchase more at the next stop!" << std::endl;
				}
			}
		}
		num = 0;
	}

	void setbank(int money)
	{
		moneystart = money;
	}

};
