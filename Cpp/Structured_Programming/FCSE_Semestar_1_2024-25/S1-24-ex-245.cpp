//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај 3×4 матрица цели броеви. Испечати ја сумата на елементите во непарните колони пресметани со 1-базно индексирање.
 * Read a 3×4 integer matrix. Print the sum of elements in odd-numbered columns using 1-based indexing. */

#include <iostream>
using namespace std;

int main() {
	int matrix[3][4];
	int sum = 0;

	//Read + Sum of the odd numbered columns
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> matrix[i][j];

			//Columns are counted from 0, 1, 2, 3, so if j % 2 == 0,
			//then it is the first (0) and third (2) column of the matrix
			if (j % 2 == 0)
			{
				sum += matrix[i][j];
			}
		}
	}

	cout << sum << endl;
	return 0;
}
