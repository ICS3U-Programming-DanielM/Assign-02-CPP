//// Copyright (c) 2022 Daniel Momoh All rights reserved.
// /usr/bin/env c++
// Created by : Daniel Momoh
// Created on : Oct 1, 2022
// C++ program to find the Surface Area
// and Volume of Hexagonal Prism.
#include <bits/stdc++.h>

// Function to calculate Surface area
void findSurfaceArea(float a, float h) {
    float Area;

    // Formula to calculate surface area
    Area = 6 * a * h + 3 * sqrt(3) * a * a;

    // Display surface area
    std::cout << "Surface Area: " << Area;
    std::cout << "\n";
}

// Function to calculate Volume
void findVolume(float a, float h) {
    float Volume;

    // formula to calculate Volume
    Volume = 3 * sqrt(3) * a * a * h / 2;

    // Display Volume
    std::cout << "Volume: " << Volume;
}

// Driver Code
int main() {
    float a = 15, h = 10;

    // surface area function call
    findSurfaceArea(a, h);

    // volume function call
    findVolume(a, h);
    return 0;
}
