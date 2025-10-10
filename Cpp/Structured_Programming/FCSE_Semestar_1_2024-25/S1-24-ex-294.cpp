//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 7 - Funkcii

/* Пример – глобални променливи */

#include <iostream>
using namespace std;

int add_numbers(void);   // прототип на функцијата
int value1, value2, value3; // глобални променливи

int add_numbers(void) {
	int result;
	result = value1 + value2 + value3;
	return result;
}

int main() {
	int result;
	value1 = 10;
	value2 = 20;
	value3 = 30;

	result = add_numbers();
	cout << value1 << " + " << value2 << " + " << value3 << " = " << result;

	return 0;
}