//
// Created by Elena Petkovska on 14.8.25.
//

// Kvalifikaciski Zadaci

/* Збир на првите n природни броеви - Rekurzija */

#include <iostream>
using namespace std;

int zbir(int n) {
	if (n == 0) return 0;   // основен случај
	return n + zbir(n - 1); // рекурзивен случај
}

int main() {
	int n;
	cout << "Vnesi broj: ";
	cin >> n;
	cout << "Zbirot e: " << zbir(n) << endl;
	return 0;
}