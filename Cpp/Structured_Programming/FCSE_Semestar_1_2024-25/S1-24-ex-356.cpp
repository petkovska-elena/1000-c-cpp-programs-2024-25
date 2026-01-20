//
// Created by Elena Petkovska on 14.8.25.
//

// Kvalifikaciski Zadaci

/* Фибоначи низа - Rekurzija */

#include <iostream>
using namespace std;

long fib(int n) {
	if (n == 1 || n == 2) return 1; // основни случаи
	return fib(n-1) + fib(n-2);     // рекурзивен случај
}

int main() {
	int n;
	cout << "Vnesi n: ";
	cin >> n;
	cout << "Fibonacci(" << n << ") = " << fib(n) << endl;
	return 0;
}