//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski Vezbi 10

/* TO-DO Steps:
 * 1. Read the size of the array (n) from the keyboard.
 * 2. Read n integers into an array.
 * 3. Write a recursive function gcd(a, b) that returns the greatest common divisor (NZD) of two numbers.
 * 4. Write a function lcm(a, b) that uses gcd(a, b) to return the least common multiple (NZS) of two numbers.
 * 5. Calculate the NZS of all array elements:
 *    - Initialize the result with the first element of the array.
 *    - Loop through the rest of the elements and update result = lcm(result, array[i]).
 * 6. Print the NZS of all elements in the array.
 *
 * Example:
 * Input:
 * 5
 * 18 12 24 36 6
 * Output:
 * NZS na elementite na ovaa niza e 72
 */

#include <iostream>
#define MAX 100
using namespace std;

int nzd(int a, int b) {
	if (b == 0)
		return a;
	return nzd(b, a % b);
}

int nzs(int a, int b) {
	return (a * b) / nzd(a, b);
}

int main() {
	int n, a[MAX];

	cout << "Vnesi ja goleminata na nizata: ";
	cin >> n;

	cout << "Vnesi gi elementite na nizata: \n";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int result = a[0];
	for (int i = 1; i < n; i++) {
		result = nzs(result, a[i]);
	}

	cout << "NZS na elementite na ovaa niza e " << result << endl;
	return 0;
}
