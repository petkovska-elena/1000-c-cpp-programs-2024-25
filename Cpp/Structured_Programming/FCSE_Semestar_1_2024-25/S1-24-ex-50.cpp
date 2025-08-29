//
// Created by Elena Petkovska on 8.4.25.
//

/* Да се напише програма која за матрица внесена од тастатура ќе ја пресмета
 * разликата на збирот на елементите на непарните колони и збирот на елементите на парните редици.
 * Матрицата не мора да биде квадратна. */

#include <iostream>
using namespace std;

int main()
{
    int a[100][100];
    int n, m, sum_col = 0, sum_rows = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((j+1)%2)
            {
                sum_col += a[i][j];
            }

            if (! ((i+1)%2))
            {
                sum_rows += a[i][j];
            }
        }
    }

    cout << sum_col - sum_rows << endl;
    return 0;
}
