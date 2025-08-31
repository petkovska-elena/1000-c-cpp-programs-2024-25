//
// Created by Elena Petkovska on 8.4.25.
//

/* Auditoriski 4 - 30/10/2024 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i; i < n; i++)
    {
        int number;
        cin >> number;

        int temp = number;
        bool is_good = true;

        while (temp > 9)
        {
            int ld = temp % 10;
            int sld = temp / 10 % 10;
            if (ld >= sld)
            {
                is_good = false;
                break;
            }
            temp /= 10;
        }

        if (is_good)
        {
            cout << number << endl;
        }
    }

    return 0;
}
