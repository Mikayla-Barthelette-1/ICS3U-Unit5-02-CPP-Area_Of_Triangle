// Copyright (c) 2021 Mikayla Barthelette All rights reserved
//
// Created by: Mikayla Barthelette
// Created on: Oct 2021
// This program calculates the area of a triangle

#include <iostream>
#include <string>

void CalculateArea(std::string baseFromUser, std::string heightFromUser) {
    // calculate area
    int base;
    int height;
    float area;
    float area2;

    // process

    area = height * base;
    area2 = area / 2;
    std::cout << "The area of the triangle is " << area2 <<
    " cm²." << std::endl;


    // output
    std::cout << std::endl;
    std::cout << "Done.";
}


main() {
    // this function gets base and height

    std::string baseFromUser;
    std::string heightFromUser;

    // input
    std::cout << "Enter the base length of a triangle (cm): ";
    std::cin >> baseFromUser;
    std::cout << "Enter the height of a triangle (cm): ";
    std::cin >> heightFromUser;
    std::cout << std::endl;
    try {
        base = std::stoi(baseFromUser);
        height = std::stoi(heightFromUser);
    } catch (std::invalid_argument) {
        std::cout << "Invalid input." << std::endl;

    // call functions
    CalculateArea(baseFromUser, heightFromUser);

    // output
    std::cout << std::endl;
    std::cout << "Done.";
}
