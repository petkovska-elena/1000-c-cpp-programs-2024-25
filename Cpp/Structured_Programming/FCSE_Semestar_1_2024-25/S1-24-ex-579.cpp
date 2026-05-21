//
// Created by Elena Petkovska on 14.8.25.
//

// Klasi i Objekti
/*
Да се дефинира класа Krug, во која се чуваат информации за:
- радиус float
- бројот π const float.

Во класата да се реализираат:
- default конструктор и конструктор со аргументи
- метод за пресметување плоштина
- метод за пресметување периметар
- метод кој кажува дали плоштината и периметарот на даден круг се еднакви

Тест примери:
Влез:              Излез:
15                 94.2 -> периметар
                   706.5 -> плоштина
                   0

Влез:              Излез:
2                  12.56 -> периметар
                   12.56 -> плоштина
                   1
*/

// PERIMETAR: 2 * r * PI
// PLOSTINA: r * r * PI

#include <iostream>
#include <cstring>
using namespace std;

class Krug
{
private:
	float radius;
	const float PI = 3.1415;

public:
	Krug() { }

	Krug(float radius) {
		this->radius = radius;
	}

	~Krug() { }

	//TODO: Make getter and setter methods for radius
	float getRadius() {
		return radius;
	}

	void setRadius(float radius) {
		this->radius = radius;
	}

	// PERIMETAR: 2 * r * PI
	float perimetar() {
		float L = 2 * radius * PI;
		return L;
	}

	float plostina() {
		float P = radius * radius * PI;
		return P;
	}

	bool seEdnakvi() {
		return perimetar() == plostina();
	}
};

int main() {
	float radius;
	cin >> radius;

	Krug krug(radius);

	// Instanciranje objekt
	Krug krug1;
	krug1.setRadius(radius);

	cout << krug.perimetar() << endl;
	cout << krug.plostina() << endl;
	cout << krug.seEdnakvi();
	return 0;
}
