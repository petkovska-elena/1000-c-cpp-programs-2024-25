//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај еден цел број N. Испечати ги сите Фибоначи броеви помали или еднакви на N во еден ред со празни места.
 * Read N. Print all Fibonacci numbers less than or equal to N on one line. */

#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int a = 0, b = 1;
	while (a<=N)
	{
		cout << a << " ";
		int next = a + b;
		a = b;
		b = next;
	}

	return 0;
}