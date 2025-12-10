// Copyright (c) 2025 Sarah OUAMOU All rights reserved.
// Created by: Sarah OUAMOU
// Date: 12 Day, 2025
// This program converts temperatures from Celsius to Fahrenheit.

#include <iostream>
#include <string>

void ConvertTemperature();

void ConvertTemperature() {
    float celsius;
    std::cout << "Enter temperature in degrees Celsius: ";
    std::cin >> celsius;

    float fahrenheit = (9.0f / 5.0f) * celsius + 32.0f;

    std::cout << celsius << " C is equal to "
            << fahrenheit << " F" << std::endl;
}

int main() {
    ConvertTemperature();
}
