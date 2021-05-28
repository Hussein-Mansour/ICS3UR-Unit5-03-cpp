// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Thu/May27/2021
// This program takes the level to grade and returns the middle percentage mark


#include <iostream>


void percentageMark(int percentageInt) {
    // this function checks Which answer and prints it

    // process & output
    if (percentageInt == 4) {
        std::cout << "\nlevel " << percentageInt
        << " has a middle percentage of 90%" << std::endl;
        std::cout << "\nDone." << std::endl;
    } else if (percentageInt == 3) {
        std::cout << "\nlevel " << percentageInt
        << " has a middle percentage of 74%" << std::endl;
        std::cout << "\nDone." << std::endl;
    } else if (percentageInt == 2) {
        std::cout << "\nlevel " << percentageInt
        << " has a middle percentage of 64%" << std::endl;
        std::cout << "\nDone." << std::endl;
    } else if (percentageInt == 1) {
        std::cout << "\nlevel " << percentageInt
        << " has a middle percentage of 54%" << std::endl;
        std::cout << "\nDone." << std::endl;
    }
}


void level(std::string levelFromUser) {
    // this function checks Which answer and prints it

    // process & output
    if (levelFromUser == "4+") {
        std::cout << "\nlevel " << levelFromUser
        << " has a middle percentage of 97%" << std::endl;
        std::cout << "\nDone." << std::endl;
    } else if (levelFromUser == "4-") {
        std::cout << "\nlevel " << levelFromUser
        << " has a middle percentage of 84%" << std::endl;
        std::cout << "\nDone." << std::endl;
    } else if (levelFromUser == "3+") {
        std::cout << "\nlevel " << levelFromUser
        << " has a middle percentage of 78%" << std::endl;
        std::cout << "\nDone." << std::endl;
    } else if (levelFromUser == "3-") {
        std::cout << "\nlevel " << levelFromUser
        << " has a middle percentage of 71%" << std::endl;
        std::cout << "\nDone." << std::endl;
    } else if (levelFromUser == "2+") {
        std::cout << "\nlevel " << levelFromUser
        << " has a middle percentage of 68%" << std::endl;
        std::cout << "\nDone." << std::endl;
    } else if (levelFromUser == "2-") {
        std::cout << "\nlevel " << levelFromUser
        << " has a middle percentage of 61%" << std::endl;
        std::cout << "\nDone." << std::endl;
    } else if (levelFromUser == "1+") {
        std::cout << "\nlevel " << levelFromUser
        << " has a middle percentage of 58%" << std::endl;
        std::cout << "\nDone." << std::endl;
    } else if (levelFromUser == "1-") {
        std::cout << "\nlevel " << levelFromUser
        << " has a middle percentage of 51%" << std::endl;
        std::cout << "\nDone." << std::endl;
    } else if (levelFromUser == "R") {
        std::cout << "\nlevel " << levelFromUser
        << " has a middle percentage of 0-48%" << std::endl;
        std::cout << "\nDone." << std::endl;
    }
}


int main() {
    // this function call other functions
    std::string levelFromUser;
    int percentageInt;
    // input
    std::cout << "Enter the level you want converted to a percentage: ";
    std::cin >> levelFromUser;
    try {
        percentageInt = std::stoi(levelFromUser);
        // call functions
        percentageMark(percentageInt);
    } catch (std::invalid_argument) {
       std::cout << "\nInvalid Input!" << std::endl;
       std::cout << "\nDone." << std::endl;
    }
}
