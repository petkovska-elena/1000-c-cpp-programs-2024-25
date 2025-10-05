//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski Vezhbi 11

/* Да се напише програма која влезната низа a ќе ја трансформира во излезна низа b на следниот начин:
 * bi = ai + an − 1 − i
 * Влезната низа 1 2 3 5 7 треба да се трансформира во 8 7 6 7 8.
 * Објаснување: Бидејќи влезната низа a е со големина n, низата b ќе биде со иста големина.
 * Трансформацијата се врши со парно собирање и замена на елементи. За секој пар елементи a[i] и a[n-1-i],
 * каде што i се движи од [0 до n/2-1], нивниот збир е зачуван во b[i], додека a[i] се заменува со [n-1-i].
 * Ако n е непарен, средниот елемент a[n/2] се множи со 2. */

#include <iostream>
#define MAX 100
using namespace std;

void transform(int arr[], int n) {
	for (int i = 0, j = n - 1; i < j; i++, j--)
	{
		arr[i] += arr[j];
		arr[j] = arr[i];
	}

	if (n % 2)
	{
		arr[n / 2] *= 2;
	}
}

void transform_recursive (int *arr, int start, int n) {
	if (start >= n/2)
	{
		if (n % 2 == 1)
		{
			*(arr + n/2) *= 2;
		}
		return;
	}

	int end = n - start - 1;
	int tmp = *(arr + start) + *(arr + end);
	*(arr + start) = tmp;
	*(arr + end) = tmp;

	transform_recursive (arr, start + 1, n);
}

int main() {
	int n;
	int arr[MAX];


	cout << "Enter the size of the array: ";
	cin >> n;

	cout << "Enter the elements of the array: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	transform (arr,n);
	transform_recursive(arr, 0, n);

	cout << "Transformed array: ";
	for (int i = 0; i< n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
