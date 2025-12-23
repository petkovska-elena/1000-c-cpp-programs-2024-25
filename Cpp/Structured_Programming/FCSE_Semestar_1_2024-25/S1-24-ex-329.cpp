//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 11 - Pokazhuvaci
// Внесување на текстуални низи - примери

#include <iostream>
using namespace std;

int main() {
	const int MAX = 12;
	char name[MAX];
	char day[MAX];

	cout << "Enter your name: ";
	cin >> name;

	cout << "Enter your favourite day of the week: ";
	cin >> day;

	cout << name << ", your favourite day is " << day << "." << endl;

	return 0;
}