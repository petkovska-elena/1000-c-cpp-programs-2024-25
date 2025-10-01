//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај 10 цели броеви и број X. Испечати колку пати се појавува X.
 * Read 10 integers and a value X. Print the count of occurrences of X. */

#include <iostream>
using namespace std;

int main() {
	int arr[10], x;
	int counter = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}

	cin >> x;

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == x)
		{
			counter++;
		}
	}

	cout << counter << endl;
	return 0;
}
