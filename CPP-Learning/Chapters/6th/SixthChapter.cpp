﻿#include "SixthChapter.h"

#include <array>
#include <iostream>
#include <string>

//----------------------------------------------------------------------------------------------------
void SixthChapter::RunFirstTask() const
{
    std::string final_string;
    char current_character;
    std::cin.get(current_character);

    while (current_character != '@')
    {
        if (isdigit(current_character))
        {
            std::cin.get(current_character);
            continue;
        }

        final_string += islower(current_character) ? (char)toupper(current_character) : (char)tolower(current_character);
        std::cin.get(current_character);
    }

    std::cout << std::endl << "Output: " << std::endl;
    std::cout << final_string;
}

//----------------------------------------------------------------------------------------------------
void SixthChapter::RunSecondTask() const
{
    std::array<double, 10> donations;
    double temp_donation = 0;
    int counter = 0;

    std::cout << "Enter value number " << counter + 1 << ": ";
    
    while (counter < donations.max_size() && std::cin >> temp_donation)
    {
        donations[counter] = temp_donation;
        counter++;
        std::cout << "Enter value number " << counter + 1 << ": ";
    } 

    if (counter == 0)
    {
        std::cout << "\nNo data" << std::endl;
        return;
    }
    
    double average_donation = 0.0;
    for (int i = 0; i < counter; i++)
        average_donation += donations[i];

    average_donation /= counter;
    std::cout << "\nAverage value: " << average_donation << std::endl;

    double greater_count = 0.0;
    for (int i = 0; i < counter; i++)
        if (donations[i] > average_donation)
            greater_count++;

    std::cout << "Count of donations greater than average: " << greater_count << std::endl;
}

//----------------------------------------------------------------------------------------------------
