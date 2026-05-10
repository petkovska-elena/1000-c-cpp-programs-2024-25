//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Cisto virtuelni funkcii - Apstraktni klasi */

#include <iostream>
using namespace std;

class Shape { // Апстрактна класа
public:
	virtual void Draw() const = 0; // чисто виртуелна функција
	virtual ~Shape() { }
};

class Circle : public Shape {
public:
	Circle(float _x, float _y, float _r) : x(_x), y(_y), r(_r) { }
	void Draw() const
	{
		cout << "Drawing Circle (" << x << "," << y << "," << r << ")" << endl;
	}
private:
	float x, y, r;
};

class Rectangle : public Shape {
public:
	Rectangle(float _x, float _y, float _w, float _h) : x(_x), y(_y), w(_w), h(_h) { }
	void Draw() const
	{
		cout << "Drawing Rectangle (" << x << "," << y << "," << w << "," << h << ")" << endl;
	}
private:
	float x, y, w, h;
};

int main()
{
	Shape *p;
	Shape *s1[] = {
		new Circle(1,2,3),
		new Rectangle(2,3,4,5),
		new Circle(0,0,1),
		0
	};

	int i = 0;
	while (p = s1[i++])
		p->Draw();

	for (int i = 0; s1[i]; delete s1[i++]);

	return 0;
}