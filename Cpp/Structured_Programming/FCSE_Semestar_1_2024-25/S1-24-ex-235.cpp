//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај точно 10 цели броеви. Испечати го производот на сите позитивни броеви,
 * а потоа збирот на сите негативни броеви, на два реда.
 * Read exactly 10 integers. Print the product of positives, then on the next line the sum of negatives. */

#include <iostream>
using namespace std;

int main() {
  int a[10], prod_positive = 1, sum_negative = 0;
	bool positive = false;
	bool negative = false;

	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];

		if (a[i] > 0)
		{
			positive = true;
			prod_positive *= a[i];
		} else if (a[i] < 0) {
			negative = true;
			sum_negative += a[i];
		}
	}

	if (positive)
	{
		cout << prod_positive << endl;
	} else
	{
		cout << 0 << endl;
	}

	if (negative)
	{
		cout << sum_negative << endl;
	} else
	{
		cout << 0 << endl;
	}

	return 0;
}
