//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај 15 цели броеви. Испечати YES ако постои елемент што е еднаков на просекот од неговите два соседи, инаку NO. Игнорирај ги краевите.
 * Read 15 integers. Print YES if some element equals the average of its two neighbors, else NO. Ignore endpoints. */

#include <iostream>
using namespace std;

int main() {
	int arr[15];

	for (int i = 0; i < 15; i++)
	{
		cin >> arr[i];
	}

	for (int i = 1; i < 14; i++)
	{
		if (2 * arr[i] == (arr[i-1] + arr[i+1]))
		{
			cout << "YES";
			return 0;
		}
	}

	cout << "NO";
	return 0;
}
