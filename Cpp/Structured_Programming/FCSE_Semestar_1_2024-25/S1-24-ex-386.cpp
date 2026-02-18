//
// Created by Elena Petkovska on 14.8.25.
//

// LAB Ex.2 (online)

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int matrica[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrica[i][j];
		}
	}

	if(n % 2 == 0) { // paren
		int k = 1, l = n - 1;
		for(int i = n - 1; i > n/2; i--) {
			for(int j = k; j < l; j++) {
				matrica[i][j] *= -1;
			}
			k++;
			l--;
		}
	} else if (n%2!=0) { // neparen
		int k = 1, l = n - 1;
		for(int i = n - 1; i > n/2; i--) {
			for(int j = k; j < l; j++) {
				matrica[i][j] *= -1;
			}
			k++;
			l--;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrica[i][j] << " ";
		}
		cout<<endl;
	}
	return 0;
}