// CGT 215 Lab 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void printMenu(int& choice) {
    std::cout << "Welcome to my program, please select an operation to perform:" << endl;
    std::cout << "1. Placeholder" << endl;
    std::cout << "2. Another Placeholder" << endl;
    std::cout << "3. And another one" << endl;

    std::cout << "\nYour Selection:";
    std::cin >> choice;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
