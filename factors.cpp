// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 10/13/2021
// This is an factor program
// The user enters in a number
// The program displays the factors

#include <iostream>

int main() {
    // this function determines the factors
    int counter = 0;
    std::string numberAsString;
    int number;

    // input
    std::cout << "Enter a number to see all factors (integer): ";
    std::cin >> numberAsString;

    // process and output
    try {
        // convert string to integer
        number = std::stoi(numberAsString);

        for (counter = 1; counter < number + 1; counter++) {
            if (number % counter == 0) {
                std::cout << counter << ", ";
            }
        }
    }catch (std::invalid_argument) {
        std::cout << "Invalid input" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
