//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* mutable (caching example) */

#include <iostream>
using namespace std;

class Fibonacci
{
private:                  // MRU cache
	mutable int n;
	mutable double fp;
	int df;
	long int fib(int c) const {
		if (c == 0 || c == 1) return 1;
		return fib (c - 1) + fib(c - 2);
	}

public:
	Fibonacci(int d): n(0), fp(fib(d)), df(d) {}
	double fib_p(int i) const {
		if (i != n)
		{
			fp = (double) fib (i+df) / fib (n = i);
			return fp;
		}
	}
};

int main() {
	const Fibonacci F(3);

	cout << "fib(5)= " << F.fib_p(5) << endl;
	cout << "fib(35)= " << F.fib_p(35) << endl;
	cout << "fib(34)= " << F.fib_p(5) << endl;

	return 0;
}
