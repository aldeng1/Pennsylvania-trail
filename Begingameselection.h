#pragma once
#include<iostream>





class begingameselection
{
	private:
		int number;
		int characternumber=0;
		int initialcash;

	public:

	begingameselection()
	{
		std::cout << "1. Travel on the Pennsylvania Trail \n2. Learn about the Trail \n3. End Program." << std::endl;
		std::cin >> number;
		std::cout << std::endl;
		

		while (number != 3 && number != 2 && number != 1)
		{
			std::cout << "Please choose a number between 1-3." << std::endl;
			std::cout << "1. Travel on the Pennsylvania Trail \n2. Learn about the Trail \n3. End Program." << std::endl;
			std::cin >> number;
			std::cout << std::endl;
		}


		if (number == 1)
		{
			std::cout << "1. Redneck from the Poconos \n2. Amish from Lancatser \n3. Eagles Football Player \n4. Learn the differences between the choices" << std::endl;

			std::cin >> characternumber;
			std::cout << std::endl;

			while (characternumber != 4 && characternumber != 3 && characternumber != 2 && characternumber != 1)
			{
				std::cout << "Please choose a number between 1-4." << std::endl;					
				std::cout << "1. Redneck from the Poconos \n2. Amish from Lancatser \n3. Eagles Football Player \n4. Learn the differences between the choices" << std::endl;

				std::cin >> characternumber;
				std::cout << std::endl;
			}

			if (characternumber == 4)
			{					
				std::cout << "The Pennsylvania Trail is very challenging and each character has an easier or harder difficulty. There will be many \n"
							"challenges along the way for which travellers will not make it through. The more money you have the more of a chance you have \n"
							"to survive the journey. The football player has the has the most money and the redneck has the least amount of money."<< std::endl;

				while (characternumber != 3 && characternumber != 2 && characternumber != 1)
				{
					std::cout << "Please choose a number between 1-4." << std::endl;
					std::cout << "1. Redneck from the Poconos \n2. Amish from Lancatser \n3. Eagles Football Player \n4. Learn the differences between the choices" << std::endl;
					std::cin >> characternumber;
					std::cout << std::endl;
				}
			}

		}
		else if (number == 2)
		{
			std::cout << "This adventure is nothing like you have ever experience before. You will be challenged by weather, food, theifs, disease, and much more.\n"
						"You must plan when you depart, how much food you keep on reserve, how much hunting you do, and you still might not make it. Be sure no\n"
						"spend all your money right away because you will need it for the future to purchase more food, horses, wheels, and bullets. Good luck\n"
						"on your jouney across the Pennsylvania Trail and be sure to watch out for choices that you must make as you make your way!"<< std::endl<<std::endl;

			std::cout << "1. Redneck from the Poconos \n2. Amish from Lancatser \n3. Eagles Football Player \n4. Learn the differences between the choices" << std::endl;

			std::cin >> characternumber;
			std::cout << std::endl;

			while (characternumber != 4 && characternumber != 3 && characternumber != 2 && characternumber != 1)
			{
				std::cout << "Please choose a number between 1-4." << std::endl;
				std::cout << "1. Redneck from the Poconos \n2. Amish from Lancatser \n3. Eagles Football Player \n4. Learn the differences between the choices" << std::endl;

				std::cin >> characternumber;
				std::cout << std::endl;
			}

			if (characternumber == 4)
			{
				std::cout << "The Pennsylvania Trail is very challenging and each character has an easier or harder difficulty. There will be many \n"
					"challenges along the way for which travellers will not make it through. The more money you have the more of a chance you have \n"
					"to survive the journey. The football player has the has the most money and the redneck has the least amount of money." << std::endl;

				while (characternumber != 3 && characternumber != 2 && characternumber != 1)
				{
					std::cout << "Please choose a number between 1-4." << std::endl;
					std::cout << "1. Redneck from the Poconos \n2. Amish from Lancatser \n3. Eagles Football Player \n4. Learn the differences between the choices" << std::endl;
					std::cin >> characternumber;
					std::cout << std::endl;
				}
			}

		}
		else
		{
			exit(0);		//end program
		}

		if (characternumber == 1)
		{
			initialcash = 1000;
		}
		else if (characternumber == 2)
		{
			initialcash = 1500;
		}
		else if (characternumber == 3)
		{
			initialcash = 2000;
		}
	}

	~begingameselection()
	{

	}

	int getcharacternumber() 
	{
		return characternumber;
	}

	int getinitialcash()
	{
		return initialcash;
	}
};