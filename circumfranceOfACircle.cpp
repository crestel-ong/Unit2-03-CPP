// Copyright (c) 2021 Crestel Ong All rights reserved
//
// Created by: Crestel Ong
// Created on: September 2021
// This is the "Hello, World!" program, with proper style

#include <iostream>

int main() {
    // this function calculates circumfrance of a circle
    const double TAU = 6.28;
    int radius;
    double circumfrance;

    // input
    std::cout << "Enter radius of the circle (mm): ";
    std::cin >> radius;

    // process
    circumfrance = TAU*radius;

    // output
    std::cout << "" << std::endl;
    std::cout << "The circumfrance is " << circumfrance << " mm" << std::endl;
}
