//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Copy constructor, Implicit constructor */

#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
	char *cptr;

public:
	String(const char *s = "") {
		cptr = new char[strlen(s) + 1];
		strcpy(cptr, s);
	}

	~String() {
		delete[] cptr;
	}

	void Show() const { cout << cptr; }

	String(const String &from) { //copy
		cptr = new char[strlen(from.cptr) + 1];
		strcpy(cptr, from.cptr);
	}

	String &operator=(const String &);
};

String &String::operator=(const String &from) {
	if (this != &from) {
		delete[] cptr;
		cptr = new char[strlen(from.cptr) + 1];
		strcpy(cptr, from.cptr);
	}
	return *this;
}

int main() {
	const String b("World");
	String c, d("Hello");
	{
		const String a(d), *p = &d;
		a.Show(); cout << ' ';
		b.Show(); cout << endl;

		c = "HELLO"; // ke raboti!
		d = *p;

		c.Show(); cout << ' ';
		d.Show(); cout << endl;
	}

	c.Show(); cout << ' ';
	d.Show(); cout << endl;

	return 0;
}
