#pragma once
#include<iostream>
#include <cstdlib>
#include <ctime>
#include<random>

#include "nameanddateselection.h"
#include "items.h"


class probabilities				//derived class proababilities
{
	private:			//private values

		nameanddateselection chance;
		store update;
		int prob1, prob2, prob3, prob4;

	public:				//public values

		virtual void operate()			//operate fucntion called every midtrail stop that outputs if someones has passed away, horse died, wheel broke
		{

			std::random_device rd;			//creates a better random number than rand()
			std::random_device rd2;			//creates a better random number than rand()
			std::random_device rd3;			//creates a better random number than rand()

			std::mt19937 gen(rd());			//creates a better random number than rand()
			std::mt19937 gen2(rd2());			//creates a better random number than rand()
			std::mt19937 gen3(rd3());			//creates a better random number than rand()

			std::uniform_int_distribution<> dis(0, 99);			//sets range from 0 to 99
			std::uniform_int_distribution<> dis1(0, 198);			//sets range from 0 to 198

			prob1 = dis1(gen);		//creates a random number between 0 and 198


			if (prob1 < 2)			//if prob 1 is 0 or 1, so 1% chance, this is called
			{
				std::string* name = chance.getnamepassaway();		//gets name of charcter who has passed away.
				
				if (prob1 == 0)
				{
					std::cout << *name << " has passed away after getting Covid-19." << std::endl;		//outputs name of character who passed away
				}
				else if (prob1 == 1)
				{
					std::cout << *name << " has passed away from Dysentery." << std::endl;		//outputs name of character who passed away
				}
				else
				{
					std::cout << *name << " has passed away from the flu." << std::endl;		//outputs name of character who passed away
				}
			}

			prob2 = dis(gen2);		//creates a random number between 0 and 99

			if (prob2 <2)		//if prob 2 is 0 or 1, so 2% chance, this is called
			{
				update.sethorses(1);		//calls sethorses to decrease number of horses in supplies by 1

				if (prob2==1)
				{
					std::cout << "One of your horses has passed away after not being fed." << std::endl;
				}
				else
				{
					std::cout <<"One of your horses has passed away from exhaustion."<< std::endl;
				}

				if (update.gethorses() < 2)		//determines if horses in supplies is less than 2
				{
					std::cout << "You only have 1 horse left, and this is not enough to pull your wagon. Your adventure has ended here. Good luck next time!" << std::endl;
					exit(0);		//ends game becuase character did not purchase enough horses
				}

			}

			prob3 = dis(gen3);		//creates a random number between 0 and 99

			if (prob3 < 4)				//if prob 3 is 0,1,2,3, so 4% chance, this is called
			{
				update.setwheels(1);		//calls setwheels to decrease number of wheels in supplies by 1

				std::cout << "One of your wheels have broken. Always make sure to have spare!" << std::endl;

				if (update.getwheels() < 4)		//determines if there are less than 4 wheels in supplies
				{
					std::cout << "You have run out of spare wheels. Always make sure to have at least 1 spare wheels at all times. Good luck next time!" << std::endl;
					exit(0);		//ends game becase charcter does not have enough supplies
				}
			}
		}

		void datesoperate(int monthnumber,int* distance)			//inputs date chose by character at begin of game and will output if charcter passed away
		{															// certain months chosen are better which give less probability of death
			std::random_device rd4;			//creates a better random number than rand()
			std::mt19937 gen4(rd4());		//creates a better random number than rand()
			std::uniform_int_distribution<> dis(0, 99);			//sets range from 0 to 99	

			prob1 = dis(gen4);			//creates a random number between 0 and 99

			if (monthnumber == 1 || monthnumber==2)		//if month chosen was february or march
			{
				if (*distance < 200)		//calls less than 200 miles becase colder in ealier months
				{
					if (prob1 < 4)		//4 percent probability because it colder during these months
					{
						std::string* name = chance.getnamepassaway();			//gets name of charcter who has passed away.
						std::cout << *name << " has passed away after freezing to death. Consider leaving in a later month!" << std::endl;
					}
				}
				else
				{
					if (prob1 < 1)			//all other distnaces it is 1 percent chance
					{
						std::string* name = chance.getnamepassaway();		//gets name of charcter who has passed away.
						std::cout << *name << " has passed away after freezing to death." << std::endl;
					}
				}
			}
			else if (monthnumber == 3 || monthnumber == 4)		//if month chosen was april or may
			{
				if (prob1 < 1)		//always a 1 percent chance because left at good month time
				{
					std::string* name = chance.getnamepassaway();			//gets name of charcter who has passed away.
					std::cout << *name << " has passed away after freezing to death." << std::endl;
				}
			}
			else if (monthnumber == 5 || monthnumber == 6)		//if month chosen was june or july
			{
				if (*distance > 300)		// greater than 300 becuase it gets cold in later months
				{
					if (prob1 < 4)		//4 percent probability because it colder during these months
					{
						std::string* name = chance.getnamepassaway();				//gets name of charcter who has passed away.
						std::cout << *name << " has passed away after freezing to death. Consider leaving in an earlier month!" << std::endl;
					}
				}
				else
				{
					if (prob1 < 1)			//all other distnaces it is 1 percent chance
					{
						std::string* name = chance.getnamepassaway();				//gets name of charcter who has passed away.
						std::cout << *name << " has passed away after freezing to death." << std::endl;
					}
				}
			}
		}
};