//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 10 - Rekurzija

/* Опаѓачка-растечка низа броеви */

#include <iostream>
using namespace std;

int niza(int n) {
	if (n > 0)
	{
		cout << n << " ";    // pecati pri opagjanje
		niza(n - 1);         // rekurziven povik so n - 1
		cout << n << " ";    // pecati pri rastenje
	}
}

int main() {
	int n;
	cout << "Vnesi broj n: ";
	cin >> n;

	niza(n);

	return 0;
}
