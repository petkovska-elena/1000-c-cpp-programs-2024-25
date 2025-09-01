//
// Created by Elena Petkovska on 8.4.25.
//

/* Lab 3 - 05/11/2024 */

/* 1. Se vnesuvaat 2 broevi a,b; b e od 0 do 9,
 * 2. da se najde kolku pati se naogja b vo a.
 * 3. Primer input 12334 3, output: 2 */

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a number a: ";
    cin >> a;
    cout << "Enter a number (0-9): ";
    cin >> b;

    int count = 0; //Counter of how many times b appers in a
    int current_digit;

    while (a > 0)
    {
        current_digit = a % 10;

        if (current_digit == b)
        {
            count++;
        }
        a = a / 10; //Remove the last digit from a
    }

    cout << "The digit " << b << " appears " << count << " times." << endl;
    return 0;
}