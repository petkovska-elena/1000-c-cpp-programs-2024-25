//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Vgnezdeni Klasi */

#include <iostream>
using namespace std;

class myClass
{
public:
	myClass(){ cout << "Constructing myClass\n"; }
	~myClass(){ cout << "Destructing myClass\n"; }

	class NestedClass
	{
		int y;
		NestedClass(){ cout << "Constructing NestedClass\n"}
		~NestedClass(){ cout << "Destructing NestedClass\n"}

		void sety(int a) {y = a;}
		int gety(){ return y;}
	};

	void setx(int a) { x = a; }
	void setnc(int c) {nc.sety(c);}

	int getx() {return x;}
	int getnc() {return nc.gety();}

private:
	int x;
	NestedClass nc;
};

int main() {
	myClass::NestedClass a;
	myClass b;

	a.sety(3);
	cout << "y od objektot a " << a.gety() << "\n";
	b.setx(8);
	b.setnc(2);

	cout << "x od objektot b " << b.getx() << "\n";
	cout << "nc od objektot b " << b.getnc() << "\n";

	return 0;
}