//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 7 - Funkcii

/* Пренос на вредности во функцијата */

#include <iostream>
using namespace std;

int swapv(int x, int y) {
	int t;
	t = x;
	x = y;
	y = t;
	cout << "x = " << x << " y = " << y << endl;
	return 0;
}

int main() {
	int a = 10, b = 20;
	cout << "a = " << a << " b = " << b << endl;
	swapv(a, b);
	cout << "a = " << a << " b = " << b << endl;
	return 0;
}