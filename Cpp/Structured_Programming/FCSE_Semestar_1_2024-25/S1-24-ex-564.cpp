//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Prepokrivanje na funkcii - primer 1 */

#include <iostream>
using namespace std;

class BC {
public:
	void g(int)      { cout << "BC::g()" << endl; }
	void h(double)   { cout << "BC::h()" << endl; }
};

class DC : public BC {
public:
	void g(int)      { cout << "DC::g()" << endl; }
	void h(char[])   { cout << "DC::h()" << endl; }
};

int main() {
	DC d;
	d.h("Boffo!");

	d.BC::h(707.7);
	d.g(3);
	d.BC::g(4);
	return 0;
}
