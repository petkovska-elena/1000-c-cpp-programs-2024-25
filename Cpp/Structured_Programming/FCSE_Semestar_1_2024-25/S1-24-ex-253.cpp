//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај 8 цели броеви. Замени секој негативен број со 0 и испечати.
 * Read 8 integers. Replace negatives with 0 and print. */

#include <iostream>
using namespace std;

int main() {
	int arr[8];

	for (int i = 0; i < 8; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 9; i++)
	{
		if (arr[i] < 0)
		{
			arr[i] = 0;
		}
	}

	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
