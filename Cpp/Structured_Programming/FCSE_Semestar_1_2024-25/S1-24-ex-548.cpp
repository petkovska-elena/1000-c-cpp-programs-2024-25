//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Preoptovaruvanje na operatorite ++ i -- */

#include <iostream>
using namespace std;

class Par {
private:
	int a, b;

public:
	explicit Par(int x = 0) : a(x), b(x) {}
	Par(int x, int y) : a(x), b(y) {}

	int prv() const { return a; }
	int vtor() const { return b; }
	int prv(int x) { return a = x; }
	int vtor(int x) { return b = x; }

	Par operator+(const Par &x) const { return Par(a + x.a, b + x.b); }
	Par operator-(const Par &x) const { return Par(a - x.a, b - x.b); }

	Par &operator+=(const Par &x) { a += x.a; b += x.b; return *this; }
	Par &operator-=(const Par &x) { a -= x.a; b -= x.b; return *this; }

	bool operator==(const Par &x) const { return (a == x.a && b == x.b); }
	bool operator!=(const Par &x) const { return !(*this == x); }

	Par operator-() const { return Par(-a, -b); } // unaren minus

	Par &operator++() { a++; b++; return *this; }
	Par &operator--() { a--; b--; return *this; }

	Par operator++(int) { Par r(*this); a++; b++; return r; }
	Par operator--(int) { Par r(*this); a--; b--; return r; }

	friend ostream &operator<<(ostream &o, const Par &x) {
		return o << '(' << x.a << ',' << x.b << ')';
	}

	friend istream &operator>>(istream &i, Par &x) {
		return i >> x.a >> x.b;
	}
};

int main() {
	Par x(1, 2), y(3), z;

	cout << x << " " << y << " " << z << endl;

	z.prv(x.prv());
	cout << z << endl;

	cin >> y;
	z = x + y - Par(3, 1);
	z += -x;

	cout << x << z << endl;

	x = --z;
	cout << x << z << endl;

	x = z++;
	cout << x << z << endl;

	return 0;
}