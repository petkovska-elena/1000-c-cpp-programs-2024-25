//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski vezhbi 8

/* Да се напише програма која што ќе ги избрише дупликатите од една низа.
 * На крај, да се испечати на екран новодобиената низа.
 * Елементите од низата се читаат од стандарден влез. */

#include <iostream>
using namespace std;

int main() {
	int a[100], n, izbrisani = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n - izbrisani; i++) {
		for (int j = i + 1; j < n - izbrisani; j++) {
			if (a[i] == a[j]) {
				for (int k = j; k < n - 1 - izbrisani; k++) {
					a[k] = a[k + 1];
				}
				izbrisani++;
				j--;
			}
		}
	}

	n -= izbrisani;

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}