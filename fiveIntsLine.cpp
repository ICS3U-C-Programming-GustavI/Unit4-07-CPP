// Copyright (c) 2025 Gustav I
// Created By: Gustav I
// Date: April 14, 2025
// This program asks executes a for loop starting at
// 1000 to 2000, checking 5 numbers and making a newline

#include <iostream>  // Required for input/output (cout, endl)

int main() {
    // Loop through numbers from 1000 to 2000 (inclusive)
    for (int i = 1000; i <= 2000; i++) {
        // Print the current number followed by a space
        std::cout << i << " ";

        // Check if this is the 5th number on the current line
        if ((i - 999) % 5 == 0) {
            // Print a newline after every 5 numbers
            std::cout << std::endl;
        }
    }

    return 0;  // Indicate the program ended successfully
}
