//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај 4×4 матрица. Испечати ја матрицата симетризирана по главна дијагонала со тоа што елементите под дијагонала ги заменуваш со нивните горни парови.
 * Read a 4×4 matrix. Print it symmetrized across the main diagonal by copying upper to lower. */

#include <iostream>
using namespace std;

int main() {
	int matrix[4][4];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> matrix[i][j];
		}
	}

	// symmetrize: copy upper to lower
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < i; j++) { // only below diagonal (i > j)
			matrix[i][j] = matrix[j][i];
		}
	}

	// output
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
