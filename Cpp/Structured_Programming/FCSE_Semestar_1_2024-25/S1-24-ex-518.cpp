//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Klasi – Date Primer */

#include <iostream>
#include <iomanip>
using namespace std;

class Date
{
	int d, m, y;
public:
	Date (int y = 1900, int m = 1, int d = 1);     // Konstruktor

	void printUS{
		cout << setw(2) << setfill('0') << m << "/";
		cout << setw(2) << setfill('0') << d << "/" << y << endl;
 	}

	void printEU {
		cout << setw(2) << setfill('0') << d << ".";
		cout << setw(2) << setfill('0') << m << " " << y << endl;;
	}
};

// The scope operator :: is used when defining a class method outside the class body
Date::date (int yr, int mn, int dy) {
	if (dy <= 0 || dy > 31)
	{
		d = 1;
		cerr << "error d " << dy << endl;
	} else d = dy;

	if (mn <= 0 || mn > 12)
	{
		m = 1;
		cerr << "error m " << mn << endl;
	} else m = mn;

	y = yr;
}

int main() {
	Date birthday (1950, 12, 30);
	Date anniversary (1992, 4, 6);

	birthday.printUS();
	birthday.printEU();
	anniversary.printUS();
	anniversary.printEU();

	Date d1, d2(2014),
		 d3 (2012, 6),
	     d4 (1997, 10, 26),
	     d5 (2004, 17, 39);

	d1.printEU();
	d2.printEU();
	d3.printEU();
	d4.printEU();
	d5.printEU();

	return 0;
}
