//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 10 - Rekurzija

/* Факториел на бројот n - Итеративен алгоритам */

#include <iostream>
using namespace std;

int main() {
	int n, fact = 1;
	cout << "Vnesi broj: ";
	cin >> n;

	for(int i = 1; i <= n; i++) {
		fact *= i;
	}

	cout << "Faktoriel od " << n << " e: " << fact << endl;
	return 0;
}