//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Objekt kako argument na funkcija */

#include <iostream>
using namespace std;

class myClass
{
	int i;
public:
	myClass (int n);
	~myClass();

	myClass(const myClass &n);

	void set_i(int n) {i = n; }
	int get_i() {return i; }
};

myClass::myClass(int n) { i = n; cout << "Constructing " << i << "\n"; }
myClass::~myClass() { cout << "Destroying " << i << "\n"; }

myClass::myClass(const myClass& n) {
	i = n.i;
	cout << " Constructing + Copying " << i << "\n";
}

void f(myClass);
void f(myClass ob) {
	ob.set_i(2);

	cout << "This is local i: " << ob.get_i() << endl;
}

int main() {
	myClass x(1);
	f(x);

	cout << "This is i in main: ";
	cout << x.get_i() << endl;
	return 0;
}
