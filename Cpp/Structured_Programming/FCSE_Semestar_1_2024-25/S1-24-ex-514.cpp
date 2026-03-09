//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Upotreba na strukturi so funkcii clenki */

#include <iostream>
using namespace std;

typedef struct Point
{
	float x, y;
	void pecati (void);
} tocka;

typedef struct Rect
{
	tocka pt1, pt2;
	float povrshina (void);
	tocka centar (void);
	void pecati (void);
} pravoagolnik;

void tocka::pecati (void) { cout << "( " << x << ", " << y << ") "; }

void pravoagolnik::pecati (void) {
	pt1.pecati();
	cout << ": ";
	pt2.pecati();
}

tocka pravoagolnik::centar(void) {
	tocka c;
	c.x = (pt1.x + pt2.x) / 2;
	c.y = (pt1.y + pt2.y) / 2;
	return c;
}

float pravoagolnik::povrshina(void) {
	return ((pt2.x - pt1.x) * (pt2.y - pt1.y));
}

int main() {
	tocka pt, sredina;
	pravoagolnik prozor;
	pravoagolnik ekran = {{2,3}, {4,5}};
	pt.x = pt.y = 0;
	prozor.pt1 = pt;
	prozor.pt2.x = 5;
	prozor.pt2.y = 3;
	sredina = ekran.centar();

	cout << "Centar na pravoagolnikot ";
	ekran.pecati();
	cout << ("e vo tockata ");
	sredina.pecati();
	cout << endl;

	cout << "Povrshina na pravoagolnikot ";
	prozor.pecati;
	cout << "e " << prozor.povrshina();

	return 0;
}
