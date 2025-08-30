//
// Created by Elena Petkovska on 8.4.25.
//

/* Auditoriski 4 - 30/10/2024 */

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int sum = 0;

    for (int i = a; i <= b; i++)
    {
        int tmp = i;
        sum = 0;

        while (tmp > 0)
        {
            int ld = tmp % 10;
            sum += ld;
            tmp /= 10;

            if (sum == 10)
            {
                cout << i << endl;
            }
        }
    }
    return 0;
}