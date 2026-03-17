//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Vgnezdeni Klasi */

#include <iostream>
using namespace std;

class myClass {
public:

	class NestedClass
	{
		int y;
	public:
		void sety(int a) {
			y = a;
		}
		int gety() {
			return y;
		}
	};

	void f() {
		myClass::NestedClass t;
		t.sety(x);                 // t.y is private
		nc = t;
	}

	int getx() {
		return x;
	}

private:
	int x;
	NestedClass nc;
};

int main() {
	myClass::NestedClass a;
	myClass b;
	a.sety(3);
	b.f();

	return 0;
}
