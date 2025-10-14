//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 9 - Nizi Operacii

/* Изминување и пополнување на матрица  Колона по колона */

#include <iostream>
using namespace std;

int main() {
	const int MAX = 10;   // Максимална големина на матрицата
	int mat[MAX][MAX];    // Декларација на матрица
	int n, m;             // n - број на редици, m - број на колони

	// Читање на димензии
	cout << "Vnesi dimenzii na matricata (n m): ";
	cin >> n >> m;

	// Читање на матрица колона по колона
	// Забележи дека индексите се обратни: прво оди по колони (i), па по редици (j)
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "mat[" << j << "][" << i << "] = ";
			cin >> mat[j][i];
		}
	}

	// Печатење на матрицата (ред по ред за полесно гледање)
	cout << "\nVnesenata matrica e: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}