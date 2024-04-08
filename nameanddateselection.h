#pragma once
#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>  
#include <vector>
#include <stdlib.h>

//all are shared global/static variables

int remainingNames;
int monthnumber;
std::string names[5];    // Array to store 5 names
std::vector<std::string> names2; // Vector to store names
std::string name3;
bool picked[5] = { false };     // Array to keep track of picked names
int index;

class nameanddateselection      //name and date selection class
{
private:

public:

    void nameanddateselectionfunc()         //name and date selection function
    {

        for (int i = 0; i < 5; ++i)         //runs to allow 5 names to be chosen in program
        {
            std::string name;

            std::cout << "Enter name " << i + 1 << ": ";

            std::getline(std::cin >> std::ws, name); 

            names2.push_back(name);

            names[i] = name;

            std::cout << "Names entered:\n";

            for (int i = 0; i < 5; ++i)         //outputs the name chosen each time for loop is run
            {
                std::cout << i + 1 << ". " << names[i] << std::endl;
            }

        }

        std::cout << std::endl;
        std::cout << "Which month would you like to leave for your adventure!" << std::endl; 
        std::cout << "1. February\n2. March \n3. April \n4. May \n5. June\n6. July\n7. Learn more about leaving during different months." << std::endl;
        std::cin >> monthnumber;
        std::cout<<std::endl;

        if (monthnumber == 7)       //explains why different months are better
        {
         std::cout << "Temperature is your greatest challenge. Leave during the most optimal time, and worry less about cold freezing weather along your jounrey." << std::endl << std::endl;
        }

        while (monthnumber != 6 && monthnumber != 5 && monthnumber != 4 && monthnumber != 3 && monthnumber != 2 && monthnumber != 1)    //runs till correct number is chosen
        {
            std::cout << "Please choose a number between 1-6." << std::endl;

            std::cout << std::endl;
            std::cout << "Which month would you like to leave for your adventure!" << std::endl;
            std::cout << "1. February\n2. March \n3. April \n4. May \n5. June\n6. July\n" << std::endl;
            std::cin >> monthnumber;
            std::cout << std::endl;
        }

        remainingNames = 5;     //sets remaining names=5 for use in namepassaway fucntion below

        srand(time(nullptr)); // Seed the random number generator

    }

    int getmonthnumber()            //function to get monthnumber for use in other classes and main function
    {
        return monthnumber;
    }

    std::string getnamerandom()         //function to get randomname for use in other classes and main function
    {
        do
        {
          index = rand() % 5;      // Generate a random index between 0 and 4
        } 
        while (picked[index]);      // Loop until an unpicked name is found

        return names[index];
    }

    std::string* getnamepassaway()      //function to get nameofcharacter who passed away for use in other classes and main function
    {
        if (remainingNames == 0)        
        {
            std::cout << "Your Adventure is over! All of your travellers have passed away. Better luck next time." << std::endl;
            exit(0);        // if remainingnames=0 game ends because everyone has passed away
    
        }

        do              //loop that chooses random name to pass away
        {
           index = rand() % 5;      // Generate a random index between 0 and 4
        } 
        while (picked[index]);      // Loop until an unpicked name is found

        picked[index] = true;           //sets true so name is not picked again
        remainingNames--;               //decreases remaining names

        name3 = names[index];

        return &name3;      //retuns the name

    }

    int getremainingnames()     //function to get the number of remaing names for use in other classes and main function
    {
        return remainingNames;
    }


};

