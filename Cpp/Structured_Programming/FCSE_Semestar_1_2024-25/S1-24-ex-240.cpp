//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај еден цел број N. Испечати ја сумата 1+2+…+N.
Read N and print 1+2+…+N. */

#include <iostream>
using namespace std;

int main() {
	int N, sum = 0;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		sum += i;
	}

	cout << sum << endl;
	return 0;
}
