//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Primer za ednostavna klasa */

#include <iostream>
using namespace std;

class Circle
{
public:
	double radius;
	float Area() {
		return radius * radius * 3.14;
	}
};

int main() {
	Circle c1;
	c1.radius = 5;         // Postavi radius
	double a;
	a = c1.Area();
	cout << a;             // Pecati povrshina

	return 0;
}
