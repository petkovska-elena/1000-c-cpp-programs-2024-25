//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај 10 цели броеви. Испечати ја втората најголема вредност. Ако нема различни две, испечати истата.
 * Read 10 integers. Print the second largest value. If not distinct, print the same. */

#include <iostream>
using namespace std;

int main() {
	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}

	int max1 = arr[0];
	int max2 = arr[0];

	for (int i = 1; i < 10; i++) {
		if (arr[i] > max1) {
			max2 = max1;
			max1 = arr[i];
		} else if (arr[i] > max2 && arr[i] < max1) {
			max2 = arr[i];
		}
	}

	if (max1 == max2) {
		cout << max1 << endl;   // no distinct second largest
	} else {
		cout << max2 << endl;
	}

	return 0;
}
