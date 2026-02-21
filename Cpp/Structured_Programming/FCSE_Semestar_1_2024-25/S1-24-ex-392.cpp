//
// Created by Elena Petkovska on 14.8.25.
//

// Zadaci za Vtor Kolokvium 2026
// Zadaca 1

#include <iostream>
using namespace std;

int oddDigits(int x) {
	if (x == 0) return 1;
	if ((x % 10) % 2 == 0) return 0;
	return oddDigits(x / 10);
}

int main() {
	int n, a[1000];
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	int first = -1, last = -1, found = 0;

	for (int i = n - 1; i >= 0; i--) {
		if (oddDigits(a[i])) {
			cout << a[i] << " ";
			found = 1;
		}
	}

	if (!found) {
		cout << "None";
		return 0;
	}

	cout << endl;

	for (int i = 0; i < n; i++) {
		if (oddDigits(a[i])) {
			if (first == -1) first = i + 1;
			last = i + 1;
		}
	}

	cout << first << "," << last;
	return 0;
}

