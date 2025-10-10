//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 7 - Funkcii

/* Пример – пресметување волумен на 3 коцки */

#include <iostream>
using namespace std;

inline double cube(const double s) {
	return s * s * s;
}

int main() {
	double side;

	for (int k = 1; k < 4; k++) {
		cout << "Vnesi dolzhina na stranata na kockata: ";
		cin >> side;
		cout << "Volumenot na kocka so strana "
			 << side << " e " << cube(side) << endl;
	}

	return 0;
}