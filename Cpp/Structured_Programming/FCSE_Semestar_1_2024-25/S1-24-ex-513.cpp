//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Primer za upotreba na strukturi */

#include <iostream>
using namespace std;

typedef struct Point
{
	float x;
	float y;
} tocka;

typedef struct Rect
{
	tocka pt1;
	tocka pt2;
} pravoagolnik;

tocka centar (pravoagolnik p) {
	tocka c;
	c.x = (p.pt1.x + p.pt2.x) / 2;
	c.y = (p.pt1.y + p.pt2.y) / 2;
	return c;
}

float povrshina (pravoagolnik r) {
	return ((r.pt2.x - r.pt1.x) * (r.pt2.y - r.pt1.y));
}

int main() {
	tocka pt, sredina;
	pravoagolnik prozor;

	pravoagolnik ekran = {{2,3}, {4,5}};
	pt.x = pt.y = 0;
	prozor.pt1 = pt;
	prozor.pt2.x = 5;
	prozor.pt2.y = 3;
	sredina = centar(ekran);

	cout << "Centar na pravoagolnikot (" << ekran.pt1.x << ", " << ekran.pt1.y << ") : ("
		                                 << ekran.pt2.x << ", " << ekran.pt2.y << ") e vo tockata ("
	                                     << sredina.x << ", " << sredina.y << ") " << endl;

	cout << "Povrshinata na pravoagolnikot (" << prozor.pt1.x << ", " << prozor.pt1.y << ") : ("
	                                          << prozor.pt2.x << ", " << prozor.pt2.y << ") iznesuva "
											  << povrshina(prozor);

	return 0;
}
