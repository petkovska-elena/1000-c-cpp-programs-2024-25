//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 7 - Funkcii

/* Пример: Определување на најголемиот од три броја */

#include <iostream>
using namespace std;

// Функциски прототип
int maximum(int, int, int);

int main() {
	int a, b, c, m;
	cout << "Vnesi tri celi broja: ";
	cin >> a >> b >> c;

	// повик на функцијата maximum
	m = maximum(a, b, c);

	cout << "Najgolemiot e: " << m << endl;
	return 0;
}

// Дефиниција на функцијата
int maximum(int x, int y, int z) {
	int max = x;
	if (y > max) max = y;
	if (z > max) max = z;
	return max;
}