//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 5 - Kontrola na tek 2

/* Ако имате 75 поени, која оцена ќе ја добиете?
 * Што ќе испечати програмата?
 */

#include <iostream>
using namespace std;

int main() {
	int score;
	cin >> score;

	switch (int(score) / 10) {
	case 10:
	case 9: cout << "Grade = A" << endl; break;
	case 8: cout << "Grade = B" << endl; break;
	case 7: cout << "Grade = C" << endl; break;
	case 6: cout << "Grade = D" << endl; break;
	default: cout << "Grade = F" << endl;
	}
	return 0;
}