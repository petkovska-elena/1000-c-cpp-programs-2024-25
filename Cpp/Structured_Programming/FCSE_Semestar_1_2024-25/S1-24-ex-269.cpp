//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај 12 цели броеви. Замени секое појавување на најмалата вредност со 0, потоа испечати ја низата.
 * Read 12 integers. Replace every occurrence of the minimum value with 0 and print. */

#include <iostream>
using namespace std;

int main() {
	int arr[12];

	// Read 12 numbers
	for (int i = 0; i < 12; i++) {
		cin >> arr[i];
	}

	// Find the minimum value
	int min_val = arr[0];
	for (int i = 1; i < 12; i++) {
		if (arr[i] < min_val) {
			min_val = arr[i];
		}
	}

	// Replace all occurrences of the min value with 0
	for (int i = 0; i < 12; i++) {
		if (arr[i] == min_val) {
			arr[i] = 0;
		}
	}

	// Print result
	for (int i = 0; i < 12; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}
