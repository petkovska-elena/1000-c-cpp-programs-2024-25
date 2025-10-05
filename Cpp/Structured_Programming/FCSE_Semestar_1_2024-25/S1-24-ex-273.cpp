//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski Vezhbi 11

/* Да се напишат следните функции за пребарување во низа:
 * Линеарно пребарување
 * Бинарно пребарување
 * Потоа да се напише главна програма во која ќе се пополнува низа со броевите од 1 до 1 000 000,
 * а потоа се генерира случаен број во овој опсег чија што позиција треба да се пронајде со повикување на двете функции за пребарување. */

#include <iostream>
#include <cstdlib> //For rand()
#include <ctime>   //For time()
using namespace std;

int linear_search(int arr[], int n, int key) {
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == key)
		{
			return i;
		}
	}
	return -1;
}

int binary_search_iterative (int arr[], int l, int r, int x) {
	while (l <= r)
	{
		int m = l + (r - l) / 2;

		//Check if x is present at mid
		if (arr[m] == x)
		{
			return m;
		}

		//If x greater, ignore left half
		if (arr[m] < x)
		{
			l = m + 1;
		}

		//If x is smaller, ignore right half
		else
		{
			r = m - 1;
		}

		//If we reach this part, then element was not present
		return -1;
	}
}

int binary_search (int arr[], int l, int r, int key) {
	if (l <= r)
	{
		int mid = l + (r - l) /2;

		if (arr[mid] == key)
		{
			return mid;
		} else
		{
			if (arr[mid] < key)
			{
				return binary_search(arr, mid + 1, r, key);
			} else
			{
				return binary_search (arr, l, mid - 1, key);
			}
		}
		return -1;
	}
}

int main() {
    //Initialize the array with numbers from 1 to 1,000,000
	int arr[1000001];
	for (int i = 0; i < 1000001; i++)
	{
		arr[i] = i + 1;
	}

	//Generate a random number within the range
	srand (time(NULL));                          //Seed the random number generator
	int random_number = 1 + rand() % 1000000;    //Generate a random number between 1 and 1,000,000

	//Perform linear search
	int linear_search_index = linear_search(arr, 1000001, random_number);
	cout << "Linear search: " << linear_search_index << endl;

	//Perform binary search
	int binary_search_index = binary_search(arr, 0, 1000000, random_number);
	cout << "Binary search: " << binary_search_index << endl;

	return 0;
}
