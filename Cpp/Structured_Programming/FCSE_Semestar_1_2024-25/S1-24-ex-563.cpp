//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* String view (C++ 17) */

#include <iostream>
#include <string>
#include <string_view>

using namespace std;

void printSV(std::string_view str) {
	cout << str << endl;
}

int main() {
	string_view s1 { "Hello, world!" };
	cout << s1 << endl;

	string s { "Hello, world!" };
	string_view s2 { s };                         // initialize with std::string
	cout << s2 << endl;

	string_view s3 { s2 };                           // initialize with std::string_view
	cout << s3 << endl;

	printSV("Hello, world!");                     // call with C-style string literal
	printSV(s);                                   // call with string
	printSV(s2);                                     // call with string_view

	return 0;
}
