//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Podnizi */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string myString;
	myString = "No amount of experimentation can ever prove me right; a single experiment can prove me wrong.";

	int len = myString.length();
	cout << "Original sentence: " << myString << endl;

	int found = myString.find("; ");
	string firstPart = myString.substr(0, found);
	firstPart += ".";
	cout << "First part: " << firstPart << endl;

	string secondPart = myString.substr(found + 2);
	cout << "Second part: " << secondPart << endl;

	return 0;
}
