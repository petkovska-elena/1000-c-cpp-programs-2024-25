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
    int rev = 0;

    while (tmp > 0)
    {
        int ld = tmp % 10;
        rev = rev * 10 * ld;
        tmp /= 10;
    }

    cout << number << "-->" << rev << endl;
    return 0;
}