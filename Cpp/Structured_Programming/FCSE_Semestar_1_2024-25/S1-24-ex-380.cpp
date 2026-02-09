//
// Created by Elena Petkovska on 14.8.25.
//

#include <iostream>
using namespace std;

void processArray (int *array, int n) {
	int max = array[0], min = array[0], sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (*(array + i) > max)
		{
			max = *(array + i);
		}

		if (*(array + i) < min)
		{
			min = *(array + i);
		}

		sum += *(array + i);
	}

	int diff = max - min;

	for (int i = 0; i < n; i++)
	{
		*(array + i) += diff;
	}

	cout << "MAX -> " << max << endl;
	cout << "MIN -> " << min << endl;
	cout << "SUM -> " << sum << endl;

	for (int i = 0; i < n; i++)
	{
		cout << *(array + i) << " ";
	}
}

int main() {
	int n;
	cin >> n;

	int array[n];
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}

	processArray(array, n);
	return 0;
}