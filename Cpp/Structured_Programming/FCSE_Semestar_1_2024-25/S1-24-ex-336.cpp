//
// Created by Elena Petkovska on 14.8.25.
//

// Kvalifikaciski Zadaci

/* Прочитај еден број N. Испечати ги сите негови делители што имаат точно 4 цифри. */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 1; i <= sqrt(N); i++) {
		if (N % i == 0) {
			int d1 = i;
			int d2 = N / i;

			// Проверка дали имаат точно 4 цифри
			if (d1 >= 1000 && d1 <= 9999)
				cout << d1 << " ";
			if (d2 >= 1000 && d2 <= 9999 && d1 != d2) // за да не испечати ист број двапати
				cout << d2 << " ";
		}
	}

	return 0;
}
