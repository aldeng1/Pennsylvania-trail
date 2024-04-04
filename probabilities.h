#pragma once
#include<iostream>
#include <cstdlib>
#include <ctime>
#include<random>

#include "nameanddateselection.h"
#include "items.h"


class probabilities
{
	private:

		nameanddateselection chance;
		store update;
		int prob1, prob2, prob3, prob4;

	public:

		virtual void operate()
		{

			std::random_device rd;
			std::random_device rd2;
			std::random_device rd3;

			std::mt19937 gen(rd());
			std::mt19937 gen2(rd2());
			std::mt19937 gen3(rd3());

			std::uniform_int_distribution<> dis(0, 99);

			prob1 = dis(gen);


			if (prob1 < 2)
			{
				std::string* name = chance.getnamepassaway();
			
				
				if (prob1 == 1)
				{
					std::cout << *name << " has passed away after getting Covid-19." << std::endl;
				}
				else if (prob1 == 2)
				{
					std::cout << *name << " has passed away from Dysentery." << std::endl;
				}
				else
				{
					std::cout << *name << " has passed away from the flu." << std::endl;
				}
			}

			prob2 = dis(gen2);

			if (prob2 <3)
			{
				update.sethorses(1);

				if (prob2<5)
				{
					std::cout << "One of your horses has passed away after not being fed." << std::endl;
				}
				else
				{
					std::cout <<"One of your horses has passed away from exhaustion."<< std::endl;
				}

				if (update.gethorses() < 2)
				{
					std::cout << "You only have 1 horse left, and this is not enough to pull your wagon. Your adventure has ended here. Good luck next time!" << std::endl;
					exit(0);
				}

			}

			prob3 = dis(gen3);

			if (prob3 < 6)
			{
				update.setwheels(1);

				std::cout << "One of your wheels have broken. Always make sure to have spare!" << std::endl;

				if (update.getwheels() < 4)
				{
					std::cout << "You have run out of spare wheels. Always make sure to have at least 1 spare wheels at all times. Good luck next time!" << std::endl;
					exit(0);
				}
			}
		}

		void datesoperate(int monthnumber,int* distance)
		{
			std::random_device rd4;
			std::mt19937 gen4(rd4());
			std::uniform_int_distribution<> dis(0, 99);

			prob1 = dis(gen4);

			if (monthnumber == 1 || monthnumber==2)
			{
				if (*distance < 200)
				{
					if (prob1 < 4)
					{
						std::string* name = chance.getnamepassaway();
						std::cout << *name << " has passed away after freezing to death. Consider leaving in a later month!" << std::endl;
					}
				}
				else
				{
					if (prob1 < 2)
					{
						std::string* name = chance.getnamepassaway();
						std::cout << *name << " has passed away after freezing to death." << std::endl;
					}
				}
			}
			else if (monthnumber == 3 || monthnumber == 4)
			{
				if (prob1 < 2)
				{
					std::string* name = chance.getnamepassaway();
					std::cout << *name << " has passed away after freezing to death." << std::endl;
				}
			}
			else if (monthnumber == 5 || monthnumber == 6)
			{
				if (*distance > 300)
				{
					if (prob1 < 4)
					{
						std::string* name = chance.getnamepassaway();
						std::cout << *name << " has passed away after freezing to death. Consider leaving in an earlier month!" << std::endl;
					}
				}
				else
				{
					if (prob1 < 2)
					{
						std::string* name = chance.getnamepassaway();
						std::cout << *name << " has passed away after freezing to death." << std::endl;
					}
				}
			}
		}
};