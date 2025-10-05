//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski Vezhbi 11

/* Да се напишат фунција за сортирање на низа со помош на методот за сортирање -
 * Метод на меурче (Bubble sort) Да се напишат функции за внесување и печатење на елементите на
 * една низа и да се напише главна програма во која се тестира методот */

#include <iostream>
using namespace std;

//Reference VS Without reference
void swap (int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void input_array (int array[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << "Enter element: " << i + 1 << ": ";
		cin >> array[i];
	}
}

void print_array (int array[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

void bubble_sort (int array[], int size) {
	bool swapped = true;
	while (swapped)
	{
		swapped = false;

		for (int i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i+1])
			{
				swap (array[i], array[i+1]);
				swapped = true;
			}
		}
	}
}

int main() {
	int size;
	cin >> size;

	int array[100];
	input_array(array, size);

	//Original array
	cout << "Original array: ";
	print_array(array, size);

	//Bubble sort
	bubble_sort(array, size);
	cout << "Sorted array: ";
	print_array(array,size);

	return 0;
}