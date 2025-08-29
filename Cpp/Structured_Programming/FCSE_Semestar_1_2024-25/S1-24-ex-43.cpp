//
// Created by Elena Petkovska on 8.4.25.
//

/* Prezentacii Predavanja */

/* Presmetuvanje na Faktorial na broj */

#include <iostream>
using namespace std;

int factorial (int i)
{
    if (i == 1) return 1;
    else return i * factorial (i - 1);
}

int main()
{
    int z;
    cout << "Please enter a number: ";
    cin >> z;
    int result = factorial(z);
    cout << result << " ";
    return 0;
}