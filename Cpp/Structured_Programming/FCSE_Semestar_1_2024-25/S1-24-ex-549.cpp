//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Eksplicitno predefinirana / Izbrishana funkcija */

#include <iostream>
using namespace std;

class Foo
{
public:
	Foo() = delete;

	Foo(int _x, double _y, bool _b, Foo* _p)
		: x(_x), y(_y), b(_b), p(_p) { }

	Foo(const Foo& f) = default;

	void f(const Foo& q)
	{
		Foo local(q);   // can call copy constructor
		Foo tmp;        // Error: attempting to reference a deleted function
		tmp.x = local.x;
	}

	// ...
};

int main()
{
	Foo v(12, 3.45, false, NULL);
	Foo w(v);   // calling the default copy constructor
	Foo u;      // cannot construct object: private constructor is inaccessible

	v.print();  // will print (12, 3.45, 0, 0000000000000000)
	w.print();  // will print (12, 3.45, 0, 0000000000000000)

	return 0;
}
