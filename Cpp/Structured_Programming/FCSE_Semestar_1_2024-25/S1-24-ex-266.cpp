//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај N со 1 ≤ N ≤ 10. Испечати квадратна матрица N×N пополнета со броеви 1 до N² по редици.
 * Read N and print an N×N matrix filled row by row with 1 to N². */

#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int num = 1; // start filling from 1

	for (int i = 0; i < N; i++) {       // loop over rows
		for (int j = 0; j < N; j++) {   // loop over columns
			cout << num << " ";
			num++; // increase the number
		}
		cout << endl; // new line after each row
	}

	return 0;
}
