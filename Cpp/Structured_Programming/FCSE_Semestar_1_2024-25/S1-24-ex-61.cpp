//
// Created by Elena Petkovska on 8.4.25.
//

/* Auditoriski 4 - 30/10/2024 */

#include <iostream>
using namespace std;

int main()
{
    int max1, max2, number, n;
    cin >> max1 >> max2 >> n;

    if (max1 < max2)
    {
        swap(max1, max2);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> number;

        if (number > max1)
        {
            max2 = max1;
            max1 = number;
        }
        else if (number > max2)
        {
            max2 = number;
        }
    }

    cout << max1 << " " << max2 << endl;
     return 0;
}
