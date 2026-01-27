//
// Created by Elena Petkovska on 14.8.25.
//

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int val = 1;

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < n; j++) {
				cout << val;
				val++;
				if (val == 10) val = 0;
			}
		} else {
			int temp[100];
			for (int j = 0; j < n; j++) {
				temp[j] = val;
				val++;
				if (val == 10) val = 0;
			}
			for (int j = n - 1; j >= 0; j--) {
				cout << temp[j];
			}
		}
		cout << endl;
	}
	return 0;
}