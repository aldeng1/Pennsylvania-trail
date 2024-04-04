#pragma once
#include<iostream>
#include<string>
#include <cstdlib> 
#include <ctime>  
#include<vector>
#include <stdlib.h>

int remainingNames;
int monthnumber;
std::string names[5];    // Array to store 5 names
std::vector<std::string> names2; // Vector to store names
std::string name3;

class nameanddateselection
{
private:

    bool picked[5] = { false };     // Array to keep track of picked names
    int index;

public:

    void nameanddateselectionfunc()
    {

        for (int i = 0; i < 5; ++i)
        {
            std::string name;

            std::cout << "Enter name " << i + 1 << ": ";

            std::getline(std::cin >> std::ws, name); 

            names2.push_back(name);

            names[i] = name;

            std::cout << "Names entered:\n";

            for (int i = 0; i < 5; ++i)
            {
                std::cout << i + 1 << ". " << names[i] << std::endl;
            }

        }

        std::cout << std::endl;
        std::cout << "Which month would you like to leave for your adventure!" << std::endl; 
        std::cout << "1. February\n2. March \n3. April \n4. May \n5. June\n6. July\n7. Learn more about leaving during different months." << std::endl;
        std::cin >> monthnumber;
        std::cout<<std::endl;

        if (monthnumber == 7)
        {
         std::cout << "Temperature is your greatest challenge. Leave during the most optimal time, and worry less about cold freezing weather along your jounrey." << std::endl << std::endl;
        }

        while (monthnumber != 6 && monthnumber != 5 && monthnumber != 4 && monthnumber != 3 && monthnumber != 2 && monthnumber != 1)
        {
            std::cout << "Please choose a number between 1-6." << std::endl;

            std::cout << std::endl;
            std::cout << "Which month would you like to leave for your adventure!" << std::endl;
            std::cout << "1. February\n2. March \n3. April \n4. May \n5. June\n6. July\n" << std::endl;
            std::cin >> monthnumber;
            std::cout << std::endl;
        }

        remainingNames = 5;

        srand(time(nullptr)); // Seed the random number generator

    }

    int getmonthnumber()
    {
        return monthnumber;
    }

    std::string getnamerandom()
    {
        do
        {
          index = rand() % 5;      // Generate a random index between 0 and 4
        } 
        while (picked[index]);      // Loop until an unpicked name is found

        return names[index];
    }

    std::string* getnamepassaway() 
    {
        if (remainingNames == 0) 
        {
            std::cout << "Your Adventure is over! All of your travellers have passed away." << std::endl;
            exit(0);
    
        }

        do 
        {
           index = rand() % 5;      // Generate a random index between 0 and 4
        } 
        while (picked[index]);      // Loop until an unpicked name is found

        picked[index] = true;
        remainingNames--;

        name3 = names[index];

        return &name3;

    }

    int getremainingnames()
    {
        return remainingNames;
    }


};

