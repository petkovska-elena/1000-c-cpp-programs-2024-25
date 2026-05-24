//
// Created by Elena Petkovska on 14.8.25.
//

// SNIMKI - Аудиториска вежба 3: Класи во C++
//OBJEKTNO-ORIENTIRANO PROGRAMIRANJE
//AUDITORISKI VEZBI 2 - Klasi vo C++
/* 2.1 Triagolnik */

#include <iostream>
#include <cmath>
#include <iomanip>          // For setprecision
using namespace std;

class Triangle
{
private:
	int a, b, c;

public:
	// Constructor with arguments
	Triangle(int aa = 5, int bb = 4, int cc = 3) {
		cout << "Constructor is called." << endl;
		a = aa;
		b = bb;
		c = cc;
	}

	~Triangle() {
		cout << "Object is destroyed." << endl;
	}

	// L = a + b + c;
	int perimetar() {
		int Perimetar = a + b + c;
		return Perimetar;
	}

	// P = sqrt ( s * (s - a) * (s - b) * (s - c)
	// s = (a + b + c) / 2
	int plostina() {
		// float s = (a + b + c) / 2.0;
		// So kastiranje
		float s = float(a + b + c) / 2;
		float Plostina = sqrt(s * (s - a) * (s - b) * (s - c));
		return Plostina;
	}

	void printValues() {
		cout << "Triangle with sides: " << a << " " << b << " " << c << endl;
		cout << "Perimetar: " << perimetar() << endl;
		cout << fixed << setprecision(2) << "Plostina: " << plostina() << endl;
	}
};

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	Triangle sharp(a, b, c);
	cout << "Perimetar: " << sharp.perimetar() << endl;
	cout << "Plostina: " << sharp.plostina() << endl;

	return 0;
}
