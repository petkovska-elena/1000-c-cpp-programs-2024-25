//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci Juni 2025
// Smart people sometimes know to be very stupid.

/* Од стандарден влез се внесуваат 9 броеви. да се испечатат сите кои се различни од 0 притоа запазувајки го ресдоследот */

#include <iostream>
using namespace std;

int main() {
	int x;

	for (int i = 0; i <= 9; i++)
	{
		cin >> x;
		if (x != 0)
		{
			cout << x << " ";
		}
	}
	return 0;
}