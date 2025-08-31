//
// Created by Elena Petkovska on 8.4.25.
//

/* Auditoriski 5 - 06/11/2024 */

#include <iostream>
using namespace std;

bool prost (int k = 0)
{
    if (k < 4)
    {
        return 1;
    }

    for (int i = 2; i < k; i += 1)
    {
        if (k % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int broj;
    cin >> broj;

    int temp = broj + 1;

    while (true)
    {
        if (prost (temp))
        {
            cout << temp - broj << endl;
            break;
        }

        temp++;
    }
}
