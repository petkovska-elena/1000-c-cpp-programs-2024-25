//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Spojuvanje / dodavanje na tekstualni nizi */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string firstName("Albert");
	string lastName("Einstein");

	string fullName = firstName + lastName;   // concatenation
	fullName += ", ";                          // append
	string title = "PhD";
	fullName += title;                         // append
	fullName += '.';                           // append a single char

	cout << firstName << " " << lastName << endl;
	cout << fullName << endl;

	return 0;
}
