#pragma once
#include<iostream>


class mapdata
{
private:



public:

	void map(int* distance)
	{
		std::cout << std::endl;
		std::cout <<"You have traveled " << *distance <<" miles so far!" << std::endl;
		std::cout << std::endl;

		if (0 <= *distance && *distance <= 25)
		{
			std::cout << "/-----------\\ \n"
				"|     ERIE  |\n"
				"|      *    |\n"
				"|           |\n"
				"|           |\n"
				"|           \\_____________________________________________________________________________________________\\           \n"
				"|                                                                                                          \\         \n"
				"|                                                                                                           \\        \n"
				"|                                                                                                            \\       \n"
				"|                                                                                                             \\      \n"
				"|                                                                                                             |      \n"
				"|                                                                                                             |     \n"
				"|                                                                                                             |     \n"
				"|                                                                                                             |     \n"
				"|                                                                                                             /      \n"
				"|                                         STATE COLLEGE                                                      /       \n"
				"|                                              *                                                            /        \n"
				"|                                                                                                           |        \n"
				"|                                                                                                           |        \n"
				"|           *                                                                                                \\        \n"
				"|       PITTSBURGH                                                                                            \\        \n"
				"|                                                                                                             |      \n"
				"|                                                                                                              \\       \n"
				"|                                                                  *                                            \\   \n"
				"|                                                              HARRISBURG                        PHILADELPHIA    |   \n"
				"|                                                                                                      *         |       \n"
				"|                                                                                                       ___    _/    \n"
				"|                                                                                                     _/   \\_/       \n"
				"|                                                                                                    |              \n"
				"\\___________________________________________________________________________________________________/               \n" << std::endl;
		}
		else if (25 < *distance && *distance <= 90)
		{
			std::cout << "/-----------\\ \n"
				"|     ERIE  |\n"
				"|      *    |\n"
				"|           |\n"
				"|           |\n"
				"|           \\_____________________________________________________________________________________________\\           \n"
				"|                                                                                                          \\         \n"
				"|                                                                                                           \\        \n"
				"|                                                                                                            \\       \n"
				"|                                                                                                             \\      \n"
				"|                                                                                                             |      \n"
				"|                                                                                                             |     \n"
				"|                                                                                                             |     \n"
				"|                                                                                                             |     \n"
				"|                                                                                                             /      \n"
				"|                                         STATE COLLEGE                                                      /       \n"
				"|                                              *                                                            /        \n"
				"|                                                                                                           |        \n"
				"|                                                                                                           |        \n"
				"|           *                                                                                                \\        \n"
				"|       PITTSBURGH                                                                                            \\        \n"
				"|                                                                                                             |      \n"
				"|                                                                                                              \\       \n"
				"|                                                                  *                                            \\   \n"
				"|                                                              HARRISBURG                        PHILADELPHIA    |   \n"
				"|                                                                                  \\__    ____	  _____*         |    \n"
				"|                                                                                     \\__/    \\__/      ___    _/ \n"
				"|                                                                                                     _/   \\_/       \n"
				"|                                                                                                    |              \n"
				"\\___________________________________________________________________________________________________/               \n" << std::endl;
		}

		else if (90 < *distance && *distance <= 125)
		{
			std::cout << "/-----------\\ \n"
				"|     ERIE  |\n"
				"|      *    |\n"
				"|           |\n"
				"|           |\n"
				"|           \\_____________________________________________________________________________________________\\           \n"
				"|                                                                                                          \\         \n"
				"|                                                                                                           \\        \n"
				"|                                                                                                            \\       \n"
				"|                                                                                                             \\      \n"
				"|                                                                                                             |      \n"
				"|                                                                                                             |     \n"
				"|                                                                                                             |     \n"
				"|                                                                                                             |     \n"
				"|                                                                                                             /      \n"
				"|                                         STATE COLLEGE                                                      /       \n"
				"|                                              *                                                            /        \n"
				"|                                                                                                           |        \n"
				"|                                                                                                           |        \n"
				"|           *                                                                                                \\        \n"
				"|       PITTSBURGH                                                                                            \\        \n"
				"|                                                                         _                                  _|            \n"
				"|                                                                  ______/ \\______                           \\           \n"
				"|                                                                  *             \\                            \\          \n"
				"|                                                             HARRISBURG          \\           PHILADELPHIA     |      \n"
				"|                                                                                  \\__    ____	  _____*         |    \n"
				"|                                                                                     \\__/    \\__/      ___    _/ \n"
				"|                                                                                                     _/   \\_/       \n"
				"|                                                                                                    |              \n"
				"\\___________________________________________________________________________________________________/               \n" << std::endl;
		}

		else if (125 < *distance && *distance <= 190)
		{
			std::cout << "/-----------\\ \n"
				"|     ERIE  |\n"
				"|      *    |\n"
				"|           |\n"
				"|           |\n"
				"|           \\_____________________________________________________________________________________________\\           \n"
				"|                                                                                                          \\         \n"
				"|                                                                                                           \\        \n"
				"|                                                                                                            \\       \n"
				"|                                                                                                             \\      \n"
				"|                                                                                                             |      \n"
				"|                                                                                                             |     \n"
				"|                                                                                                             |     \n"
				"|                                                                                                             |     \n"
				"|                                                                                                             /      \n"
				"|                                         STATE COLLEGE                                                      /       \n"
				"|                                              *                                                            /        \n"
				"|                                                                                                           |        \n"
				"|                                                                                                           |        \n"
				"|          *                                              ___                                               \\        \n"
				"|      PITTSBURGH                                            \\____                                           \\       \n"
				"|                                                                 \\        _                                 |       \n"
				"|                                                                  \\______/ \\____                            \\      \n"
				"|                                                                  *             \\                            \\          \n"
				"|                                                             HARRISBURG          \\           PHILADELPHIA     |      \n"
				"|                                                                                  \\__    ____	  _____*        |    \n"
				"|                                                                                     \\__/    \\__/      ___    _/ \n"
				"|                                                                                                     _/   \\_/       \n"
				"|                                                                                                    |              \n"
				"\\___________________________________________________________________________________________________/               \n" << std::endl;

		}
		else if (190 < *distance && *distance <= 225)
		{
			std::cout << "/-----------\\ \n"
				"|     ERIE  |\n"
				"|      *    |\n"
				"|           |\n"
				"|           |\n"
				"|           \\_____________________________________________________________________________________________\\           \n"
				"|                                                                                                          \\         \n"
				"|                                                                                                           \\        \n"
				"|                                                                                                            \\       \n"
				"|                                                                                                             \\      \n"
				"|                                                                                                             |      \n"
				"|                                                                                                             |     \n"
				"|                                                                                                             |     \n"
				"|                                                                                                             |     \n"
				"|                                                                                                             /      \n"
				"|                                         STATE COLLEGE                                                      /       \n"
				"|                                              *  /\\                                                        /        \n"
				"|                                             \\_/   \\__                                                     |        \n"
				"|                                                       \\                                                    |        \n"
				"|          *                                             \\___                                               \\        \n"
				"|      PITTSBURGH                                            \\____                                           \\       \n"
				"|                                                                 \\        _                                 |       \n"
				"|                                                                  \\______/ \\____                            \\      \n"
				"|                                                                  *             \\                            \\          \n"
				"|                                                             HARRISBURG          \\           PHILADELPHIA     |      \n"
				"|                                                                                  \\__    ____	  _____*        |    \n"
				"|                                                                                     \\__/    \\__/      ___    _/ \n"
				"|                                                                                                     _/   \\_/       \n"
				"|                                                                                                    |              \n"
				"\\___________________________________________________________________________________________________/               \n" << std::endl;

		}
		else if (225 < *distance && *distance <= 340)
		{
			std::cout << "/-----------\\ \n"
				"|     ERIE  |\n"
				"|      *    |\n"
				"|           |\n"
				"|           |\n"
				"|           \\_____________________________________________________________________________________________\\           \n"
				"|                                                                                                          \\         \n"
				"|                                                                                                           \\        \n"
				"|                                                                                                            \\       \n"
				"|                                                                                                             \\      \n"
				"|                                                                                                             |      \n"
				"|                                                                                                             |     \n"
				"|                                                                                                             |     \n"
				"|                                                                                                             |     \n"
				"|                                                                                                             /      \n"
				"|                                         STATE COLLEGE                                                      /       \n"
				"|                             __               * /\\                                                         /        \n"
				"|                               \\           /\\_/   \\__                                                     |        \n"
				"|                                \\    _____/           \\                                                    |        \n"
				"|          *                      \\__/                  \\___                                                \\        \n"
				"|      PITTSBURGH                                            \\____                                           \\       \n"
				"|                                                                 \\        _                                 |       \n"
				"|                                                                  \\______/ \\____                            \\      \n"
				"|                                                                  *             \\                            \\          \n"
				"|                                                             HARRISBURG          \\           PHILADELPHIA     |      \n"
				"|                                                                                  \\__    ____	  _____*        |    \n"
				"|                                                                                     \\__/    \\__/      ___    _/ \n"
				"|                                                                                                     _/   \\_/       \n"
				"|                                                                                                    |              \n"
				"\\___________________________________________________________________________________________________/               \n" << std::endl;
		}
		else if (340 < *distance && *distance <= 375)
		{
			std::cout << "/-----------\\ \n"
				"|     ERIE  |\n"
				"|      *    |\n"
				"|           |\n"
				"|           |\n"
				"|           \\_____________________________________________________________________________________________\\           \n"
				"|                                                                                                          \\         \n"
				"|                                                                                                           \\        \n"
				"|                                                                                                            \\       \n"
				"|                                                                                                             \\      \n"
				"|                                                                                                             |      \n"
				"|                                                                                                             |     \n"
				"|                                                                                                             |     \n"
				"|                                                                                                             |     \n"
				"|                                                                                                             /      \n"
				"|                                         STATE COLLEGE                                                      /       \n"
				"|                             __               * /\\                                                         /        \n"
				"|               ____         /  \\           /\\_/   \\__                                                     |        \n"
				"|          ____/    \\  ____/    \\    _____/           \\                                                    |        \n"
				"|          *         \\/          \\__/                  \\___                                                \\        \n"
				"|      PITTSBURGH                                            \\____                                           \\       \n"
				"|                                                                 \\        _                                 |       \n"
				"|                                                                  \\______/ \\____                            \\      \n"
				"|                                                                  *             \\                            \\          \n"
				"|                                                             HARRISBURG          \\           PHILADELPHIA     |      \n"
				"|                                                                                  \\__    ____	  _____*        |    \n"
				"|                                                                                     \\__/    \\__/      ___    _/ \n"
				"|                                                                                                     _/   \\_/       \n"
				"|                                                                                                    |              \n"
				"\\___________________________________________________________________________________________________/               \n" << std::endl;
		}
		else if (375 < *distance && *distance <= 475)
		{
			std::cout << "/-----------\\ \n"
				"|     ERIE  |\n"
				"|      *    |\n"
				"|           |\n"
				"|           |\n"
				"|           \\_____________________________________________________________________________________________\\           \n"
				"|                                                                                                          \\         \n"
				"|                                                                                                           \\        \n"
				"|                                                                                                            \\       \n"
				"|                                                                                                             \\      \n"
				"|        |                                                                                                    |      \n"
				"|       /                                                                                                     |     \n"
				"|      |                                                                                                      |     \n"
				"|      |_                                                                                                     |     \n"
				"|        \\                                                                                                   /      \n"
				"|         |                               STATE COLLEGE                                                      /       \n"
				"|         |                   __               * /\\                                                         /        \n"
				"|         |     ____         /  \\           /\\_/   \\__                                                     |        \n"
				"|         |____/    \\  ____/    \\    _____/           \\                                                    |        \n"
				"|          *         \\/          \\__/                  \\___                                                \\        \n"
				"|      PITTSBURGH                                            \\____                                           \\       \n"
				"|                                                                 \\        _                                 |       \n"
				"|                                                                  \\______/ \\____                            \\      \n"
				"|                                                                  *             \\                            \\          \n"
				"|                                                             HARRISBURG          \\           PHILADELPHIA     |      \n"
				"|                                                                                  \\__    ____	  _____*        |    \n"
				"|                                                                                     \\__/    \\__/      ___    _/ \n"
				"|                                                                                                     _/   \\_/       \n"
				"|                                                                                                    |              \n"
				"\\___________________________________________________________________________________________________/               \n" << std::endl;
		}
		else if (475 < *distance && *distance <= 500)
		{
			std::cout << "/-----------\\ \n"
				"|     ERIE  |\n"
				"|      *    |\n"
				"|      |_   |\n"
				"|        \\  |\n"
				"|      ___| \\_____________________________________________________________________________________________\\           \n"
				"|      \\                                                                                                  \\         \n"
				"|       \\                                                                                                  \\        \n"
				"|        |                                                                                                   \\       \n"
				"|        |                                                                                                    \\      \n"
				"|        |                                                                                                    |      \n"
				"|       /                                                                                                     |     \n"
				"|      |                                                                                                      |     \n"
				"|      |_                                                                                                     |     \n"
				"|        \\                                                                                                   /      \n"
				"|         |                               STATE COLLEGE                                                      /       \n"
				"|         |                   __               * /\\                                                         /        \n"
				"|         |     ____         /  \\           /\\_/   \\__                                                     |        \n"
				"|         |____/    \\  ____/    \\    _____/           \\                                                    |        \n"
				"|          *         \\/          \\__/                  \\___                                                \\        \n"
				"|      PITTSBURGH                                            \\____                                           \\       \n"
				"|                                                                 \\        _                                 |       \n"
				"|                                                                  \\______/ \\____                            \\      \n"
				"|                                                                  *             \\                            \\          \n"
				"|                                                             HARRISBURG          \\           PHILADELPHIA     |      \n"
				"|                                                                                  \\__    ____	  _____*        |    \n"
				"|                                                                                     \\__/    \\__/      ___    _/ \n"
				"|                                                                                                     _/   \\_/       \n"
				"|                                                                                                    |              \n"
				"\\___________________________________________________________________________________________________/               \n" << std::endl;
		}
	}
};