//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај 10 цели броеви. Премести ги сите непарни на почеток и парни на крај, држејќи редослед внатре во групите, па испечати.
Read 10 integers. Stable partition odds first then evens, and print. */

#include <iostream>
using namespace std;

int main() {
	int arr[10], result[10];
	int pos = 0;

	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}

	// First add odds
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 != 0) {
			result[pos++] = arr[i];
		}
	}

	// Then add evens
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0) {
			result[pos++] = arr[i];
		}
	}

	// Print result
	for (int i = 0; i < 10; i++) {
		cout << result[i] << " ";
	}
	cout << endl;

	return 0;
}
