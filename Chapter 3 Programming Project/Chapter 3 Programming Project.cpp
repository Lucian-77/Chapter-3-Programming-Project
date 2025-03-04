// Chapter 3 Programming Project.cpp : This file contains the 'Recipe' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "How many cookies do you wish to make?\n\nNumber of cookies: ";
    double numOCookies;
    std::cin >> numOCookies;
    double ratio = numOCookies / 48;
    double cOSugar = 1.5 * ratio, cOButter = 1 * ratio, cOFlour = 2.75 * ratio;
    std::cout << std::setprecision(3) << "\nYou will need:\n" << cOSugar << " cups of sugar,\n" << cOButter << " cups of butter,\nAnd " << cOFlour << " cups of flour.\n";
    return 0;
}
