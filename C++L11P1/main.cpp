//
//  main.cpp
//  C++L11P1
//
//  Created by Tadeusz Potoniec on 24/01/2023.
//  Based on https://www.youtube.com/watch?v=ErOzmh3BiXU&list=PLOYHgt8dIdoxx0Y5wzs7CFpmBzb40PaDo and with help chat.openai

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double numbers[5];
    double sum = 0;
    double average;

    // Get numbers from user
    for (int i = 0; i < 5; i++) {
        cout << "Enter a non-integer number: "<<i+1<<": ";
        cin>>numbers[i];
        sum += numbers[i];
    }

    // Calculate average
    average = sum / 5;
    cout << "Average of numbers: " << average << endl;

    // Initialize variable to the largest possible number
    double closest = INFINITY;
    int closestIndex;

    // Find number closest to average
    for (int i = 0; i < 5; i++) {
        if (abs(numbers[i] - average) < abs(closest - average)) {
            closest = numbers[i];
            closestIndex = i;
        }
    }

    cout << "Number closest to average: " << closest << endl;
    return 0;
}
