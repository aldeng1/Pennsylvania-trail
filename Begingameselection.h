#pragma once
#include<iostream>

class begingameselection		//begin game selction class
{
	private:
		int number;
		int characternumber=0;
		int initialcash;

	public:

	begingameselection()		//begingameselection constrctor called one time
	{
		std::cout << "1. Travel on the Pennsylvania Trail \n2. Learn about the Trail \n3. End Program." << std::endl;
		std::cin >> number;
		std::cout << std::endl;
		

		while (number != 3 && number != 2 && number != 1)		//will keep running till a correct number is chosen
		{
			std::cout << "Please choose a number between 1-3." << std::endl;
			std::cout << "1. Travel on the Pennsylvania Trail \n2. Learn about the Trail \n3. End Program." << std::endl;
			std::cin >> number;
			std::cout << std::endl;
		}


		if (number == 1)		//calls if number=1
		{
			std::cout << "1. Redneck from the Poconos \n2. Amish from Lancatser \n3. Eagles Football Player \n4. Learn the differences between the choices" << std::endl;

			std::cin >> characternumber;
			std::cout << std::endl;

			while (characternumber != 4 && characternumber != 3 && characternumber != 2 && characternumber != 1)		//will keep running till a correct number is chosen
			{
				std::cout << "Please choose a number between 1-4." << std::endl;					
				std::cout << "1. Redneck from the Poconos \n2. Amish from Lancatser \n3. Eagles Football Player \n4. Learn the differences between the choices" << std::endl;

				std::cin >> characternumber;
				std::cout << std::endl;
			}

			if (characternumber == 4)		//calls if charcternumber=4
			{					
				std::cout << "The Pennsylvania Trail is very challenging and each character has an easier or harder difficulty. There will be many \n"
							"challenges along the way for which travellers will not make it through. The more money you have the more of a chance you have \n"
							"to survive the journey. The football player has the most money and the redneck has the least amount of money."<< std::endl;

				while (characternumber != 3 && characternumber != 2 && characternumber != 1)		//will keep running till a correct number is chosen
				{
					std::cout << "Please choose a number between 1-4." << std::endl;
					std::cout << "1. Redneck from the Poconos \n2. Amish from Lancatser \n3. Eagles Football Player \n4. Learn the differences between the choices" << std::endl;
					std::cin >> characternumber;
					std::cout << std::endl;
				}
			}

		}
		else if (number == 2)		//calls if number=2
		{
			std::cout << "This adventure is nothing like you have experienced before. You will be challenged by weather, food, thieves, disease, and more.\n"
						"You must plan your depart, how much food you keep on reserve, the hunting you will do, and you still might not make it. Be sure not\n"
						"to spend all your money right away, because you will need it for the future to purchase more food, horses, wheels, and bullets. Good luck\n"
						"on your jouney across the Pennsylvania Trail and be sure to watch out for choices you'll make along your way!"
						"You will need at least 2 horses and 100 pounds of food to make it to Harrisburg with no disasters occuring."<< std::endl<<std::endl;

			std::cout << "1. Redneck from the Poconos \n2. Amish from Lancatser \n3. Eagles Football Player \n4. Learn the differences between the choices" << std::endl;

			std::cin >> characternumber;
			std::cout << std::endl;

			while (characternumber != 4 && characternumber != 3 && characternumber != 2 && characternumber != 1)		//will keep running till a correct number is chosen
			{
				std::cout << "Please choose a number between 1-4." << std::endl;
				std::cout << "1. Redneck from the Poconos \n2. Amish from Lancatser \n3. Eagles Football Player \n4. Learn the differences between the choices" << std::endl;

				std::cin >> characternumber;
				std::cout << std::endl;
			}

			if (characternumber == 4)		//calls if charcternumber=4
			{
				std::cout << "The Pennsylvania Trail is very challenging and each character has an easier or harder difficulty. There will be many \n"
					"challenges along the way for which travellers will not make it through. The more money you have the more of a chance you have \n"
					"to survive the journey. The football player has the most money and the redneck has the least amount of money." << std::endl;

				while (characternumber != 3 && characternumber != 2 && characternumber != 1)		//will keep running till a correct number is chosen
				{
					std::cout << "Please choose a number between 1-4." << std::endl;
					std::cout << "1. Redneck from the Poconos \n2. Amish from Lancatser \n3. Eagles Football Player \n4. Learn the differences between the choices" << std::endl;
					std::cin >> characternumber;
					std::cout << std::endl;
				}
			}

		}
		else                //calls if number=3
		{
			exit(0);		//end programs chosen by player
		}

		if (characternumber == 1)		//sets cash at 1000 if redneck was chosen
		{
			initialcash = 1000;
		}
		else if (characternumber == 2)		//sets cash at 1500 if amish was chosen
		{
			initialcash = 1500;
		}
		else if (characternumber == 3)		//sets cash at 2000 if football player is chosen
		{
			initialcash = 2000;
		}
	}

	~begingameselection()		//decontructor
	{

	}

	int getcharacternumber()			//function to get charcternumber for use in other classes and main function
	{
		return characternumber;
	}

	int getinitialcash()		//function to get initialcash for use in other classes and main function
	{
		return initialcash;
	}
};