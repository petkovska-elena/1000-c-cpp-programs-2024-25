//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај 5 цели броеви. Испечати го бројот на цифри за секој број на посебен ред.
 * Read 5 integers. For each, print its digit count on a separate line. */

#include <iostream>
using namespace std;

int main() {
	long long arr[5];

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 5; i++)
	{
		long long num = arr[i];
		if (num == 0)
		{
			cout << 1 << endl;
			continue;
		}

		int digits = 0;
		if (num < 0) num = -num;

		while (num > 0)
		{
			digits++;
			num /= 10;
		}
		cout << digits << endl;
	}
	return 0;
}
