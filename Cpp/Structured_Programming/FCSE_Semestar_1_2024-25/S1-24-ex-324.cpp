//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 10 - Rekurzija

/* Растечка низа броеви */

#include <iostream>
using namespace std;

void niza(int n) {
	if (n > 0)
	{
		niza(n - 1);      // rekurziven povik so pomalo n
		cout << n << " ";        // pecatenje na brojot otkako ke se vrati rekurzijata
	}
}

int main() {
	int n;
	cout << "Vnesi broj n: ";
	cin >> n;

	cout << "Niza vo rastecki redosled od " << n << " " << "e: ";
	niza(n);
	cout << endl;

	return 0;
}