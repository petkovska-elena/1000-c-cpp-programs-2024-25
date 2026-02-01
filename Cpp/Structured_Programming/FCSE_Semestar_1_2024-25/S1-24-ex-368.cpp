//
// Created by Elena Petkovska on 14.8.25.
//

/* Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8).
 * Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура),
 * да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE. */

#include <iostream>
using namespace std;

bool eBlag(int broj) {
	if (broj == 0)
		return true;

	while (broj > 0)
	{
		int cifra = broj % 10;

		if (cifra % 2 != 0)
			return false;

		broj = broj / 10;
	}
	return true;
}

int main() {
	int m, n;
	cin >> m >> n;

	bool found = false;
	int result = 0;

	for (int i = m; i <= n; i++)
	{
		if (eBlag(i))
		{
			result = i;
			found = true;
			break;
		}
	}

	if (found)
		cout << result << endl;
	else
		cout << "NE" << endl;
	return 0;
}