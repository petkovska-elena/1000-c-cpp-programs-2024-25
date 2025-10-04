//
// Created by Elena Petkovska on 14.8.25.
//

// Auditoriski Vezbi 11

#include <iostream>
using namespace std;

void swap (int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int x, y;

	cout << "Enter two numbers: ";
	cin >> x >> y;

	cout << "Before swap: x = " << x << ", y = " << y << endl;

	swap(&x, &y);

	cout << "After swap:  x = " << x << ", y = " << y << endl;

	return 0;
}
