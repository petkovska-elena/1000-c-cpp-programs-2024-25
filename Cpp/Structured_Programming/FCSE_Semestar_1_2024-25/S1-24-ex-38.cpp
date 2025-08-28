//
// Created by Elena Petkovska on 8.4.25.
//

/* Lab 09/12/2024 */

/* Од стандарден влез се вчитуваат 2 броја M и N, кои ја означуваат димензијата на матрицата,
 * MxN и потоа се внесуваат елементите во матрицата. Вашате задача е последниот елемент во секој
 * од редовите на матрицата, да го замените со максималниот елемент од таа редица.
 * На крај испечатете ја изменетата матрица и во нов ред среданта свредност на изменетата матицата. */

/* TO-DO Steps:
 * 1. Од стандарден влез се вчитуваат 2 броја M и N,
 * 2. кои ја означуваат димензијата на матрицата, MxN
 * 3. и потоа се внесуваат елементите во матрицата.
* 4. Вашате задача е последниот елемент во секој од редовите на матрицата, да го замените со максималниот елемент од таа редица.
* 5. На крај испечатете ја изменетата матрица
* 6. и во нов ред среданта вредност на изменетата матицата. */

#include <iostream>
using namespace std;

int main()
{
    int M, N;
    cin >> M >> N;

    int matrix[100][100];
    int all_elements[10000];
    int total = 0;

    //Vnesuvanje na matricata
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> matrix[i][j];
        }
    }

    //Modificiranje na sekoj red
    for (int i = 0; i < M; i++)
    {
        int max_val = matrix[i][0];
        for (int j = 1; j < N; j++)
        {
            if (matrix[i][j] > max_val)
                max_val = matrix[i][j];
        }
        matrix[i][N - 1] = max_val; //Zamena na posledniot element vo redot
        for (int j = 0; j < N; j++)
        {
            all_elements[total++] = matrix[i][j];
        }
    }

    //Pecatenje na izmenetata matrica
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    //Sortiranje i presmetka na medijana
    sort(all_elements, all_elements + total);
    double median;
    if (total % 2 == 0)
    {
        median = (all_elements[total/2-1] + all_elements[total/2] / 2.0);
    } else
    {
        median = all_elements[total/2];
    }

    cout << median << endl;
    return 0;
}







