//
// Created by Elena Petkovska on 8.4.25.
//

/* Auditoriski 4 - 30/10/2024 */
//Kolokviumska zadaca

#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int temp = number;

    //ld - last digit
    //sd - second last digit, the one before it
    while (temp > 9)
    {
        int ld = temp % 10;
        int sld = temp / 10 % 10;
        if (ld >= sld)
        {
            cout << "NO" << endl;
            return 0;
        }
            temp /= 10; //Equivalent to temp = temp / 10
    }

    cout << "YES" << endl;
    return 0;
}