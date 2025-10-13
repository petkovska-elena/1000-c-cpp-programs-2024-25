//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 8 - Nizi

/* Да се напише програма која матрица ќе ја пополни со 1 и 0 во форма на шаховска табла и ќе ја испечати. */

#include <iostream>
using namespace std;

#define SIZE 8

int main()
{
	int board[SIZE][SIZE];
	int i, j;

	// Пополнување на матрицата со 1 и 0 во шаховска форма
	for(i = 0; i < SIZE; i++)
		for(j = 0; j < SIZE; j++)
			board[i][j] = (i + j) % 2;

	// Печатење на матрицата
	for(i = 0; i < SIZE; i++)
	{
		for(j = 0; j < SIZE; j++)
			cout << board[i][j];
		cout << endl;
	}

	return 0;
}