//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Funkcii shto vrakjaat objekti */

#include <iostream>
using namespace std;

class myClass
{
	int i;
public:
	void set_i(int n) { i = n; }
	int get_i() { return i; }
};

// Funkcijata vrakja objekt od klasa myclass
myClass f();
myClass f() {myClass x; x.set_i(1); return x; }

int main() {
	myClass o;
	o = f();
	cout << o.get_i() << "\n";

	return 0;
}
