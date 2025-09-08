// Created by Elena Petkovska on 4.6.2025.
//

/* Задачи за вежбање за втор колоквиум / испит - Courses 2024/25 */

#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int matrix[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n-2; j++)
        {
            if (matrix[i][j] == 1 && matrix[i][j+1] ==1 && matrix[i][j+2])
            {
                count++;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m - 2; j++)
        {
            if (matrix[j][i] == 1 && matrix[j+1][i] == 1 && matrix[j+2][i] == 1)
            {
                count++;
                break;
            }
        }
    }

    cout << count << endl;
    return 0;
}


















