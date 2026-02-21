//
// Created by Elena Petkovska on 14.8.25.
//

//OBJEKTNO-ORIENTIRANO PROGRAMIRANJE
//AUDITORISKI VEZBI 1 - Strukturi vo C++
/* Potsetuvanje za referenci */

#include <iostream>
#include <cstring>
using namespace std;

void swapWithReferences(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void swapWithoutReferences(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a, b;
	cin >> a >> b;

	swapWithoutReferences(a,b);
	cout << a << " " << b << endl; //5 6 (no change)

	swapWithReferences(a, b);
	cout << a << " " << b << endl; //6 5 (swap happens)

	return 0;
}
