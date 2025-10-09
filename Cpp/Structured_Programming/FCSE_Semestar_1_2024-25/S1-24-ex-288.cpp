//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 7 - Funkcii

#include <iostream>
using namespace std;

float square(float x) {   // Функцијата враќа float, бидејќи работиме со децимали
	return x * x;
}

int main() {
	float a, b;
	cout << "Vnesi broj: ";
	cin >> a;

	b = square(a);

	cout << "Kvadratot na " << a << " e " << b << endl;

	return 0;
}