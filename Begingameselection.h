#pragma once
#include<iostream>





class begingameselection
{
	private:
		int number;
		int characternumber=0;

	public:

	begingameselection()
	{
		std::cout << "1. Travel on the Pennsylvania Trail \n2. Learn about the Trail \n3. End Program." << std::endl;
		std::cin >> number;

		while (number != 3 && number != 2 && number != 1)
		{
			std::cout << "Please choose a number between 1-3." << std::endl;
			std::cout << "1. Travel on the Pennsylvania Trail \n2. Learn about the Trail \n3. End Program." << std::endl;
			std::cin >> number;
		}


		if (number == 1)
		{
			std::cout << "1. Be a Banker from Boston \n2. Be a carpenter from Ohio \n3. Be a farmer from Illinois \n4. Learn the differences between the choices" << std::endl;
			//Fix to make Pennsylvania related
			std::cin >> characternumber;

			while (characternumber != 4 && characternumber != 3 && characternumber != 2 && characternumber != 1)
			{
				std::cout << "Please choose a number between 1-4." << std::endl;					
				std::cout << "1. Be a Banker from Boston \n2. Be a carpenter from Ohio \n3. Be a farmer from Illinois \n4. Learn the differences between the choices" << std::endl;
				//Fix to make Pennsylvania related
				std::cin >> characternumber;
			}

			if (characternumber == 4)
			{					
				std::cout << "" << std::endl;

				//expalin the difference in choices between characters above

				while (characternumber != 3 && characternumber != 2 && characternumber != 1)
				{
					std::cout << "Please choose a number between 1-3." << std::endl;
					std::cout << "1. Be a Banker from Boston \n2. Be a carpenter from Ohio \n3. Be a farmer from Illinois \n4. Learn the differences between the choices" << std::endl;		//Fix to make Pennsylvania related
					std::cin >> characternumber;					
				}
			}

		}
		else if (number == 2)
		{
			//Just will talk about the way our game will play and stuff, there is an example online with exact explaintion for oregan trail

			std::cout << "" << std::endl;



			while (characternumber != 3 && characternumber != 2 && characternumber != 1)
			{
				std::cout << "Please choose a number between 1-3." << std::endl;
				std::cout << "1. Be a Banker from Boston \n2. Be a carpenter from Ohio \n3. Be a farmer from Illinois \n4. Learn the differences between the choices" << std::endl;		//Fix to make Pennsylvania related
				std::cin >> characternumber;
			}

		}
		else
		{
			exit(0);		//end program
		}
	}

	~begingameselection()
	{

	}

	int getcharacternumber() 
	{
		return characternumber;
	}



};