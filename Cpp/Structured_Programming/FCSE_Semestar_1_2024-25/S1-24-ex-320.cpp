//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 10 - Rekurzija

/* Факториел на бројот n - Рекурзивен алгоритам */

#include <iostream>
using namespace std;

int factorial(int n) {
	if (n == 1) return 1;
	else return n * factorial(n - 1);
}

int main() {
	int n;
	cout << "Vnesi broj: ";
	cin >> n;

	cout << "Faktoriel od " << n << " e: " << factorial(n) << endl;
	return 0;
}