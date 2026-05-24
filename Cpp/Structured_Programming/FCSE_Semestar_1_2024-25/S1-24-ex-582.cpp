//
// Created by Elena Petkovska on 14.8.25.
//

// SNIMKI - Аудиториска вежба 3: Класи во C++
// Klasi

#include <iostream>
using namespace std;

class Example
{
private:
	int a;
	int b;

public:
	// Site (najcesto metodi) koi treba da mozhat da se pristapat nadvor od klasata
	// Sekoja klasa sodrzhi konstruktori, a potoa spored konstruktorite, mozhe da kreirame objekti
	// Konstruktorot go kreirame so imeto na klasta

	// Default konstruktor
	Example() {
		a = 0;
		b = 0;
	}

	~Example() {
		cout << "Object is destroyed." << endl;;
	}

	/*
	// Konstruktor so argumenti & Default vrednosti
	Example (int _a = 0, int _b = 0) {
		a = _a;
		b = _b;
	} */

	Example (int _a, int _b) {
		cout << "Constructor with arguments is called!" << endl;
		a = _a;
		b = _b;
	}

	// get methods
	int getIntegerA() {
		return a;
	}

	int getInegerB() {
		return b;
	}

	// set methods
	void setA (int _a) {
		a = _a;
	}

	void setB (int _b) {
		b = _b;
	}

	void printValues() {
		cout << a << " " << b << endl;
	}
};

int main() {
	Example e(10, 10);
	Example e1(15, 16);
	Example e2;
	Example e3(15, 0);

	e.printValues();
	e1.printValues();
	e2.printValues();
	e3.printValues();

	cout << endl;
	e2.setA(13);
	e2.setB(16);
	e2.printValues();
	return 0;
}
