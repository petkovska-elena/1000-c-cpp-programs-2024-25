//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 7 - Funkcii

/* Програма за пресметување на факториел */

#include <iostream>
using namespace std;

void calc_factoriel(int n) {
	int i, fact_num = 1;
	for (i = 1; i <= n; ++i) {
		fact_num *= i;
	}
	cout << "Faktoriel od " << n << " iznesuva " << fact_num << endl;
}

int main() {
	int broj;
	cout << "Vnesi broj za koj da presmetam faktoriel: ";
	cin >> broj;

	calc_factoriel(broj);

	return 0;
}