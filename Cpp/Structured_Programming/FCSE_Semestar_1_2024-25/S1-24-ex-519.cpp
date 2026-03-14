//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/*  */

#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.14159;

class Sphere
{
public:
	float r;
	float x, y, z;

	Sphere(){ /* Ne pravi nishto */ }
	Sphere(float xcrd, float ycrd, float zcrd, float rad) { /* crd = coordinate, rad = radius */
		x = xcrd;
		y = ycrd;
		z = zcrd;
		r = rad;
	}

	~Sphere() {
		cout << "Sphere (" << x << ", " << y << ", " << z << ", " << r << ") destroyed\n";
	}

	float volume() {
		return (r * r * r * 4 * PI / 3);
	}

	float surface_area() {
		return (r * r * 4 * PI);
	}
};

int main() {
	Sphere s(1.0, 2.0, 3.0, 4.0);
	Sphere t; /* Bez parametri */

	cout << "X = " << s.x << ", Y = " << s.y;
	cout << ", Z = " << s.z << ", R = " << s.r << "\n";

	t = s;

	cout << "The volume of t is " << t.volume() << "\n";
	cout << "The area of t is " << t.surface_area() << "\n";

	return 0;
}
