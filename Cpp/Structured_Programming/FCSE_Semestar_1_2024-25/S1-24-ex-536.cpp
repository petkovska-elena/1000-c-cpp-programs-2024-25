//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Funkcii koi vrakjaat this* */

#include <iostream>
using namespace std;

class Calc
{
	double val;
public:
	Calc(double x):val(x){ }

	double getVal1() {return val; }

	void Add(const Calc &t) { val += t.val; }
	void Sub(const Calc &t) { val -= t.val; }
	void Mul(const Calc &t) { val *= t.val; }
};

int main() {
	Calc A(1.2), B(3.45), C(6.78);

	A.Add(B);
	A.Mul(C);
	A.Sub(Calc(8.7));

	cout << "A = " << A.getVal1() << endl;
	return 0;
}
