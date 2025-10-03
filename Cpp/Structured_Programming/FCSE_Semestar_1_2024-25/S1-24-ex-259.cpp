//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај 5×3 матрица. Испечати YES ако постои колона со сите еднакви елементи, инаку NO.
 * Read a 5×3 matrix. Print YES if some column has all equal elements, else NO. */

#include <iostream>
using namespace std;

int main() {
	int matrix[5][3];

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> matrix[i][j];
		}
	}

	// Check each column
	for (int j = 0; j < 3; j++) {
		bool all_equal = true;
		for (int i = 1; i < 5; i++) {
			if (matrix[i][j] != matrix[0][j]) {
				all_equal = false;
				break;
			}
		}
		if (all_equal) {
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;
	return 0;
}
