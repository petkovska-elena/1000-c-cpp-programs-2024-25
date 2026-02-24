//
// Created by Elena Petkovska on 14.8.25.
//

//OBJEKTNO-ORIENTIRANO PROGRAMIRANJE
//AUDITORISKI VEZBI 1 - Strukturi vo C++
/* 1.3 Complex Numbers */

#include <iostream>
#include <cmath>
using namespace std;

struct ComplexNumber
{
	float real;
	float imaginary;

	ComplexNumber add(ComplexNumber other) {
		return {real + other.real, imaginary + other.imaginary};
	}

	ComplexNumber substract(ComplexNumber other) {
		return {real - other.real, imaginary - other.imaginary};
	}

	ComplexNumber multiply(ComplexNumber other) {
		return {real * other.real - imaginary * other.imaginary,
					real * other.imaginary + imaginary * other.real
		};
	}

	void print() {
		cout << real;
		if (imaginary >= 0){ cout << " + ";}
		cout << imaginary << " i " << endl;
	}
};

void read (ComplexNumber &cn) {
	cin >> cn.real >> cn.imaginary;
}

int main() {
	ComplexNumber a, b, c;
	read(a);
	read(b);
	a.print();
	b.print();

	cout << "a + b" << endl;
	c = a.add(b);
	c.print();

	cout << "a - b" << endl;
	a.substract(b).print();

	cout << "a * b" << endl;
	a.multiply(b).print();
	return 0;
}
