//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај 10 цели броеви. Испечати го индексот 0-базно на првиот елемент делив со 7, ако нема испечати -1.
 * Read 10 integers. Print the index of the first element divisible by 7, else -1. */

#include <iostream>
using namespace std;

int main() {
	int arr[10];

	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < 10; i++) {
		if (arr[i] % 7 == 0) {
			cout << i << endl;  // print index of the first divisible element
			return 0;           // stop immediately after the first
		}
	}

	cout << -1 << endl;  // if no element divisible by 7
	return 0;
}
