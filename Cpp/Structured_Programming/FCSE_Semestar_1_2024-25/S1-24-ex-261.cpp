//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај N со 1 ≤ N ≤ 20, потоа N цели броеви. Испечати YES ако низата е аритметичка прогресија, инаку NO.
 * Read N then N integers. Print YES if they form an arithmetic progression, else NO. */

#include <iostream>
using namespace std;

int main() {
	int N;
	int arr[20];

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	if (N <= 2) {
		// Sekvenca so 1 ili 2 broevi sekogas e aritmeticka progresija
		cout << "YES" << endl;
		return 0;
	}

	// Razlika pomegju prvite dva broja
	int d = arr[1] - arr[0];
	bool is_AP = true;

	// Proverka dali site razliki se isti
	for (int i = 1; i < N; i++) {
		if (arr[i] - arr[i - 1] != d) {
			is_AP = false;
			break;
		}
	}

	if (is_AP) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}
