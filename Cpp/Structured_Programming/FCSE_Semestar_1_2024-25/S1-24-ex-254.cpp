//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај 2×6 матрица цели броеви. Испечати го индексот на колоната со најголем збир, 0-базно.
 * Read a 2×6 matrix. Print the zero-based index of the column with largest sum. */

#include <iostream>
using namespace std;

int main() {
	int matrix[2][6];
	int col_sum[6] = {0}; //Sums for each of the 6 columns

	//Input
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cin >> matrix[i][j];
			col_sum[j] += matrix[i][j];
		}
	}

	//Find max sum column
	int max_sum = col_sum[0];
	int max_index = 0;
	for (int j = 1; j < 6; j++)
	{
		if (col_sum[j] > max_sum)
		{
			max_sum = col_sum[j];
			max_index = j;
		}
	}

	cout << max_index << endl;
	return 0;
}