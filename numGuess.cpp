// Copyright Marli Peters 2023 All rights reserved.
// Created By: Marli Peters
// Date: Oct. 12, 2023
// This program asks the user to guess a
// number then tells user if the guess was correct.

#include <iostream>

int main() {
    // declaring const
    const int answer = 4;

    // get user input
    int guess;

    std::cout << "Guess number: ";
    std::cin >> guess;
    std::cout << "";

    // check if guess is correct
    if (guess == answer){
    std::cout << "Your guess was correct!";
    }
    else{
    std::cout << "Your guess was incorrect!";
    }
}
