#pragma once
#include<iostream>
#include<string>
#include <cstdlib> 
#include <ctime>  
#include<vector>



class nameanddateselection {

private:

    std::string names[5];    // Array to store 5 names
    int monthnumber;
    bool picked[5] = { false };     // Array to keep track of picked names
    int remainingNames;     // Number of names remaining to be picked
    int index;
    std::vector<std::string> names2; // Vector to store names

public:

    nameanddateselection() 
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
        //Need to give a small monolauge about the benifits of leaving early or late, follow how the original game does it
        std::cout << "1. March \n2. April \n3. May \n4. June\n5. July\n6. August" << std::endl;
        std::cin >> monthnumber;
        std::cout<<std::endl;

        while (monthnumber != 6 && monthnumber != 5 && monthnumber != 4 && monthnumber != 3 && monthnumber != 2 && monthnumber != 1)
        {
            std::cout << "Please choose a number between 1-6." << std::endl;

            std::cout << std::endl;
            std::cout << "Which month would you like to leave for your adventure!" << std::endl;
            std::cout << "1. March \n2. April \n3. May \n4. June\n5. July\n6. August" << std::endl;
            std::cin >> monthnumber;
            std::cout << std::endl;
        }

        remainingNames = 5;

        srand(time(nullptr)); // Seed the random number generator

    }

    ~nameanddateselection()
    {

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

    std::string getnamepassaway() 
    {
        if (remainingNames == 0) 
        {
            return "Your Adventure is over! All of your travellers have passed away.";
            exit(0);
        }

        do 
        {
           index = rand() % 5;      // Generate a random index between 0 and 4
        } 
        while (picked[index]);      // Loop until an unpicked name is found

        picked[index] = true;
        remainingNames--;

        return names[index];

    }

    int getremainingnames()
    {
        return remainingNames;
    }


};

