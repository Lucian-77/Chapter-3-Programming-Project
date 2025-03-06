// Chapter 3 Programming Project.cpp : This file contains the 'Interest' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::left << std::setw(40) << "What is your principle amount?" << std::right << "$ ";
    double prince;
    std::cin >> prince;
    std::cout << std::left << std::setw(41) << "\nWhat is your interest rate?" << std::right << "% ";
    double intRate;
    std::cin >> intRate;
    std::cout << std::left << std::setw(35) << "\nHow many times will it compound? " << std::right << "Amount: ";
    double nOComp;
    std::cin >> nOComp;
    double total = prince * pow((1 + ((intRate / 100) / nOComp)), nOComp);
    double interest = total - prince;
    std::cout << "\nReport:" << std::left << std::setw(41) << std::fixed << std::setprecision(2) << "\nEarned interest:" << std::right << "$ " << std::setw(7)
        << std::right << interest << std::left << std::setw(41) << "\nTotal amount in savings:" << std::right << "$ " << total << "\n";
    return 0;
}