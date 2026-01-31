//
// Created by Elena Petkovska on 14.8.25.
//

/* Збир на цифри на број */

#include <iostream>
using namespace std;

int zbirCifri(int n) {
	if (n < 10)
		return n;
	else
		return n % 10 + zbirCifri(n / 10);
}

int main() {
	int n;
	cout << "Vnesi broj: ";
	cin >> n;

	cout << "Zbir na cifri: " << zbirCifri(n) << endl;
	return 0;
}