//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 10 - Rekurzija

/* Опаѓачка-растечка низа броеви */

#include <iostream>
using namespace std;

void niza(int n) {
	if (n > 0) {
		cout << n;       // печати при опаѓање
		niza(n - 1);     // рекурзивен повик со n-1
		cout << n;       // печати при растење
	}
}

int main() {
	int n;
	cout << "Vnesi broj n: ";
	cin >> n;

	niza(n);

	return 0;
}