//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Koverzija - primer 1 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1 = "78";
	string str2 = "3.142";
	string str3 = "31477 with non-numeric characters";

	int strInt1 = stoi(str1);
	int strInt2 = stoi(str2);
	int strInt3 = stoi(str3);

	double strDouble2 = stod(str2);

	cout << "stoi(\"" << str1 << "\") is " << strInt1 << endl;
	cout << "stoi(\"" << str2 << "\") is " << strInt2 << endl;
	cout << "stoi(\"" << str3 << "\") is " << strInt3 << endl;
	cout << "stod(\"" << str2 << "\") is " << strDouble2 << endl;

	return 0;
}
