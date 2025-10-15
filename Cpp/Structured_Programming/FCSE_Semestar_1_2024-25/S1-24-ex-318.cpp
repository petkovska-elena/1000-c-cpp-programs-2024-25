//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 9 - Nizi Operacii

/* C++ програма што го печати прикажаниот дел на дадената 3 x 3 квадратна матрица. */

#include <iostream>
using namespace std;

int main()
{
	// Декларација и иницијализација на матрицата
	int arr[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	// Печатење на зададениот дел од матрицата
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < (3 - i); j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}