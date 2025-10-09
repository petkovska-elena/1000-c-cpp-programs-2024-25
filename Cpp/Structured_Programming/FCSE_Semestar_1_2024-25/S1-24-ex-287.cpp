//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 7 - Funkcii

#include <iostream>
using namespace std;

float triangle(float width, float height) {
	float area;
	area = width * height / 2.0;  // формула за плоштина на триаголник
	return area;
}

int main() {
	float size;

	cout << "Triangle #1 " << triangle(1.3, 8.3) << endl;
	cout << "Triangle #2 " << triangle(4.8, 9.8) << endl;
	cout << "Triangle #3 " << triangle(1.2, 2.0) << endl;

	return 0;
}