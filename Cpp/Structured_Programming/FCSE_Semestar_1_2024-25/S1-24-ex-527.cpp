//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* mutable */

#include <iostream>
#include <cstring>
using namespace std;

class Z
{
	int i;
	mutable int j;

public:
	Z(): i(0), j(0){}
	void f() const;
	void Show() const { cout << i << ' ' << j << endl; }
};

void Z::f() const {
	// i++  // Greshka! f() e konstantna funkcija clen
	   j++; // OK. j e mutable
}

void main() {
	const Z zz;
	zz.Show();
	zz.f();
	zz.Show();
}
