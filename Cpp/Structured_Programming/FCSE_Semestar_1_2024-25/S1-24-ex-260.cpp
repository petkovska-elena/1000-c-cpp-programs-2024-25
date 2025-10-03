//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај 10 цели броеви. Испечати го бројот на максималниот елемент и неговиот индекс 0-базно на ист ред.
 * Read 10 integers. Print the maximum value and its zero-based index on one line. */

#include <iostream>
using namespace std;

int main() {
	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}

	// Initialize max
	int max_value = arr[0];
	int max_index = 0;

	// Find max
	for (int i = 1; i < 10; i++) {
		if (arr[i] > max_value) {
			max_value = arr[i];
			max_index = i;
		}
	}

	// Output
	cout << max_value << " " << max_index << endl;
	return 0;
}
