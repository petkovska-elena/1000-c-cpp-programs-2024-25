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
	bool board[SIZE][SIZE];   // матрица од bool (true/false)
	int i, j;
	bool color = false;       // почетна вредност за првиот елемент

	// Пополнување на матрицата со 1 и 0
	for(i = 0; i < SIZE; color = !color, i++) {
		for(j = 0; j < SIZE; color = !color, j++) {
			board[i][j] = color;
		}
	}

	// Печатење на матрицата
	for(i = 0; i < SIZE; putchar('\n'), i++) {
		for(j = 0; j < SIZE; j++) {
			cout << (board[i][j] ? '1' : '0');
		}
	}

	return 0;
}