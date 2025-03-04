// Chapter 3 Programming Project.cpp : This file contains the 'recipe' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, 1000);
    int num1 = dist(gen), num2 = dist(gen);
    std::cout << "What is the sum of " << num1 << " and " << num2 << "?\n\n";
    int answer;
    std::cout << "Answer: ";
    std::cin >> answer;
    int cAnswer = num1 + num2;
    if (answer == cAnswer) {
        std::cout << "\nCorrect!\n";
    }
    else {
        std::cout << "\nIncorrect, try again.\n\n";
        std::cout << "Answer: ";
        int answer2;
        std::cin >> answer2;
        if (answer2 == cAnswer) {
            std::cout << "\nCorrect!\n";
        }
        else {
            std::cout << "\nIncorrect, the correct answer is " << cAnswer << "\n";
        }
    }
    return 0;
}
