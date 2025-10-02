//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај точно 10 цели броеви. Сите нули премести ги на крај држејќи го редоследот на ненултите, потоа испечати.
 * Read 10 integers. Move all zeros to the end preserving the order of nonzeros, then print. */

#include <iostream>
using namespace std;

int main() {
	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}

	int pos = 0; // position to place the next nonzero
	for (int i = 0; i < 10; i++) {
		if (arr[i] != 0) {
			arr[pos] = arr[i];
			pos++;
		}
	}

	// Fill remaining with zeros
	while (pos < 10) {
		arr[pos] = 0;
		pos++;
	}

	// Print result
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}
