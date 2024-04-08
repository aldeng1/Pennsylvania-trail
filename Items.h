#pragma once
#include <iostream>

#include "trailstops.h"

int horses, wheels=4, bullets, food,bank;          //global varaibles


class store         //store class
{

private:

    int horsec,wheelc,foodc,bulletc;
    int costhorse, costwheel, costfood,costbullet;
    int number;
    int i =1;

public:

    virtual void store1(int bankstart)      //store function called in trailstops
    {

        if (i == 1)    //sets the intial bank for only the first time fucntion is run
        {
            bank = bankstart;
            i = i + 1;
        }

        while (number != 5)     //runs until number=5
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


            if (number == 1)            //allows player to purchase horses
            {

                std::cout << "How many horses would you like to purchase." << std::endl;

                std::cin >> horsec;

                costhorse = 40 * horsec; 

                std::cout << "These horses will cost " << costhorse <<" dollars."<< std::endl;

                if (bank < costhorse)       //checks if player has enough money to purchase
                {
                    std::cout << "You cannot afford the purchase of " << costhorse << " dollars since only have " <<bank<< " dollars left." << std::endl;
                }
                else
                {
                    bank = bank - costhorse;         //decreases bank

                    std::cout << "You now have " << bank << " dollars left." << std::endl << std::endl;

                    horses = horses + horsec;       
                }

            }
            if (number == 2)            //allows player to purchase spare wheels
            {

                std::cout << "How many spare wheels would you like to purchase." << std::endl;

                std::cin >> wheelc;

                costwheel = 10 * wheelc;

                std::cout << "These wheels will cost " << costwheel << " dollars." << std::endl;

                if (bank < costwheel)       //checks if player has enough money to purchase
                {
                    std::cout << "You cannot afford the purchase of " << costwheel << " dollars since only have " << bank << " dollars left." << std::endl;
                }
                else
                {
                    bank = bank - costwheel;        //decreases bank

                    std::cout << "You now have " << bank << " dollars left." << std::endl << std::endl;

                    wheels = wheels + wheelc;
                }

            }
            if (number == 3)               //allows player to purchase food
            {

                std::cout << "How many pounds of food would you like to purchase." << std::endl;

                std::cin >> foodc;

                costfood = 3 * foodc;

                std::cout << "This food will cost " << costfood << " dollars." << std::endl;

                if (bank < costfood)            //checks if player has enough money to purchase
                {
                    std::cout << "You cannot afford the purchase of " << costfood << " dollars since only have " << bank << " dollars left." << std::endl;
                }
                else
                {
                    bank = bank - costfood;      //decreases bank

                    std::cout << "You now have " << bank << " dollars left." << std::endl << std::endl;

                    food = food + foodc;
                }

            }
            if (number == 4)            //allows player to purchase food
            {

                std::cout << "How many bullets would you like to purchase." << std::endl;

                std::cin >> bulletc;

                costbullet = 1 * bulletc;

                std::cout << "These bullets will cost " << costbullet << " dollars." << std::endl;

                if (bank < costbullet)      //checks if player has enough money to purchase
                {
                    std::cout << "You cannot afford the purchase of " << costbullet << " dollars since only have " << bank << " dollars left." << std::endl;
                }
                else
                {
                    bank = bank - costbullet;        //decreases bank

                    std::cout << "You now have " << bank << " dollars left." << std::endl << std::endl;
                    bullets = bullets + bulletc;
                }
            }
        }
        number = 0;
    }

    int gethorses()     //function to get horses left for use in other classes and main function
    {
        return horses;
    }

    int getwheels()     //function to get wheels left for use in other classes and main function
    {
        return wheels;
    }

    int getfood()        //function to get food left for use in other classes and main function
    {
        return food;
    }

    int getbullets()         //function to get bullets left for use in other classes and main function
    {
        return bullets;
    }

    int getbank()        //function to get bank left for use in other classes and main function
    {
        return bank;
    }

    template <typename T>       //creates template T

    void sethorses(T dechorses)          //function to set horses lower for use in other classes and main function
    {
        horses = horses - dechorses;        //decreases horses by 1
    }

    template <typename T>       //creates template T

    void setwheels(T decwheels)          //function to set wheels lower for use in other classes and main function
    {
        wheels = wheels - decwheels;        //decreases wheels by 1
    }

    template <typename T>       //creates template T

    void setfoodmore(T incfood)          //function to set food more for use in other classes and main function
    {
        food = food + incfood;                  //increases food
    }

    template <typename T>       //creates template T

    void setfoodless(T decfood)           //function to set food lower for use in other classes and main function
    {
        food = food - decfood;              //decreases food
    }

    template <typename T>       //creates template T

    void setbullets(T decbullets)           //function to set bullets lower for use in other classes and main function
    {
        bullets = bullets - decbullets;         //decreases bullets
    }
};
