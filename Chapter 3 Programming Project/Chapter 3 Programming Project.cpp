// Chapter 3 Programming Project.cpp : This file contains the 'Interest' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::left << std::setw(38) << "What is your principle amount?" << std::right << "$ ";
    double prince;
    std::cin >> prince;
    std::cout << std::left << std::setw(39) << "\nWhat is your interest rate?" << std::right << "% ";
    double intRate;
    std::cin >> intRate;
    std::cout << "\nHow many times will it compound? " << "amount: ";
    double nOComp;
    std::cin >> nOComp;
    double total = prince * pow((1 + ((intRate / 100) / nOComp)), nOComp);
    double interest = total - prince;
    std::cout << std::fixed << std::setprecision(2) << "\nEarned interest: $" << interest << "\n\nTotal amount in savings: $" << total << "\n";
    return 0;
}