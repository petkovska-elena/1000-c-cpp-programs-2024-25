//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 7 - Funkcii

/* Пример за користење на функциски прототип */

#include <iostream>
using namespace std;

// Прототип на функцијата
void print_message(void);

int main() {
	// Повик на функцијата
	print_message();
	return 0;
}

// Дефиниција на функцијата
void print_message(void) {
	cout << "Ova e funkcija narecena print_message" << endl;
}