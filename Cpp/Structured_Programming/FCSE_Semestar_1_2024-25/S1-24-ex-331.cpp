//
// Created by Elena Petkovska on 14.8.25.
//

// Внесување на текстуални низи — примери (5)

/*
Влез:
This is a long
string
interesting

Излез:
This is
interesting

Го ресетира знаменцето за грешка.
Ги отфрла сите останати знаци додека не наиде на знак за нов ред (вклучувајќи го и него).
Враќа true ако е поставено знаменцето за грешка.
*/

#include <iostream>
using namespace std;

int main() {
	const int len1 = 8, len2 = 12;
	char s1[len1], s2[len2];

	cin.getline(s1, len1);

	if (cin.fail()) {
		cin.clear();
		while (cin.get() != '\n');       // ги отфрла останатите знаци до нов ред
	}

	cin.getline(s2, len2, '\n');

	cout << s1 << endl << s2 << endl;

	return 0;
}