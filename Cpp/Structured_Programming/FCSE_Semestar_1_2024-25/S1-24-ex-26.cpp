//
// Created by Elena Petkovska on 8.4.25.
//

/* Auditoriski Vezbi 3 (23.10.2024) */

/* Да се напише програма што од n броеви (внесени од тастатура) ќе го определи бројот на
 * броеви што се деливи со 3, при делењето со 3 имаат остаток 1, односно 2.
 * Задачата да се реши со while, do...while и for */

#include <iostream>
using namespace std;

int main()
{
    int n = 1, i = 0, number, div, r1, r2;
    div = r1 = r2 = 0;

    cout << "Vnesi go brojot na broevi: ";
    cin >> n;

    for (i = 0; i < n; ++i)
    {
        cin >> number;
        if (number % 3 == 0)
        {
            div++;
        }
        else if (number % 3 == 1) r1++;
        else r2++;
    }

    cout << "Broj na broevi koi shto se dellivi so 3 e " << div << endl;
    cout << "Brojot na broevi koi pri delenje so 3 imaat ostatok 1 e " << r1 << endl;
    cout << "Brojot na broevi koi pri delenje so 3 imaat ostatok 2 e " << r2 << endl;

    return 0;
}