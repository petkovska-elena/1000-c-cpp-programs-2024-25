//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај 12 цели броеви. Испечати го односот (со реален печат) на збирот на парни и збирот на непарни елементи. Ако збирот на непарни е 0, испечати 0.
 * Read 12 integers. Print the ratio of sum of evens to sum of odds as a real number. If sum of odds is 0 print 0. */

#include <iostream>
using namespace std;

int main() {
	int arr[12];
	int sum_even = 0, sum_odd = 0;

	for (int i = 0; i < 12; i++)
	{
		cin >> arr[i];
		if (arr[i] % 2 == 0) {
			sum_even += arr[i];   // add even numbers
		} else {
			sum_odd += arr[i];    // add odd numbers
		}
	}

	if (sum_odd == 0) {
		cout << 0 << endl;  // avoid division by zero
	} else {
		cout << (double)sum_even / sum_odd << endl; // cast to double for real output
	}

	return 0;
}
