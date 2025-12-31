//
// Created by Elena Petkovska on 14.8.25.
//

// Kvalifikaciski Zadaci

/* Прочитај еден број N. Испечати го збирот на сите парни цифри од бројот. */

#include <iostream>
using namespace std;

int main() {
	int N, sum = 0;
	cin >> N;

	while (N > 0)
	{
		int digit = N % 10;        //Last digit
		if (digit % 2 == 0)        //Check if even
		{
			sum += digit;
		}
		N /= 10;                   //Remove last digit
	}

	cout << sum << endl;
	return 0;
}