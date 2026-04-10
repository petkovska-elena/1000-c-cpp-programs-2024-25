//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Preoptovaruvanje na operatorot [] */

#include <iostream>
using namespace std;

class String {
public:
	...
	char &operator[](int i) { return cptr[i]; }
	...
};

int main() {
	String a("Hello");
	const String b("World");
	String c, d;

	cout << a[0] << endl;   // OK
	a[0] = 'W';             // OK

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	return 0;
}