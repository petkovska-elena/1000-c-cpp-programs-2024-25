//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 8 - Nizi

/* Да се напише програма која ќе го пресмета просекот на 10 броеви внесени од тастатура. */

#include <iostream>
using namespace std;

int main() {
	int number, n, avg = 0;

	cout << "Vnesuvaj broevi:" << endl;

	for (n = 0; n < 10; n++) {
		cin >> number;
		avg += number;    // Сумирање на внесените броеви
	}

	cout << "Srednata vrednost na vnesenite broevi e: "
		 << (float)avg / n << endl;

	return 0;
}
