//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај 12 цели броеви. Испечати го збирот на елементите пред првиот негативен број. Ако нема негативен, испечати го збирот на сите.
Read 12 integers. Print the sum of elements before the first negative, or sum of all if none. */

#include <iostream>
using namespace std;

int main() {
	int niza[12], sum = 0;
	int neg_position = -1;

	for (int i = 0; i < 12; i++)
	{
		cin >> niza[i];
	}

	for (int i = 0; i < 12; i++)
	{
		if (niza[i] < 0)
		{
			neg_position = i;
			break;
		}
	}

	if (neg_position == -1)
	{
		for (int i = 0; i < 12; i++)
		{
			sum += niza[i];
		}
	} else
	{
		for (int i = 0; i < neg_position; i++)
		{
			sum += niza[i];
		}
	}

	cout << sum << endl;
	return 0;
}
