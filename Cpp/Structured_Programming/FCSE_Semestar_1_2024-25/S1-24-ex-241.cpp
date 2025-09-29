//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај еден цел број N со 1 ≤ N ≤ 12. Испечати N!.
 * Read N with 1 ≤ N ≤ 12. Print N factorial. */

/* N! = 1 * 2 * 3 * 4 * 5 * 6 * ... * N */

#include <iostream>
using namespace std;

int main() {
    int N;
	cin >> N;
	long long factorial = 1;

	for (int i = 1; i <= N; i++)
	{
		factorial *= i;
	}

	cout << factorial << endl;
	return 0;
}