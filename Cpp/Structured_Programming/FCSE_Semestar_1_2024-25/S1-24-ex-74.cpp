//
// Created by Elena Petkovska on 8.4.25.
//

/* Lab 2 - 29/10/2024 */

#include <iostream>
using namespace std;

int main()
{
    int p, q, N, temp = 1;
    cin >> p >> q >> N;

    do
    {
        if (N > temp)
        {
            cout << p << ", ";
        }
        else
        {
            cout << p;
        }

        p += q;
        temp++;
    }

    while (N >= temp);
    return 0;
}
