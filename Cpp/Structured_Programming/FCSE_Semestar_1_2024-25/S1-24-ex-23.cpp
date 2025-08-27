//
// Created by Elena Petkovska on 8.4.25.
//

/* Auditoriski Vezbi 3 (23.10.2024) */

/* Да се напише програма за пресметување на сумата на сите парни двоцифрени броеви.
 * Добиената сума се печати на екран. */

#include <iostream>
using namespace std;

int main()
{
    int i = 10, sum = 0;

    cout << i;
    sum = i;
    i += 2;

    while (i <= 98)
    {
        cout << " + " << i;
        sum += i;
        i += 2;
    }

    cout << "\nSumata na broevite iznesuva " << sum << endl;

    return 0;
}