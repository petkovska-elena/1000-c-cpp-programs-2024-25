//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Dodeluvanje Objekti */

#include <iostream>
using namespace std;

class Y
{
	int a;
	double b;

public:
	int geta() {return a; }
	double getb() {return b; }

	void seta(int x) {a = x; }
	void setb (double y) {b = y; }
};

int main() {
	Y obj1, obj2;
	obj1.seta(1);
	obj1.setb(2.34);

	cout << "obj1 = (" << obj1.geta() << ", " << obj1.getb() << ")" << endl;
	obj2 = obj1;

	cout << "obj2 = ( " << obj2.geta() << ", " << obj2.getb() << ")" << endl;
	return 0;
}
