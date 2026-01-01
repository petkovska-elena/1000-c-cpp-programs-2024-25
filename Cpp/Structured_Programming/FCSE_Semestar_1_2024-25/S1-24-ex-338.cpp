//
// Created by Elena Petkovska on 14.8.25.
//

// Kvalifikaciski Zadaci

/* Прочитај еден број N. Испечати колку од неговите делители се непарни. */

#include <iostream>
using namespace std;

int main() {
	int N;
	int counter = 0;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0 && i % 2 != 0)
		{
			counter++;
		}
	}

	cout << counter << endl;
	return 0;
}
