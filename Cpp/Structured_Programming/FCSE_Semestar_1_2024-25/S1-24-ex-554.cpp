//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Sporedba so koristenje na relaciski operatori - primer 2 */

#include <iostream>
#include <string>

using namespace std;

int main() {
	string first;
	string second;

	cout << "Enter the first string:\n";
	cin >> first;

	cout << "Enter the second string :\n";
	cin >> second;

	if (first != second)
		cout << "Strings are not equal" << endl;
	else
		cout << "Strings are equal" << endl;

	return 0;
}
