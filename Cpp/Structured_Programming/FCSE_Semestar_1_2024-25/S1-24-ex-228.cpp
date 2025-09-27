//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski Vezbi 10

/* TO-DO Steps:
 * 1. Read the size of the array (n) from the keyboard.
 * 2. Read n integers into the array.
 * 3. Write a recursive function max_element(arr, n) that:
 *    - If n == 1, return arr[0].
 *    - Otherwise, return the larger between arr[n - 1] and max_element(arr, n - 1).
 * 4. Call the recursive function with the full array size.
 * 5. Print the maximum element.
 *
 * Example:
 * Input:
 * 6
 * 5 8 3 12 9 6
 * Output:
 * Najgolem element vo nizata e 12
 */

#include <iostream>
#define MAX 100
using namespace std;

int max_element_rec(int arr[], int n) {
	if (n == 1)
		return arr[0];

	int max_rest = max_element_rec(arr, n - 1);
	return (arr[n - 1] > max_rest) ? arr[n - 1] : max_rest;
}

int main() {
	int n, arr[MAX];

	cout << "Vnesi ja goleminata na nizata: ";
	cin >> n;

	cout << "Vnesi gi elementite na nizata: \n";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int max_val = max_element_rec(arr, n);
	cout << "Najgolem element vo nizata e " << max_val << endl;

	return 0;
}
