//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај еден цел број N. Испечати ги сите двоцифрени броеви што се деливи со N, по растечки редослед.
 * Read an integer N. Print all two-digit numbers divisible by N in ascending order. */

#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i <= 99; i++)
	{
		if (i % N == 0)
		{
			cout << i << " ";
		}
	}

	return 0;
}
