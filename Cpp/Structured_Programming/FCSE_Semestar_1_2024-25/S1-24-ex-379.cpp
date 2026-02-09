//
// Created by Elena Petkovska on 14.8.25.
//

#include <iostream>
using namespace std;

void sort(int *x, int *y, int *z) {
	if (*x < *y) { swap (*x, *y); }

	if (*x < *z) { swap (*x, *z); }

	if (*y < *z) { swap (*y, *z); }
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	sort (&a, &b, &c);

	cout << a << " " << b << " " << c << endl;
	return 0;
}