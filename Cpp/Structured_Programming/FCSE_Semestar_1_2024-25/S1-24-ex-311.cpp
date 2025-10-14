//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 9 - Nizi Operacii

/* Вметнување елемент */

#include <iostream>
using namespace std;

// Function to insert element at a specific position
void insertElement(int arr[], int &n, int el, int pos) {
	// shift elements to the right
	// which are on the right side of pos
	for (int i = n - 1; i >= pos; i--) {
		arr[i + 1] = arr[i];
	}

	arr[pos] = el; // insert the element in the array
	n++;           // increment the number of elements in the array
}

int main() {
	const int MAX = 100;
	int arr[MAX], n, el, pos;

	cout << "Vnesi broj na elementi vo nizata: ";
	cin >> n;

	cout << "Vnesi elementi vo nizata:\n";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << "Vnesi element koj sakas da go dodadesh: ";
	cin >> el;

	cout << "Vnesi pozicija na koja da se dodade elementot: ";
	cin >> pos;

	insertElement(arr, n, el, pos);

	cout << "Nizata po vmetnuvanjeto na elementot e:\n";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}