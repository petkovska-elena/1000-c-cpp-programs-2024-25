//
// Created by Elena Petkovska on 8.4.25.
//

/* Lab 3 - 05/11/2024 */

#include <iostream>
using namespace std;

int main()
{
    int decimal = 0;  //To store the decimal value
    int binary_digit; //To store the current binary digit
    char input;       //To store the user's input

    cout << "Enter binary digits (enter any non-binary character to stop): ";

    while (true)
    {
        cin >> input;

        if (input == '0')
        {
            binary_digit = 0;
        } else if (input == '1') {
            binary_digit = 1;
        } else
        {
            break;
        }

        decimal = decimal * 2 + binary_digit;
    }

    cout << "The decimal equivalent is: " << decimal << endl;
    return 0;
}