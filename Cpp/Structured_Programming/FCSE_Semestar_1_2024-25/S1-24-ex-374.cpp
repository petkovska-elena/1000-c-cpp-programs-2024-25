//
// Created by Elena Petkovska on 14.8.25.
//

//Od standarden vlez se vnesuvaat 17 clenovi na niza, sumiraj gi parnite i neparnite clenovi

#include <iostream>
using namespace std;

int main() {
	int a[100];

	for (int i = 0; i < 17; i++)
	{
		cin >> a[i];
	}

	int sumParni = 0, sumNeparni = 0;

	for (int i = 0; i < 17; i++)
	{
		if (a[i] % 2 == 0)
		{
			sumParni += a[i];
		} else
		{
			sumNeparni += a[i];
		}
	}

	cout << "Suma parni: " << sumParni << endl;
	cout << "Suma neparni: " << sumNeparni << endl;
	return 0;
}