//
// Created by Elena Petkovska on 14.8.25.
//

// Ispit Januari, Zadaca 2

/* Да се напише програма која за дадена матрица со големина m × n и дадена позиција (row, col)
 * ќе ја пресмета сумата на сите елементи во најголемиот можен ромб (дијамант) кој е центриран во тој елемент.
 * Ромбoт се шири од централниот елемент (row, col) кон горе-лево и долу-десно, сè додека не излезе надвор од матрицата.
 * На крај, да се испечати сумата на сите елементи кои се дел од ромбот. */

#include <iostream>
using namespace std;

int main() {
	int m, n, sum = 0;
	cin >> m >> n;
	int matrix[m][n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}

	int row, col;
	cin >> row >> col;
	int r1 = row, c1 = col, r2 = row, c2 = col, position = 0;
	while(r1 > 0 && c1 > 0 && r2 < m-1 && c2 < n-1) {
		r1--;
		c1--;
		r2++;
		c2++;
		position++;
	}

	int counter = 0;
	for(int i = row; i >= row - position; i--) {
		for(int j = (col - position) + counter; j <= (col + position) - counter; j++) {
			sum += matrix[i][j];
		}
		counter++;
	}

	counter = 1;
	for(int i = row+1; i <= row + position; i++) {
		for(int j = (col - position) + counter; j <= (col + position) - counter; j++) {
			sum += matrix[i][j];
		}
		counter++;
	}
	cout << "Sum is " << sum;
	return 0;
}