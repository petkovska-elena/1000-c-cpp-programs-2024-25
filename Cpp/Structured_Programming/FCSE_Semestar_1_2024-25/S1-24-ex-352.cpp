//
// Created by Elena Petkovska on 14.8.25.
//

// Kvalifikaciski Zadaci

/* Од стандарден влез се внесува број n, потоа n цели броеви. Испечати ги елементите одделени со запирка и празно место, во ист ред. */

#include <iostream>
using namespace std;

int main() {
	int n, a[100];
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (i) cout << ", ";
		cout << a[i];
	}

	cout << endl;
	return 0;
}