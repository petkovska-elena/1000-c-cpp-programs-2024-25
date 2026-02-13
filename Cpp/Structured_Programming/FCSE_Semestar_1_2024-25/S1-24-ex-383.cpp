//
// Created by Elena Petkovska on 14.8.25.
//

#include <iostream>
using namespace std;

void funkcija(int a[], int n) {
	int MAX = a[0], MIN = a[0], SUM = 0;

	for (int i = 0; i < n; i++)
	{
		if (MAX < a[i]) { MAX = a[i]; }
		if (MIN > a[i]) { MIN = a[i]; }
		SUM += a[i];
	}

	cout << "MAX -> " << MAX << endl;
	cout << "MIN -> " << MIN << endl;
	cout << "SUM -> " << SUM << endl;

	for (int i = 0; i < n; i++)
	{
		cout << a[i] + (MAX - MIN) << " ";
	}
}

int main() {
	int n;
	cin >> n;
	int array[n];

	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}

	funkcija(array, n);
	return 0;
}