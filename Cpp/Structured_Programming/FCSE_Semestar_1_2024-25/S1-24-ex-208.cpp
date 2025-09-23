//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski vezhbi 8

/* Да се напише програма која ќе провери дали дадена низа од n елементи која се чита од стандарден влез е строго растечка,
 * строго опаѓачка или ниту строго растечка ниту строго опаѓачка. Резултатот да се испечати на екран.
 */

#include <iostream>
using namespace std;

int main() {
  int n, element, a[100];
	short rastecka = 1, opagacka = 1;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] >= a[i+1])
		{
			rastecka = 0; //0 - that it's false
			break;
		}
	}

	for (int i = 0; i < n - 1; i ++)
	{
		if (a[i] <= a[i+1])
		{
			opagacka = 0; //0 - that it's false
			break;
		}
	}

	if (!opagacka && !rastecka)
	{
		cout << "Nizata ne e nitu rastecka nitu opagacka" << endl;
	} else if (opagacka)
	{
		cout << "Nizata e opagacka" << endl;
	} else if (rastecka)
	{
		cout << "Nizata e rastecka" << endl;
	}
	return 0;
}
