//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski Vezbi 10

/* Да се напише програма што ќе ја испишува вредноста на n-тиот член на низата дефинирана со:
 * x[1] = 1
 * x[2] = 2
 * ...
 * x[n] = (n - 1) * x[n - 1] / n + x[n - 2] / n
 */

#include <iostream>
using namespace std;

float xnn(int n) {
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;
	return (n - 1) * xnn (n - 1) / n + xnn (n - 2) / n;
}

int main() {
  int n;
	cin >> n;
	cout << "xnn(" << n << ") = " << xnn(n) << endl;
	return 0;
}
