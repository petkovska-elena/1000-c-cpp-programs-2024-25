//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski Vezhbi 11

/* Pronaogjanje min i max vrednost vo niza so pokazhuvaci */

#include <iostream>
using namespace std;

void find_min_and_max (int arr[], int size, int *min, int *max) {
	*min = arr[0];
	*max = arr[0];

	for (int i = 1; i < size; i++)
	{
		if (arr[i] < *min)
		{
			*min = arr[i];
		}

		if (arr[i] > *max){
		*max = arr[i];}
	}
}

int main() {
    int array[100];
	int i, n;
	cin >> n;

	int min = 0, max = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}

	find_min_and_max(array, n, &min, &max);

	cout << "Minimum value: " << min << endl;
	cout << "Maximium value: " << max << endl;
	return 0;
}