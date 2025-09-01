//
// Created by Elena Petkovska on 8.4.25.
//

/* Lab 2 - 29/10/2024 */

#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    for (int i = 100; i <= 1000; i++)
    {
        if (i % a == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}
