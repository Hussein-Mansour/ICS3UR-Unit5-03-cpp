// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Thu/May27/2021
// This program takes the level to grade and returns the middle percentage mark


#include <iostream>
std::string  percentageMark(std::string percentageStr) {
    // this function checks Which answer and prints it

    // process & output
    if (percentageStr == "4") {
        percentageStr = 90;
    } else if (percentageStr == "3") {
        percentageStr = 75;
    } else if (percentageStr == "2") {
        percentageStr = 64;
    } else if (percentageStr == "1") {
        percentageStr = 54;
    } else if (percentageStr == "4+") {
        percentageStr = 97;
    } else if (percentageStr == "4-") {
        percentageStr = 84;
    } else if (percentageStr == "3+") {
        percentageStr = 78;
    } else if (percentageStr == "3-") {
        percentageStr = 71;
    } else if (percentageStr == "2+") {
        percentageStr = 68;
    } else if (percentageStr == "2-") {
        percentageStr = 61;
    } else if (percentageStr == "1+") {
        percentageStr = 58;
    } else if (percentageStr == "1-") {
        percentageStr = 51;
    } else if (percentageStr == "R") {
        percentageStr = 49;
    }
    
    return percentageStr;
}


int main() {
    // this function call other functions
    std::string percentageStr;
    std::string levelFromUser;
    std::string SomeVar;
    // input
    std::cout << "Enter the level you want converted to a percentage: ";
    std::cin >> levelFromUser;
    try {
        percentageStr = levelFromUser;
        // call functions
        SomeVar = percentageMark(percentageStr);
        // output
        std::cout << "\nlevel " << levelFromUser
        << " has a middle percentage of " << SomeVar << "%" << std::endl;
        std::cout << "\nDone." << std::endl;
    } catch (std::invalid_argument) {
       std::cout << "\nInvalid Input!" << std::endl;
       std::cout << "\nDone." << std::endl;
    }
}
