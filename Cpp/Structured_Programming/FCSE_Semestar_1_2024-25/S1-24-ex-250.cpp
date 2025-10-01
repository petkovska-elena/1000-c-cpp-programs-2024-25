//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај еден цел број N. Испечати ги сите делители на N по растечки редослед.
Read N and print all its divisors in ascending order. */

#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 1; i < N; i++)
	{
		if (N % i == 0)
		{
			cout << i << " ";
		}
	}

	return 0;
}
