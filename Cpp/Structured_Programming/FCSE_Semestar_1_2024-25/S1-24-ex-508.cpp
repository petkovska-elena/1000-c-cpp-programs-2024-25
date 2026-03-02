//
// Created by Elena Petkovska on 14.8.25.
//

// SNIMKI - Аудиториска вежба 2: Структури во C++
// Referenci

#include <iostream>
using namespace std;

void swapNumbers (int & a, int & b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a = 10;
	int b = 7;
	swapNumbers(a,b);
	cout << a << " " << b << endl;

	int x = 10;
	int & xRef = x; // xRef ja referencira promenlivata x

	xRef++;
	cout << x;
}
