//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 9 - Nizi Operacii

/* Изминување на низа */

#include <iostream>
using namespace std;

int main() {
	// Declaration of the array
	const int MAX = 100;
	int a[MAX] = {0};

	int n;
	// Filling up the first n elements
	// of the array with specific values
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]:";
		cin >> a[i];
	}

	// Printing the array to STDOUT
	for (int i = 0; i < n; i++) {
		cout << a[i] << "\n";
	}

	return 0;
}