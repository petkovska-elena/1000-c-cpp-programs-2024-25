//
// Created by Elena Petkovska on 14.8.25.
//

// Kvalifikaciski Zadaci

/* Прочитај еден број N. Провери дали бројот е палиндром (дали исто се чита од лево кон десно и од десно кон лево). Испечати YES или NO. */

#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int original = N;
	int reversed = 0;

	while (N > 0)
	{
		int digit = N % 10;
		reversed = reversed * 10 + digit;
		N /= 10;
	}

	if (original == reversed)
	{
		cout << "YES" << endl;
	} else
	{
		cout << "NO" << endl;
	}
	return 0;
}
