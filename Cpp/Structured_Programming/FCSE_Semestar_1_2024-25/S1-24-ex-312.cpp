//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 9 - Nizi Operacii

/* Вметнување елемент */

#include <iostream>
using namespace std;

// Function to find if the array has an element with value key
int linear_search(int arr[], int n, int key) {
	// Traverse the array
	for (int i = 0; i < n; i++) {
		// Check if the key is found
		if (arr[i] == key) {
			// Key found, stop searching
			// and return the position
			return i;
		}
	}
	// If the key is not found
	return -1;
}

int main() {
	int n, key;
	cout << "Vnesi golemina na niza: ";
	cin >> n;

	int arr[n];
	cout << "Vnesi " << n << " elementi vo nizata:\n";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << "Vnesi element za prebaruvanje: ";
	cin >> key;

	int rezultat = linear_search(arr, n, key);

	if (rezultat != -1)
		cout << "Elementot " << key << " e pronajden na indeks " << rezultat << endl;
	else
		cout << "Elementot " << key << " ne e pronajden vo nizata." << endl;

	return 0;
}