// Copyright (c) 2022 KestrelBryce All rights reserved
//
// Created by: KestrelBryce
// Created on: Nov 17, 2022
// This program prints the 0X9
// multiplication tables using
// a while loop and if statements

#include <iostream>
#include <string>

int main() {
    // Declaring variables
    int num1 = 0;
    int num2 = 0;
    int product = 0;
    std::string start;

    // Input
    std::cout << "This program prints the 0X9\n";
    std::cout << "multiplication tables using\n";
    std::cout << "a while loop and if statements\n";
    std::cout << "\n";
    std::cout << "Enter Y to start program: ";
    std::cin >> start;

    // Process
    while (start == "Y") {
        // Calculating product
        product = num1 * num2;

        // Displaying to user
        std::cout << num1 << " X " << num2 << " = " << product << "\n";

        // Updating counters
        if (num2 < 9) {
            num2 = num2 + 1;
        } else {
            num2 = 0;
            num1 = num1 + 1;
        }

        // Checking if program should end
        if (num1 > 9) {
            break;
        }
    }
}
