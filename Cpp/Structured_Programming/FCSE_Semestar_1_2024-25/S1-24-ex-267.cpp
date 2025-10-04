//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај N со 1 ≤ N ≤ 10. Испечати квадратна матрица N×N пополнета по колони со 1 до N².
 * Read N and print an N×N matrix filled column by column with 1 to N². */

#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int matrix[10][10]; // max 10x10 as per condition
	int num = 1;

	// Fill by columns
	for (int j = 0; j < N; j++) {
		for (int i = 0; i < N; i++) {
			matrix[i][j] = num;
			num++;
		}
	}

	// Print row by row
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
