//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 7 - Funkcii

/* Пример за преоптоварување на функции */

#include <iostream>
using namespace std;

void show(int val) {
	cout << "Integer: " << val << endl;
}

void show(double val) {
	cout << "Double: " << val << endl;
}

int main() {
	show(12);        // повикува верзијата за int
	show(3.1415);    // повикува верзијата за double
	return 0;
}