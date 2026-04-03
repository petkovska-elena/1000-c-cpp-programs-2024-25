//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Preoptovaruvanje operatori - Preku funkcija */

#include <iostream>
using namespace std;

class koordinata
{
private:
	float x,y;

public:
	koordinata (float xx = 0, float yy = 0):x(xx), y(yy) { }

	float zemi_x() const {return x;}
	float zemi_y() const {return y;}

	void postavi_x(float x) {this -> x = x;}
	void postavi_y(float y) {this -> y = y;}

	void pecati(){ cout << "(" << x << ", " << y << ")"; }
};

koordinata dodadi (const koordinata &a, const koordinata &b) {
	koordinata rezultat;
	rezultat.postavi_x (a.zemi_x() + b.zemi_x());
	rezultat.postavi_y (a.zemi_y() + b.zemi_y());
	return rezultat;
}

int main() {
	koordinata a(1, 1), b(2, 2);
	koordinata r = dodadi (a, b);
	r.pecati();
	return 0;
}
