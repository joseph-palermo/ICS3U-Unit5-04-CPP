// Copyright (c) 2019 Joseph Palermo All rights reserved.
//
// Created by: Joseph Palermo
// Created on: November 2019
// This program calculates the volume of a cylinder

#include <iostream>
#include <iomanip>
#include <cmath>

float CalculateVolume(float radius, float height) {
    // this function calculates and returns the volume

    float volume;

    // process
    volume = M_PI * (radius * radius) * height;

    return volume;
}


main() {
    // this function gets radius and height

    float userRadius;
    std::string radiusString;
    float userHeight;
    std::string heightString;
    float calculateVolume;

    try {

        // input
        std::cout << "Enter the radius (cm): ";
        std::cin >> radiusString;
        std::cout << "Enter the height (cm): ";
        std::cin >> heightString;
        std::cout << std::endl;

        userRadius = std::stof(radiusString);
        userHeight = std::stof(heightString);

        // call functions
        float(calculateVolume) = CalculateVolume(userRadius, userHeight);

        // output
        std::cout << "The volume is " << std::fixed << \
        std::setprecision(2) << calculateVolume << std::setfill('0') << " cm³";
    } catch (std::invalid_argument) {
        std::cout << "Please insert a valid number.";
    }
}
