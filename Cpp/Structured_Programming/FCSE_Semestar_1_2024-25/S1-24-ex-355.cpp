//
// Created by Elena Petkovska on 14.8.25.
//

// Kvalifikaciski Zadaci

/* Пресметај n! (факториел) - Rekurzija */

#include <iostream>
using namespace std;

long long faktoriel(int n) {
	if (n <= 1) return 1;
	return n * faktoriel(n - 1);
}

int main() {
	int n;
	cin >> n;

	cout << n << "! = " << faktoriel(n) << endl;
	return 0;
}