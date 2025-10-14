//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 9 - Nizi Operacii

/* Изминување и пополнување на матрица  Ред по ред */

#include <iostream>
using namespace std;

int main() {
	const int MAX = 10;
	int mat[MAX][MAX];
	int n, m;

	// Читање на димензии
	cin >> n >> m;

	// (по желба) едноставна проверка на граници
	if (n < 1 || n > MAX || m < 1 || m > MAX) return 0;

	// Внес ред по ред (i = редица, j = колона)
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> mat[i][j];
		}
	}

	// Печатење на матрицата (ист редослед)
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << mat[i][j] << (j + 1 == m ? '\n' : ' ');
		}
	}
	return 0;
}