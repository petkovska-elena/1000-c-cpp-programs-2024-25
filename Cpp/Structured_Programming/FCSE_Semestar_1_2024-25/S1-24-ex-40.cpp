//
// Created by Elena Petkovska on 8.4.25.
//

/* Lab 09/12/2024 */

/* На влез имате NxM матрица, каде прво се вчитуваат N и М, а потоа елементите на матрицата.
Ваша задача е да ги испечатите дијагоналните елементи (види слика) почнувајќи од првиот ред на матрицата.
Видете тест примери за печатење
Напомена: внимавајте во случај да матрицата не е квадратна */

/* TO-DO Steps:
 * 1. На влез имате NxM матрица, каде прво се вчитуваат N и М,
 * 2. а потоа елементите на матрицата.
 * 3. Ваша задача е да ги испечатите дијагоналните елементи (види слика) почнувајќи од првиот ред на матрицата.
 * 4. Напомена: внимавајте во случај да матрицата не е квадратна */

#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int matrix[100][100];

    //Input
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j ++)
        {
            cin >> matrix[i][j];
        }
    }

    //First part: diagonals starting from top row
    for (int col = 0; col < M; col++)
    {
        int i = 0; int j = col;
        while (i < N && j >= 0)
        {
            cout << matrix[i][j] << " ";
            i++;
            j--;
        }
        cout << endl;
    }

    //Second part: Diagonals starting from last column (excluding first row)
    for (int row = 1; row < N; row++)
    {
        int i = row; int j = M - 1;
        while (i < N && j >= 0)
        {
            cout << matrix[i][j] << " ";
            i++;
            j--;
        }
        cout << endl;
    }

    return 0;
}