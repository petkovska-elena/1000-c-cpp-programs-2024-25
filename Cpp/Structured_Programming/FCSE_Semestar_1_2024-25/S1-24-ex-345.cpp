//
// Created by Elena Petkovska on 14.8.25.
//

// Kvalifikaciski Zadaci

/* Прочитај еден број N. Испечати ја неговата најзначајна цифра. */

#include <iostream>
using namespace std;

int main () {
	int N;
	cin >> N;

	while (N >= 10)
	{
		N /= 10;
	}

	cout << N << endl;
	return 0;
}