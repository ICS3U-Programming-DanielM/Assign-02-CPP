
//usr/bin/env c++
// Created by : Daniel Momoh
// Created on : Oct 1, 2022
// C++ program to find the Surface Area
// and Volume of Hexagonal Prism.
#include <iostream>
#include <cmath>

int main() {
    //declare variables
    float surfacearea, volume, baseedge, height;

    // Get inputs from user
    std::cout << "Today we will calculate the Surface Area and\n";
    std::cout << "volume of a hexagonal prism.\n";
    std::cout << "Enter the baseedge (cm): ";
    std::cin >> baseedge;
    std::cout << "Enter the height (cm): ";
    std::cin >> height;

    // calculate the Surface Area and volume
    surfacearea = 6 * baseedge * height + 3 * sqrt(3) * baseedge * baseedge;
    volume = 3 * sqrt(3) * baseedge * baseedge * height / 2;

    // Display the Surface Area and
    std::cout << std::endl;
    std::cout << "surfacearea = " << surfacearea << " cm^2. \n";
    std::cout << "\n";
    std::cout << "volume = " << volume << " cm^3. \n";
}