#pragma once
#include <iostream>

#include "Begingameselection.h"


class store
{

private:

    int horsec,wheelc,foodc,bulletc;
    int costhorse, costwheel, costfood,costbullet;
    int number, bank=0;
    int horses=0, wheels=0, food=0, bullets=0;

    begingameselection setcash;

public:


    void store1()
    {

        bank=setcash.getinitialcash();

        while (number != 5)
        {

            std::cout << "          Thanakorn's General Store          " << std::endl;

            std::cout << "---------------------------------------------" << std::endl;

            std::cout << "1. Horse             $40.00" << std::endl << std::endl;

            std::cout << "2. Spare Wheel       $10.00" << std::endl << std::endl;

            std::cout << "3. Food              $3.00/lb" << std::endl << std::endl;

            std::cout << "4. Bullets           $1 per bullet" << std::endl << std::endl;

            std::cout << "      5. Stop shopping       " << std::endl << std::endl;

            std::cout << "---------------------------------------------\n" << std::endl;

            std::cout << "Select the number you would like to buy or press 5 to exit." << std::endl;

            std::cin >> number;

            std::cout << std::endl << "Your bank balance is " << bank << std::endl;


            if (number = 1)
            {

                std::cout << "How many horses would you like to purchase." << std::endl;

                std::cin >> horsec;

                costhorse = 40 * horsec;

                std::cout << "These horses will cost " << costhorse <<" dollars."<< std::endl;

                if (bank < costhorse)
                {
                    std::cout << "You cannot afford the purchase of " << costhorse << " dollars since only have " <<bank<< " dollars left." << std::endl;
                }
                else
                {
                    bank = bank - costhorse;

                    std::cout << "You now have " << bank << " dollars left." << std::endl;


                }
            }
            if (number = 2)
            {

                std::cout << "How many spare wheels would you like to purchase." << std::endl;

                std::cin >> wheelc;

                costwheel = 10 * wheelc;

                std::cout << "These wheels will cost " << costwheel << " dollars." << std::endl;

                if (bank < costwheel)
                {
                    std::cout << "You cannot afford the purchase of " << costwheel << " dollars since only have " << bank << " dollars left." << std::endl;
                }
                else
                {
                    bank = bank - costwheel;

                    std::cout << "You now have " << bank << " dollars left." << std::endl;
                }

            }
            if (number = 3)
            {

                std::cout << "How many pounds of food would you like to purchase." << std::endl;

                std::cin >> foodc;

                costfood = 3 * foodc;

                std::cout << "This food will cost " << costfood << " dollars." << std::endl;

                if (bank < costfood)
                {
                    std::cout << "You cannot afford the purchase of " << costfood << " dollars since only have " << bank << " dollars left." << std::endl;
                }
                else
                {
                    bank = bank - costfood;

                    std::cout << "You now have " << bank << " dollars left." << std::endl;


                }

            }
            if (number = 4)
            {

                std::cout << "How many bullets would you like to purchase." << std::endl;

                std::cin >> bulletc;

                costbullet = 1 * bulletc;

                std::cout << "These bullets will cost " << costbullet << " dollars." << std::endl;

                if (bank < costbullet)
                {
                    std::cout << "You cannot afford the purchase of " << costbullet << " dollars since only have " << bank << " dollars left." << std::endl;
                }
                else
                {
                    bank = bank - costbullet;

                    std::cout << "You now have " << bank << " dollars left." << std::endl;
                }
            }
        }
    }

    int gethorses()
    {
        return horses;
    }

    int getwheels()
    {
        return wheels;
    }

    int getfood()
    {
        return food;
    }

    int getbullets()
    {
        return bullets;
    }

    int getbank()
    {
        return bank;
    }

    void sethorses(int dechorses)
    {
        horses = horses - dechorses;
    }

    void setwheels(int decwheels)
    {
        wheels = wheels - decwheels;
    }

    void setfoodmore(int incfood)
    {
        food = food + incfood;
    }

    void setfoodless(int decfood)
    {
        food = food - decfood;
    }

    void setbullets(int decbullets)
    {
        bullets = bullets - decbullets;
    }

    void setbank(int decbank)
    {
        bank = bank - decbank;
    }

};
