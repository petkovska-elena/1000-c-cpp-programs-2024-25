//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај еден цел број N. Испечати ги бројките на парни позиции броејќи од десно почнувајќи од позиција 1.
 * Read N. Print the digits at even positions counting from the right starting at 1. */

#include <iostream>
using namespace std;

int main() {
	long long N;
	cin >> N;

	int pos = 1; // position counter from the right
	while (N > 0) {
		int digit = N % 10;  // take last digit
		if (pos % 2 == 0) {  // check if position is even
			cout << digit << " ";
		}
		N /= 10; // remove last digit
		pos++;
	}

	return 0;
}
