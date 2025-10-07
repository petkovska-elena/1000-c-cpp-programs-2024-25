//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski Vezhbi 12

/* Да се напише функција која ќе проверува дали дадена реченица е палиндром.
 * При проверката да се игнорираат празните места, интерпункциските знаци,
 * а соодветните мали и големи букви да се сметаат за еднакви (A == a, B == b, итн.).
 * Примери за реченици - палиндроми */

#include <iostream>
#include <cstring>
#include <cctype> // for isalnum, tolower
using namespace std;

bool is_sentence_palindrome(const char str[]) {
	char cleaned[1000];
	int idx = 0;

	// Step 1: Clean the string
	for (int i = 0; str[i] != '\0'; i++) {
		if (isalnum(str[i])) { // keep only letters and digits
			cleaned[idx++] = tolower(str[i]);
		}
	}
	cleaned[idx] = '\0'; // null terminator

	// Step 2: Check palindrome
	int n = strlen(cleaned);
	for (int i = 0; i < n / 2; i++) {
		if (cleaned[i] != cleaned[n - 1 - i]) {
			return false; // not palindrome
		}
	}
	return true; // palindrome
}

int main() {
	const int MAX = 1000;
	char sentence[MAX];

	cout << "Enter a sentence: ";
	cin.getline(sentence, MAX);

	if (is_sentence_palindrome(sentence)) {
		cout << "Palindrome sentence" << endl;
	} else {
		cout << "Not a palindrome sentence" << endl;
	}

	return 0;
}
