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

    bool printed_any = false;

    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;

        int tmp = number;
        bool is_good = true;

        while (tmp > 9)
        {
            int ld = tmp % 10;
            int sld = tmp / 10 % 10;
            if (ld >= sld)
            {
                is_good = false;
                break;
            }
            tmp = tmp/10;
        }


        if (is_good)
        {
            if (!printed_any) {
                cout << endl;
                printed_any = true;
            }
            cout << "\n" << number << endl;
        }
    }
    return 0;
}

