//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Preoptovaruvanje operatori - Preku funkcija-clen */

#include <iostream>
using namespace std;

class koordinata
{
private:
	float x,y;

public:
	koordinata (float xx = 0, float yy = 0):x(xx), y(yy) { }
	koordinata dodadi(const koordinata& vtora) const;
	koordinata operator+(const koordinata& vtora) const;

	float zemi_x() const {return x;}
	float zemi_y() const {return y;}

	void postavi_x(float x) {this -> x = x;}
	void postavi_y(float y) {this -> y = y;}

	void pecati(){ cout << "(" << x << ", " << y << ")"; }
};

koordinata koordinata::dodadi(const koordinata& vtora) const {
	// Prviot lev operand e *this;
	koordinata rezultat;
	rezultat.postavi_x(this -> zemi_x() + vtora.zemi_x());
	rezultat.postavi_y(this -> zemi_y() + vtora.zemi_y());
	return rezultat;
}

// PREOPTOVARUVANJE:
koordinata koordinata::operator+ (const koordinata &vtora) const {
	// Prviot lev operand e *this;
	koordinata rezultat;
	rezultat.postavi_x(this -> zemi_x() + vtora.zemi_x());
	rezultat.postavi_y(this -> zemi_y() + vtora.zemi_y());
	return rezultat;

	//Ili samo
	return koordinata(x + vtora.x, y + vtora.y);
}

int main() {
	koordinata a(1, 1), b(2, 2);
	koordinata r = a.dodadi (b);
	r.pecati();
	return 0;
}
