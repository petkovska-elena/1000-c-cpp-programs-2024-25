//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Static clenovi vo klasite */

#include <iostream>
using namespace std;

class ST
{
public:
	int x, y;                              // Sekoj objekt ke ima sopstveni x i y
	static int z;                          // z e edinstveno - zaednicko za site objekti
};

int ST::z = -1;                            // inicijalizacija
                                           // ST::z postoi i bez da postojat objekti od klasata

int main() {
	ST a, b;
	a.x = 1; a.y = 2;
	cout << a.x << ' ' << a.y << ' ' << a.z << endl;

	a.z = 0;
	b.x = 6; b.y = 7;
	cout << b.x << ' ' << b.y << ' ' << b.z << endl;

	return 0;
}
