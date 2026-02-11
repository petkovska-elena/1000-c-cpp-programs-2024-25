//
// Created by Elena Petkovska on 14.8.25.
//

#include <iostream>
using namespace std;

void scale (int scores[], int n) {
	float max = scores[0];

	for (int i = 1; i < n; i++)
	{
		if (scores[i] > max)
		{
			max = scores[i];
		}
	}

	if (max == 0) max = 1;

	float a = 100.0 / max;

	for (int i = 0; i < n; i++)
	{
		cout << scores[i] * a << " ";
	}
}

int main() {
	int studenti;
	cin >> studenti;

	int array[studenti];

	for (int i = 0; i < studenti; i++)
	{
		cin >> array[i];
	}

	scale(array, studenti);
	return 0;
}