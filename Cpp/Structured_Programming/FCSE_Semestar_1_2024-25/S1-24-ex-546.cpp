//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Preoptovaruvanje += i cast operator */

#include <iostream>
using namespace std;

class String {
public:
	...
	String &operator +=(const String &from) {
		char *tmp = new char[strlen(cptr) + strlen(from.cptr) + 1];
		strcpy(tmp, cptr);
		strcat(tmp, from.cptr);
		delete [] cptr;
		cptr = tmp;
		return *this;
	}

	operator char * () const { return cptr; }
	...
};

int main() {
	String A("Hello");
	A += " world";
	cout << "Dolzinata na \"" << A << "\" e " << strlen(A) << endl;
	return 0;
}
