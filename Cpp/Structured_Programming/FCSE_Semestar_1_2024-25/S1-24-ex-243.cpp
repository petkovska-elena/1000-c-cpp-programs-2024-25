//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај точно 6 цели броеви. Испечати YES ако низата е симетрична, инаку NO.
 * Read exactly 6 integers. Print YES if the sequence is symmetric, else NO. */

#include <iostream>
using namespace std;

int main() {
	int niza[6];

	for (int i = 0; i < 6; i++)
	{
		cin >> niza[i];
	}

	bool symetric = false;
	if (niza[0] == niza[5] && niza[1] == niza[4] && niza[2] == niza[3])
	{
		symetric = true;
	} else symetric = false;

	if (symetric == true)
	{
		cout << "YES";
	} else { cout << "NO"; }
	return 0;
}
