// Copyright (c) 2019 Joey Marcotte All rights reserved.
//
// Created by: Joey Marcotte
// Created on: November 2019
// This program calculates volume of a frustem
// with user input

#include <cstdlib>
#include <string>
#include <iostream>
#include <cmath>


float volume(int outerRadius, int innerRadius, int height) {
    // This program finds the volume

    float volume;

    volume = M_PI*height/3 * (pow(outerRadius, 2) + outerRadius*innerRadius +
                              pow(innerRadius, 2));

    return volume;
}


int main() {
    // gets inputs and calls other functions
    std::string outerRadiusFromUser;
    int outerRadiusNumber;
    std::string innerRadiusFromUser;
    int innerRadiusNumber;
    std::string heightFromUser;
    int heightNumber;
    float volumeOfFrustem;

    while (true) {
        std::cout << "Enter Outer Radius of Frustem(R) in cm: ";
        std::cin >> outerRadiusFromUser;

        std::cout << "Enter Inner Radius of Frustem(R) in cm: ";
        std::cin >> innerRadiusFromUser;

        std::cout << "Enter height of Frustem in cm: ";
        std::cin >> heightFromUser;

        try {
            outerRadiusNumber = std::stoi(outerRadiusFromUser);
            innerRadiusNumber = std::stoi(innerRadiusFromUser);
            heightNumber = std::stoi(heightFromUser);

            volumeOfFrustem = volume(outerRadiusNumber, innerRadiusNumber,
                                      heightNumber);

            std::cout << "The volume of frustem is " << volumeOfFrustem
            << "cm^3" << std::endl;
            break;
        } catch (std::invalid_argument) {
            std::cout << "Not a valid number inputted" << std::endl;
            std::cout << "" << std::endl;
        }
    }
}
