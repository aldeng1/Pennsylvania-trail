#pragma once
#include<iostream>
#include <cstdlib>
#include <ctime>
#include<random>

#include "map.h"
#include "Items.h"
#include "probabilities.h"
#include "nameanddateselection.h"


class trailstops : public store , public probabilities , public mapdata				//base class trailstops, derived classes store, map, and probabilities
{

private:

	int num=0,counter=0,prob;
	int hunting;
	int moneystart;

	mapdata currentlocation;
	store supplies;
	nameanddateselection chance1;

public:

	void Philadelphia(int* distance)			//function call when in this city
	{	
		while (num != 1)		//runs till num=1
		{

			std::cout << "Welcome to Philadelphia and the start of your adventure!" << std::endl;
			std::cout << "1. Continue on Trail\n2. Check Supplies\n3. Look at map\n4. Buy Supplies" << std::endl;
			std::cin >> num;
			std::cout << std::endl;

			if (num == 2)		//outputs supplies
			{
				std::cout << "Horses:         " << supplies.gethorses() <<std::endl;
				std::cout << "Wheels:         " << supplies.getwheels() << std::endl;
				std::cout << "Bullets:        " << supplies.getbullets() << std::endl;
				std::cout << "Food:           " << supplies.getfood() << std::endl;
				std::cout << "Cash:           " << supplies.getbank() << std::endl;
			}
			else if (num == 3)		//shows map at currecnt location
			{
				currentlocation.map(distance);
			}
			else if (num == 4)		//calls the store function to let the player purchase supplies
			{
				supplies.store1(moneystart);
			}
		}
		num = 0;
	}

	void Harrisburg(int* distance)			//function call when in this city
	{
		while (num != 1)		//runs till num=1
		{

			std::cout << "Welcome to Harrisburg! Ensure to prepare more supplies before you continue your adventure!" << std::endl;
			std::cout << "1. Continue on Trail\n2. Check Supplies\n3. Look at map\n4. Buy Supplies" << std::endl;
			std::cin >> num;
			std::cout << std::endl;

			if (num == 2)		//outputs supplies
			{
				std::cout << "Horses:         " << supplies.gethorses() << std::endl;
				std::cout << "Wheels:         " << supplies.getwheels() << std::endl;
				std::cout << "Bullets:        " << supplies.getbullets() << std::endl;
				std::cout << "Food:           " << supplies.getfood() << std::endl;
				std::cout << "Cash:           " << supplies.getbank() << std::endl;
			}
			else if (num == 3)			//shows map at currecnt location
			{
				currentlocation.map(distance);
			}
			else if (num == 4)			//calls the store function to let the player purchase supplies
			{
				supplies.store1(moneystart);
			}
		}
		num = 0;
	}

	void StateCollege(int* distance)			//function call when in this city
	{
		while (num != 1)		//runs till num=1
		{

			std::cout << "Welcome to State College! Ensure to prepare more supplies before you continue your adventure!" << std::endl;
			std::cout << "1. Continue on Trail\n2. Check Supplies\n3. Look at map\n4. Buy Supplies" << std::endl;
			std::cin >> num;
			std::cout << std::endl;

			if (num == 2)		//outputs supplies
			{
				std::cout << "Horses:         " << supplies.gethorses() << std::endl;
				std::cout << "Wheels:         " << supplies.getwheels() << std::endl;
				std::cout << "Bullets:        " << supplies.getbullets() << std::endl;
				std::cout << "Food:           " << supplies.getfood() << std::endl;
				std::cout << "Cash:           " << supplies.getbank() << std::endl;
			}
			else if (num == 3)				//shows map at currecnt location
			{
				currentlocation.map(distance);
			}
			else if (num == 4)			//calls the store function to let the player purchase supplies
			{
				supplies.store1(moneystart);
			}
		}
		num = 0;
	}

	void Pittsburgh(int* distance)				//function call when in this city
	{
		while (num != 1)		//runs till num=1
		{

			std::cout << "Welcome to Pittsburgh! Ensure to prepare more supplies before you continue your adventure!" << std::endl;
			std::cout << "1. Continue on Trail\n2. Check Supplies\n3. Look at map\n4. Buy Supplies" << std::endl;
			std::cin >> num;
			std::cout << std::endl;

			if (num == 2)		//outputs supplies
			{
				std::cout << "Horses:         " << supplies.gethorses() << std::endl;
				std::cout << "Wheels:         " << supplies.getwheels() << std::endl;
				std::cout << "Bullets:        " << supplies.getbullets() << std::endl;
				std::cout << "Food:           " << supplies.getfood() << std::endl;
				std::cout << "Cash:           " << supplies.getbank() << std::endl;
			}
			else if (num == 3)				//shows map at currecnt location
			{
				currentlocation.map(distance);
			}
			else if (num == 4)			//calls the store function to let the player purchase supplies
			{
				supplies.store1(moneystart);
			}
		}
		num = 0;
	}


	void midtrail(int* distance)		//function called every 5 miles midtrail
	{
		counter = 0;

		while (num != 1)		//runs till num=1
		{

			std::cout << "You have stopped midtrail. Spend your time wisely." << std::endl;
			std::cout << "1. Continue on Trail\n2. Check Supplies\n3. Look at map\n4. Go Hunting" << std::endl;
			std::cin >> num;
			std::cout << std::endl;

			if (num == 2)		//outputs supplies
			{
				std::cout << "Horses:         " << supplies.gethorses() << std::endl;
				std::cout << "Wheels:         " << supplies.getwheels() << std::endl;
				std::cout << "Bullets:        " << supplies.getbullets() << std::endl;
				std::cout << "Food:           " << supplies.getfood() << std::endl;
				std::cout << "Cash:           " << supplies.getbank() << std::endl;
			}
			else if (num == 3)			//shows map at currecnt location
			{
				currentlocation.map(distance);
			}
			else if (num == 4)			//allows player to hunt or food
			{
				

				if (supplies.getbullets() >= 5  && counter==0)		//checks if player has enough bullets and counter=0
				{

					std::random_device rd2;			//rand number func
					std::random_device rd3;			//rand number func

					std::mt19937 gen1(rd2());			//rand number func
					std::mt19937 gen2(rd3());			//rand number func

					std::uniform_int_distribution<> dis2(0, 50);		//sets range from 0 to 50
					std::uniform_int_distribution<> dis3(0, 99);		//sets range from 0 to 99

					prob = dis3(gen2);			//creates a random number between 0 and 99

					if (prob<3)			//if prob 3 is 0,1,2 so 3% chance, this is called
					{
						std::string* name = chance1.getnamepassaway();		//gets name of charcter who has passed away.
						std::cout<< *name <<" has accentially shot themselves while trying to hunt and passed away. Remember there is always a chance hunting does not go as planned" << std::endl << std::endl;
					}
					else
					{
						hunting = dis2(gen1);	//creates a random number between 0 and 

						std::cout << "You have collected " << hunting << " pounds of food hunting." << std::endl;

						supplies.setbullets(5);			//bullets lost from hunting
						supplies.setfoodmore(hunting);		//food added to current food supplies

						counter = counter + 1;
					}
					counter = counter + 1;
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
		num = 0;			//sets num to 0
	}

	void setbank(int money)		////function called to set intial bank value to variable moneystart
	{
		moneystart = money;
	}

};
