//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај 4×4 матрица цели броеви. Испечати ја сумата на главната и споредната дијагонала.
 * Read a 4×4 matrix. Print the sum of main and secondary diagonals.  */

#include <iostream>
using namespace std;

int main() {
	int matrix[4][4];
	int sum_main = 0, sum_sec = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> matrix[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		sum_main += matrix[i][i];
		sum_sec += matrix[i][4 - 1 - i];
	}

	cout << "Sum main diagonal: " << sum_main << endl;
	cout << "Sum secondary diagonal: " << sum_sec << endl;
	return 0;
}
