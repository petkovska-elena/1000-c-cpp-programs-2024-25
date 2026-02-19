//
// Created by Elena Petkovska on 14.8.25.
//

// LAB Ex.3 (online)

/* На влез имате NxM матрица, каде прво се вчитуваат N и М, а потоа елементите на матрицата.
 * Ваша задача е да ги испечатите дијагоналните елементи (види слика) почнувајќи од првиот ред на матрицата.
 * Видете тест примери за печатење
 * Напомена: внимавајте во случај да матрицата не е квадратна

	Input1          Input2
	3               2
	3               4
	1 2 3           1 2 3 4
	4 5 6           5 6 7 8
	7 8 9

	Output1         Output2
	1               1
	2 4             2 5
	3 5 7           3 6
					4 7 */

#include <iostream>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	int matrica[N][M];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> matrica[i][j];
		}
	}

	for (int start = 0; start < M; start++) {
		int i = 0, j = start;
		while (i < N && j >= 0) {
			cout << matrica[i][j] << " ";
			i++;
			j--;
		}
		cout << endl;
	}
	return 0;
}