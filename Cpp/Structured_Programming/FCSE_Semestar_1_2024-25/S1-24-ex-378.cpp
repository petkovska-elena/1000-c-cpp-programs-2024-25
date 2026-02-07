//
// Created by Elena Petkovska on 14.8.25.
//

#include <iostream>
#include <cstring>
using namespace std;

void Transform(int number) {
	int nizaParni[100];
	int nizaNeparni[100];

	int temp = number;
	int counterParni = 0;
	int counterNeparni = 0;
	int sum = 0;

	while (temp != 0)
	{
		int cifra = temp % 10;

		if (cifra % 2 == 0)
		{
			nizaParni[counterParni] = cifra;
			counterParni++;
		} else
		{
			nizaNeparni[counterNeparni] = cifra;
			counterNeparni++;
			sum += cifra; // gi sobirame samo neparnite cifri
		}
		temp /= 10; // ja brishe poslednata cifra
	}

	cout << "Digits: ";
	for (int i = counterParni - 1; i >= 0; i--)
	{
		cout << nizaParni[i] << " ";
	}

	cout << endl;
	cout << "Sum: " << sum << endl;
}

int main() {
	int n;

	// Vnesuvanjeto zavrshuva koga nema da mozhe da se prochita broj (na pr. "test")
	while (cin >> n)
	{
		Transform(n);
	}
	return 0;
}