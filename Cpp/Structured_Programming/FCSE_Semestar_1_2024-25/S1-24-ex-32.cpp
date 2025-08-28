//
// Created by Elena Petkovska on 8.4.25.
//

/* Kvalifikaciski */

/* Write a program to print all three-digit numbers divisible by 3, each on a new line. */

#include <iostream>
using namespace std;

int main()
{
    for (int i = 100; i <= 1000; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << endl;
        }
    }
}