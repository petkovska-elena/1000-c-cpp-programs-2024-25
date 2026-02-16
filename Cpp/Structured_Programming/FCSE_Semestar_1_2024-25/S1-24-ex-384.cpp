//
// Created by Elena Petkovska on 14.8.25.
//

#include <iostream>
using namespace std;

void sort(int *a, int *b, int *c) {
	int lowest, middle, highest;

	if (*a <= *b && *a <= *c)
	{
		lowest = *a;
		if (*b <= *c)
		{
			middle = *b;
			highest = *c;
		} else
		{
			middle = *c;
			highest = *b;
		}
	} else if (*b <= *a && *b <= *c)
	{
		lowest = *b;
		if (*a <= *c)
		{
			middle = *a;
			highest = *c;
		} else
		{
			middle = *c;
			highest = *a;
		}
	} else
	{
		lowest = *c;
		if (*a <= *b)
		{
			middle = *a;
			highest = *b;
		} else
		{
			middle = *b;
			highest = *a;
		}
	}

	*a = highest;
	*b = middle;
	*c = lowest;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	sort (&a, &b, &c);

	cout << a << " " << b << " " << c;
	return 0;
}