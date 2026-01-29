//
// Created by Elena Petkovska on 14.8.25.
//

/* Печатење ѕвезди (рекурзивно) */

#include <iostream>
using namespace std;

void stars(int n) {
	if (n > 0)
	{
		cout << '*';
		stars(n - 1);
 	} else
 	{
 		cout << endl;
 	}
}

int main() {
	int n;
	cout << "Vnesi broj: ";
	cin >> n;

	stars(n);
	return 0;
}
