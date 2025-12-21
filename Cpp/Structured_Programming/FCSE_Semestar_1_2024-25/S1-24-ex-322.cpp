//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 10 - Rekurzija

/* Збир на целите броеви не поголеми од n */

#include <iostream>
using namespace std;

int zbirN(int n) {
	if (n == 0)
		return 0;
	else
		return n + zbirN (n -1);
}

int main() {
	int n;
	cout << "Vnesi broj: ";

	cin >> n;
	cout << "Zbirot e: " << zbirN(n) << endl;
	return 0;
}