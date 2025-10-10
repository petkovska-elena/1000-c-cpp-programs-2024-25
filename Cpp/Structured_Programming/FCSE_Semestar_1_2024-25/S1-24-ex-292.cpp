//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 7 - Funkcii

/* Да се состави програма со inline функција max која прима два целобројни параметри и враќа кој од нив е поголем.
 * Програмата да ја илустрира работата на inline функциите преку вметнување на телото на функцијата на местото на повикот. */

// Program: Inline функции – максимум од два броја
#include <iostream>
using namespace std;

inline int max(int a, int b) {
	if (a > b)
		return a;
	return b;
}

int main() {
	int i, x = 23, y = 45;

	i = max(x++, y++);

	cout << "x= " << x << " y= " << y
		 << " max(x++,y++)= " << i << endl;
	cout << "x= " << x << " y= " << y << endl;

	return 0;
}