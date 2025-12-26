//
// Created by Elena Petkovska on 14.8.25.
//

// Внесување на комбинација од нумерички и текстуални податоци

#include <iostream>
using namespace std;

int main() {
	const int MAX = 20;
	char name[MAX];
	int year;

	cout << "What is your birth year?" << endl;
	cin >> year;
	cin.get(); //go chita noviot red \n po vnesot na brojot

	cout << "What is your name?" << endl;
	cin.get(name, MAX);

	cout << "Year of birth: " << year << endl;
	cout << "Name: " << name << endl;

	return 0;
}