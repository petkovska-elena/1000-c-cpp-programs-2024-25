//
// Created by Elena Petkovska on 14.8.25.
//

// Kvalifikaciski Zadaci

/* Прочитај еден број N. Испечати ги сите негови делители што имаат точно 4 цифри. */

#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 1000; i <= 9999; i++)
	{
		if (N % i == 0)
		{
			cout << i << " ";
		}
	}

	return 0;
}
