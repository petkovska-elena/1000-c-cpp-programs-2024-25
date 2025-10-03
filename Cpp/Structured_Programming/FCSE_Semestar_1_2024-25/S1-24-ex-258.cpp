//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај 3×5 матрица. Испечати YES ако постои редица со строго растечки елементи, инаку NO.
 * Read a 3×5 matrix. Print YES if some row is strictly increasing, else NO. */

#include <iostream>
using namespace std;

int main() {
	int matrix[3][5];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> matrix[i][j];
		}
	}

	// Check each row
	for (int i = 0; i < 3; i++) {
		bool increasing = true;
		for (int j = 0; j < 4; j++) {   // compare 5 elements → 4 comparisons
			if (matrix[i][j] >= matrix[i][j+1]) {
				increasing = false;
				break;
			}
		}
		if (increasing) {
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;
	return 0;
}
