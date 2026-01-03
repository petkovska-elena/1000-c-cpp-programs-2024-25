//
// Created by Elena Petkovska on 14.8.25.
//

// Kvalifikaciski Zadaci

/* Прочитај еден број N. Испечати ја неговата најголема цифра. */

#include <iostream>
using namespace std;

int main () {
	int N;
	cin >> N;

	int max_digit = 0;

	while (N > 0)
	{
		int digit = N % 10;
		if (digit > max_digit)
		{
			max_digit = digit;
		}
		N /= 10;
	}

	cout << max_digit << endl;
	return 0;
}