//
// Created by Elena Petkovska on 14.8.25.
//

// Kvalifikaciski Zadaci

/* Прочитај квадратна матрица N × N. Испечати го збирот на елементите на главната дијагонала. */

#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int a[50][50], sum = 0;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++) {
			cin >> a[i][j];
			if (i == j) sum += a[i][j];
		}

	cout << sum << endl;
	return 0;
}