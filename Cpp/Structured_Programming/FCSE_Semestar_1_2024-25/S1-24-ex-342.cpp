//
// Created by Elena Petkovska on 14.8.25.
//

// Kvalifikaciski Zadaci

/* Прочитај еден број N. Испечати го збирот на сите негови непарни цифри. */

#include <iostream>
using namespace std;

int main() {
	int N;
	int sum = 0;

	cin >> N;
	while (N > 0)
	{
		int digit = N % 10;
		if (digit % 2 != 0)
		{
			sum += digit;
		}
		N /= 10;
	}

	cout << sum << endl;
	return 0;
}
