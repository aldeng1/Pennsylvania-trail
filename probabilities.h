#pragma once
#include<iostream>
#include <cstdlib>
#include <ctime>

#include "nameanddateselection.h"
#include "items.h"


class probabilities
{
	private:

		int prob1,prob2,prob3,prob4;
		std::string name;

		nameanddateselection chance;
		store update;

	public:

		void operate()
		{

			srand(time(nullptr));

			prob1 = rand() % 100;

			if (prob1 < 2)
			{
				name = chance.getnamepassaway();
				
				if (prob1 == 1)
				{
					std::cout << name << " has passed away after getting Covid-19." << std::endl;
				}
				else if (prob1 == 2)
				{
					std::cout << name << " has passed away from Dysentery." << std::endl;
				}
				else
				{
					std::cout << name << " has passed away from the flu." << std::endl;
				}
			}

			prob2 = rand() % 100;

			if (prob2 < 3)
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

			prob3 = rand() % 100;

			if (prob3 < 4)
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
};