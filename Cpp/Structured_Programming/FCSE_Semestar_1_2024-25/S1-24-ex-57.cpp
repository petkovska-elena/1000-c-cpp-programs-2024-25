//
// Created by Elena Petkovska on 8.4.25.
//

/* Auditoriski 4 - 30/10/2024 */

#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int tmp = number;

    int sum = 0;
    int counter = 0;

     while (number > 0)
     {
         int last_digit = number % 10;
         sum += last_digit;
         number /= 10;
     }

    cout << "The sum of the digits of the number is " << sum << endl;
    return 0;
}

