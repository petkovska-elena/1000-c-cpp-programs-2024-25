//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Iskluchoci vo funkcii */

#include <iostream>
using namespace std;

class Exception1 {};
class Exception2 {};
class Exception3 {};
class Exception4 {};

void f(int i) {
	try {
		switch (i) {
		case 1: throw Exception1();
		case 2: throw Exception2();
		case 3: throw Exception3();
		case -1: throw Exception4();
		}
		cout << i << endl;
	}
	catch (Exception1) {
		cout << "Exception in f(" << i << ") of type 1" << endl;
		// throw;
	}
	catch (Exception2) {
		cout << "Exception in f(" << i << ") of type 2" << endl;
	}
	catch (Exception3) {
		cout << "Exception in f(" << i << ") of type 3" << endl;
	}
}

void main()
{
	int i;
	cin >> i;
	try {
		f(i);
	}
	catch (Exception1) {
		cout << "Exception of type 1" << endl;
	}
	catch (...) {
		cout << "Exception of unknown type" << endl;
	}
	cout << "END" << endl;
}
