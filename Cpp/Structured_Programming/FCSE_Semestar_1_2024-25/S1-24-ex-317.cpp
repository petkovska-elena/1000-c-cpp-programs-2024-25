//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 9 - Nizi Operacii

/* Tриаголни матрици */

#include <iostream>
using namespace std;

int main() {
	const int MAX = 100;
	int n, a[MAX][MAX];

	cin >> n;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			cin >> a[i][j];

	// Над главна дијагонала -> 0
	for (int i = 0; i < n; ++i)
		for (int j = i + 1; j < n; ++j)
			a[i][j] = 0;

	// Печатење
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) cout << a[i][j] << " ";
		cout << "\n";
	}
	return 0;
}