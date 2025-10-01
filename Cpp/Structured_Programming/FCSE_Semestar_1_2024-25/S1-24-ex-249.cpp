//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај 12 цели броеви. Испечати го збирот на елементите на парни индекси со 0-базно индексирање.
 * Read 12 integers. Print the sum of elements at even indices, zero-based. */

#include <iostream>
using namespace std;

int main() {
	int arr[12];
	int sum = 0;

	for (int i = 0; i < 12; i++)
	{
		cin >> arr[i];
		if (i % 2 == 0)
		{
			sum += arr[i];
		}
	}

	cout << sum << endl;
	return 0;
}
