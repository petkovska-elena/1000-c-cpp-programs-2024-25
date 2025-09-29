//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај 10 цели броеви. Испечати колку од нив се прости броеви.
 * Read 10 integers. Print how many are prime. */

#include <iostream>
using namespace std;

bool is_prime(int n) {
	if (n < 2) return false;

	for (int i = 2; i * i <= n; i++)
	{ if (n % i == 0) return false; }
	return true;
}

int main() {
	int a[10], count = 0;

	for (int i = 0; i < 10; i++) {
		cin >> a[i];
		if (is_prime (a[i])) {
			count++;
		}
	}

	cout << count << endl;
	return 0;
}

