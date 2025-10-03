//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај 7 цели броеви. Испечати ги само различните елементи по редослед на прв појав.
 * Read 7 integers. Print distinct elements keeping first occurrence order. */

#include <iostream>
using namespace std;

int main() {
	int arr[7];

	for (int i = 0; i < 7; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 7; i++)
	{
		bool seen = false;
		for (int j = 0; j < i; j++) {
			if (arr[i] == arr[j]) {
				seen = true;
				break;
			}
		}
		if (!seen) {
			cout << arr[i] << " ";
		}
	}

	return 0;
}
