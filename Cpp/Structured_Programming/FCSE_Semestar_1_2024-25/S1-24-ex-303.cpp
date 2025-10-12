//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 8 - Nizi

/* Да се напише програма која ќе го пресмета просекот на 10 броеви внесени од тастатура. За секој број да се отпечати дали е под или над просекот. */

#include <iostream>
using namespace std;

int main() {
	int broj[10], n;
	float prosek = 0;

	cout << "Vnesuvaj broevi: " << endl;

	// внесување на броеви
	for (n = 0; n < 10; n++)
		cin >> broj[n];

	// собирање за пресметка на просек
	for (n = 0; n < 10; n++)
		prosek += broj[n];

	prosek /= n; // пресметка на просек

	cout << "Srednata vrednost na vnesenite broevi e: " << prosek << endl;

	// печатење за секој број дали е под или над просек
	for (n = 0; n < 10; n++)
		cout << broj[n] << (broj[n] > prosek ? " > " : " <= ") << prosek << endl;

	return 0;
}