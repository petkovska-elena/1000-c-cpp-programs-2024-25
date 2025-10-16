//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 10 - Rekurzija

/* Да се пресмета рекурзивно m^n, 𝑛 ∈ ℕ */

#include <iostream>
using namespace std;

// Рекурзивна функција за степенување
int power(int m, int n) {
	if (n == 0)
		return 1;          // основен случај
	else
		return m * power(m, n - 1); // рекурзивен случај
}

int main() {
	int m, n;
	cout << "Vnesi m i n: ";
	cin >> m >> n;

	cout << m << "^" << n << " = " << power(m, n) << endl;
	return 0;
}