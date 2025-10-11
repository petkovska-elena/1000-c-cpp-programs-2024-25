//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 7 - Funkcii

/* Пример за преоптоварување на функции (2) */

#include <iostream>
using namespace std;

int square(int x) {
	return x * x;
}

double square(double y) {
	return y * y;
}

int main() {
	cout << "Kvadrat na celiot broj 7 e " << square(7)
		 << "\nKvadratot na double vrednosta 7.5 e " << square(7.5)
		 << endl;

	return 0;
}