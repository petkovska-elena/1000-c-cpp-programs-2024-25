//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 8 - Nizi

/* Да се напише програма која ќе го пресмета просекот на 10 броеви внесени од тастатура. За секој број да се отпечати дали е под или над просекот. */

#include <iostream>
using namespace std;

int main() {
	int n1, n2;
	cout << "Vnesi golemina na prvata niza: ";
	cin >> n1;
	cout << "Vnesi golemina na vtorata niza: ";
	cin >> n2;

	int a[100], b[100];
	cout << "Vnesi elementi za prvata niza: ";
	for(int i = 0; i < n1; i++) cin >> a[i];

	cout << "Vnesi elementi za vtorata niza: ";
	for(int i = 0; i < n2; i++) cin >> b[i];

	int IstiSe = 1;   // претпоставуваме дека се исти

	if(n1 == n2) {
		for(int i = 0; i < n1; i++) {
			if(a[i] != b[i]) {
				IstiSe = 0;   // најдовме разлика
				break;
			}
		}
	} else {
		IstiSe = 0; // различна должина
	}

	if(IstiSe) cout << "Nizite se identicni." << endl;
	else cout << "Nizite NE se identicni." << endl;

	return 0;
}
