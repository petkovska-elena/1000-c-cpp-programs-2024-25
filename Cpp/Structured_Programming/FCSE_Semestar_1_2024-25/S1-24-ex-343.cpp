//
// Created by Elena Petkovska on 14.8.25.
//

// Kvalifikaciski Zadaci

/* Прочитај еден број N. Испечати колку парни цифри има бројот. */

#include <iostream>
using namespace std;

int main() {
	int N, even_counter = 0;
	cin >> N;

	while (N > 0)
	{
		int digit = N % 10;
		if (digit % 2 == 0)
		{
			even_counter++;
		}
		N /= 10;
	}

	cout << even_counter << endl;
	return 0;
}
