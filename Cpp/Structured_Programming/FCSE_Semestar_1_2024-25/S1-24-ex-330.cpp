//
// Created by Elena Petkovska on 14.8.25.
//

// Внесување на текстуални низи — примери

#include <iostream>
using namespace std;

int main() {
	// Neka se dadeni deklaraciite
	const int len = 10;
	char s[len];

	// Primeri so cin.getline
	// cin.getline(s, len);
	// cin.getline(s, len, '\n';

	// Primer programa
	const int MAX = 20;
	char name[MAX], day[MAX];

	cout << "Enter your name: " << endl;
	cin.getline(name, MAX);

	cout << "Enter your favourite day of the week: " << endl;
	cin.getline(day, MAX);

	cout << name << ", your favourite day is " << day << "." << endl;

	return 0;
}