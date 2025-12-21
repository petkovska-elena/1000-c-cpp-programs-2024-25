//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај еден цел број N. Испечати ги цифрите на N во обратен редослед на еден ред без празни места.
 * Read an integer N. Print its digits reversed, no spaces. */

#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	while (N != 0)
	{
		cout << N % 10;
		N /= 10;
	}

	return 0;
}
