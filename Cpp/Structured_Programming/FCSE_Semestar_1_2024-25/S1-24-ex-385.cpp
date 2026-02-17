//
// Created by Elena Petkovska on 14.8.25.
//

/* LAB Ex.1 (online)
 * Од стандарден влез се вчитуваат 2 броја M и N, кои ја означуваат димензијата на матрицата,
 * MxN и потоа се внесуваат елементите во матрицата. Вашате задача е последниот елемент во секој
 * од редовите на матрицата, да го замените со максималниот елемент од таа редица. На крај испечатете
 * ја изменетата матрица и во нов ред среднaта вредност на изменетата матицата. */

	/* Input
	3 4
	1 5 6 7
	5 4 7 3
	5 5 7 7

	Output
	1 5 6 7
	5 4 7 7
	5 5 7 7
	5.5 */

#include <iostream>
using namespace std;

int main() {
	int M, N;
	float srednaVrednost = 0;
	cin >> M >> N;
	int Matrica[M][N];

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> Matrica[i][j];
		}
	}

	for (int i = 0; i < M; i++)
	{
		int max = Matrica[i][0];

		for (int j = 1; j < N; j++)
		{
			if (max < Matrica[i][j])
			{
				max = Matrica[i][j];
			}
		}

		Matrica[i][N - 1] = max;
	}

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << Matrica[i][j] << " ";
			srednaVrednost += Matrica[i][j];
		}
		cout << endl;
	}

	cout << srednaVrednost / (M*N);
	return 0;
}