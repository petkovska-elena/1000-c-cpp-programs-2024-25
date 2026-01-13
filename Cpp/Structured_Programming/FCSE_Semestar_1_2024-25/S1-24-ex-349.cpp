//
// Created by Elena Petkovska on 14.8.25.
//

// Kvalifikaciski Zadaci

/* Од стандарден влез внеси 17 цели броеви. Пресметај и испечати го збирот на парните елементи и збирот на непарните елементи. */

#include <iostream>
using namespace std;

int main() {
	int arr[17];

	for (int i = 0; i < 17; i++)
	{
		cin >> arr[i];
	}

	int suma_parni = 0;
	int suma_neparni = 0;

	for (int i = 0; i < 17; i++)
	{
		if (arr[i] % 2 == 0)
		{
			suma_parni += arr[i];
		} else
		{
			suma_neparni += arr[i];
		}
	}

	cout << "Suma parni: " << suma_parni << endl;
	cout << "Suma neparni: " << suma_neparni << endl;
	return 0;
}