//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 10 - Rekurzija

/* Фибоначиева низа броеви со рекурзија */

#include <iostream>
using namespace std;

long fibonachi(long n) {
	if (n == 1 || n == 2)
		return 1;   // основен случај
	else
		return fibonachi(n - 1) + fibonachi(n - 2); // рекурзивен случај
}

int main() {
	int n;
	cout << "Vnesi broj n: ";
	cin >> n;

	cout << "Fibonachievata niza do " << n << "-tiot clen e: ";
	for (int i = 1; i <= n; i++) {
		cout << fibonachi(i) << " ";
	}
	cout << endl;

	return 0;
}