//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 4 - Ciklusi

/* Да се состави програма што ќе ги отпечати сите прости броеви помали од даден број. */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int i, n, x = 0;
	cout << "Vnesi broj ";
	cin >> n;
	cout << "Prosti broevi pomali od " << n << " se:\n";

	for (i = 1; i < n; i++) {
		int j, k = 1;
		for (j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				k = 0; // ако бројот има делител освен 1 и себе, не е прост
				break;
			}
		}
		if (k) {
			cout << i << ' ';
			x++;
		}
	}

	cout << "\n Vkupno " << x << " prosti broevi\n";
	return 0;
}