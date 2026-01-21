//
// Created by Elena Petkovska on 14.8.25.
//

// Kvalifikaciski Zadaci

/* Bubble Sort */

#include <iostream>
using namespace std;

int main() {
	int n, arr[100];
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// Bubble Sort
	for (int i = 0; i < n - 1; i++) {          // ќе имаме n-1 "поминувања"
		for (int j = 0; j < n - 1 - i; j++) {  // секое поминување споредува парови
			if (arr[j] > arr[j + 1]) {         // ако се во погрешен редослед
				int temp = arr[j];             // замена
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	// печатење
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}