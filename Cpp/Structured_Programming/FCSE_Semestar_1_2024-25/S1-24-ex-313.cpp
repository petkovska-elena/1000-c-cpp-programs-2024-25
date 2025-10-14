//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 9 - Nizi Operacii

/* Подредување со вметнување */

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];        // земи го тековниот елемент
		j = i - 1;

		// Премести ги сите елементи на arr[0..i-1]
		// кои се поголеми од key,
		// за една позиција напред од нивната моментална
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;   // вметни го key на правилната позиција
	}
}

int main() {
	int n;
	cout << "Vnesi broj na elementi: ";
	cin >> n;

	int arr[n];
	cout << "Vnesi gi elementite: ";
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	insertionSort(arr, n);

	cout << "Sortiranata niza e: ";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}