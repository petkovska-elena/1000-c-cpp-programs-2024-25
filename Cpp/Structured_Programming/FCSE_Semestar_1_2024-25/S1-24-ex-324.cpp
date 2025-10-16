//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 10 - Rekurzija

/* Растечка низа броеви */

#include <iostream>
using namespace std;

void niza(int n) {
	if (n > 0) {
		niza(n - 1);   // рекурзивен повик со помало n
		cout << n;     // печатење на бројот откако ќе се врати рекурзијата
	}
}

int main() {
	int n;
	cout << "Vnesi broj n: ";
	cin >> n;

	niza(n);
	cout << endl;

	return 0;
}