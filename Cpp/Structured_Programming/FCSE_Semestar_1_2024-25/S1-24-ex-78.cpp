//
// Created by Elena Petkovska on 8.4.25.
//

/* Lab 3 - 05/11/2024 */

/*1. Se vnesuvaat 3 broevi X,C,P
 *2. Da se ispechatat 10 broevi pogolemi od X, koi shto go sodrzhat brojot C, P pati.
 *3. Primer input: 100 2 2 output: 122,202,212 itn */

#include <iostream>
using namespace std;

int count_occurances(int num, int C)
{
    int count = 0;
    while (num > 0)
    {
        int digit = num % 10;
        if (digit == C)
        {
            count++;
        }
        num /= 10;
    }
    return count;
}

int main()
{
    int X, C, P;
    cout << "Enter X, C and P: ";
    cin >> X >> C >> P;

    int found = 0;
    int num = X + 1;

    while (found < 10)
    {
        if (count_occurances(num, C) == P)
        {
            cout << num << " ";
            found++;
        }
        num++;
    }

    cout << endl;
    return 0;
}