//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 10 - Rekurzija

/* Фибоначиева низа броеви со рекурзија */

#include <iostream>
using namespace std;

long fibonnachi(long n) {
	if (n == 1 || n == 2)
		return 1;                                      // osnoven sluchaj
	else
		return fibonnachi(n - 1) + fibonnachi(n - 2);  // rekurziven sluchaj
}

int main() {
	int n;
	cout << "Vnesi broj n: ";
	cin >> n;

	cout << "Fibonachievata niza do " << n << "-tiot clen e: ";
	for (int i = 1; i <= n; i++)
	{
		cout << fibonnachi(i) << " ";
	}
	cout << endl;

	return 0;
}