//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 8 - Nizi

/* Да се напише програма што ќе чита текст од тастатура и ќе го брои колку пати се појавува секоја буква од A до Z.
 * На крај програмата треба да испечати колку пати се појавил секој знак. */

#include <iostream>
using namespace std;
#define SIZE 91

int main () {
	int m, fC[SIZE] = {0};
	char ch, index;

	// Читање карактери додека не се достигне крај (EOF)
	while ((ch = cin.get()) != EOF) {
		if (ch >= 'A' && ch <= 'Z') {
			fC[ch]++;
		}
	}

	cout << "Tekstot sodrzi" << endl;
	cout << "Bukva\tBroj na pojavi" << endl;

	// Печатење на резултати за секоја буква
	for (index = 'A'; index <= 'Z'; index++) {
		cout << index << "\t\t" << fC[index] << endl;
	}

	return 0;
}