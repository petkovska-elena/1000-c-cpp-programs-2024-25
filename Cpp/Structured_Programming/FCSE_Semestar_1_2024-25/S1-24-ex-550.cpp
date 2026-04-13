//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Izbrishani funkcii / operatori (C++ 11) */

#include <iostream>
using namespace std;

class A {
public:
	A(int x) : m(x) {}

	A& operator=(const A&) = delete;   // Declare the copy assignment operator as a deleted function.
	A(const A&) = delete;              // Declare the copy constructor as a deleted function.

private:
	int m;
};

int main() {
	A a1(1), a2(2), a3(3);

	a1 = a2;        // Error, the usage of the copy assignment operator is disabled.
	a3 = A(a2);     // Error, the usage of the copy constructor is disabled.
}
