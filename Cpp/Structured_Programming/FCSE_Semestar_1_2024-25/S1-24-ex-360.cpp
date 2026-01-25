//
// Created by Elena Petkovska on 14.8.25.
//

// Kvalifikaciski Zadaci

/* Прочитај еден цел број N и испечати колку цифри има. */

#include <iostream>
using namespace std;

int main() {
	long long N;
	cin >> N;

	if (N < 0) N = -N;

	int digits = 0;

	do {
		digits++;
		N /= 10;
	} while (N > 0);

	cout << digits << endl;
	return 0;
}