//
// Created by Elena Petkovska on 14.8.25.
//

// Kvalifikaciski Zadaci

/* Matrici - Kolona so najgolem zbir */

#include <iostream>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	int a[100][100];

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];

	int bestCol = 0;
	long long bestSum = -(1LL<<60); // многу мал старт

	for (int j = 0; j < n; j++) {
		long long s = 0;
		for (int i = 0; i < m; i++) s += a[i][j];
		if (s > bestSum) {
			bestSum = s;
			bestCol = j;
		}
	}

	cout << bestCol << endl;
	return 0;
}
