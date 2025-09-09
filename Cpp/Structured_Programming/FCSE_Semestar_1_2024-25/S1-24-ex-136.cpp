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

    int array1[100];
        for (int i = 0; i < m; i++)
        {
            float sum = 0, aritm = 0;
            float diff = 0, max = -1;

            for (int j = 0; j < n; j++)
            {
                sum += matrix[i][j];
            }

            aritm = sum / n;

            for (int j = 0; j < n; j++){
                diff = abs(matrix[i][j] - aritm);
                if (diff > max)
                {
                    max = diff;
                    array1[i] = matrix[i][j];
                }
        }

    }
    for (int i = 0; i < m; i++)
    {
        cout << array1[i] << " ";
    }
    return 0;
}









