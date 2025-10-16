//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 10 - Rekurzija

/* Опаѓачка низа броеви */

#include <iostream>
using namespace std;

void niza(int n) {
	if (n > 0) {
		cout << n << " ";
		niza(n - 1);
	}
}

int main() {
	int n;
	cout << "Vnesi broj n: ";
	cin >> n;

	cout << "Opagacka niza od " << n << " e: ";
	niza(n);
	cout << endl;

	return 0;
}