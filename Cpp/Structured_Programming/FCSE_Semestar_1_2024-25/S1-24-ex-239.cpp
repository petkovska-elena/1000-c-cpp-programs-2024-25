//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај 9 цели броеви. Замени го првиот елемент со најголемиот, а последниот со најмалиот, па испечати ја низата.
Read 9 integers. Swap first with maximum and last with minimum, then print the array. */

#include <iostream>
using namespace std;

int main() {
	int niza[9];

	for (int i = 0; i < 9; i++)
	{
		cin >> niza[i];
	}

	//Find positions of global max and min
	int max_position = 0, min_position = 0;
	for (int i = 1; i < 9; i++)
	{
		if (niza[i] > niza[max_position]) max_position = i;
		if (niza[i] < niza[min_position]) min_position = i;
	}

	//Swap first with max
	int temp = niza[0];
	niza[0] = niza[max_position];
	niza[max_position] = temp;

	if (max_position == 0) min_position = max_position;

	//Swap with min
	temp = niza[8];
	niza[8] = niza[min_position];
	niza[min_position] = temp;

	for (int i = 0; i < 9; i++)
	{
		cout << niza[i];
		if (i < 8) cout << " ";
	}
	cout << "\n";
	return 0;
}