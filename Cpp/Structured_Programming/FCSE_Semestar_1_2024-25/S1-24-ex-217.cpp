//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski Vezbi 10

/* Пример за рекурзивна функција: */

#include <iostream>
using namespace std;

int factoriel (int n) {
	if (n == 1)
	{
		return 1;
	}
	return n * factoriel(n - 1);
}

int main() {
  int n;
	cin >> n;
    cout << factoriel(n);
    return 0;
}
