// Copyright (c) 2025 Abdul All rights reserved.
// Created By : Abdul
// Date : October 30th, 2025
// This program checks for dating

#include <iostream>
#include <random>
#include <string>

int main() {
    // get the age from the user as a string
    std::string userAgeAsString;
    std::cout << "Enter your age: ";
    std::cin >> userAgeAsString;

    int userAgeAsInt;

    try {
        // convert the user's age to an int
        userAgeAsInt = std::stoi(userAgeAsString);

        // determine whether the user is eligible to date
        if (userAgeAsInt > 25 && userAgeAsInt < 40) {
            std::cout << "You can date my grandchild." << std::endl;
        } else {
            std::cout << "Sorry, you are not eligible to date my grandchild." << std::endl;
        }
    } catch (std::invalid_argument) {
        // The user did not enter an integer.
        std::cout << userAgeAsString << " is not an integer.\n";
    }
}
