//
// Created by Elena Petkovska on 14.8.25.
//

// Внесување на текстуални низи со getchar()

/*
Ги чита и празните места се додека не се притисне ENTER
или додека не се прочитаат потребниот број знаци (9).

Или:
ch = cin.get();
*/

#include <iostream>
#include <cstdio>
#define N 10
using namespace std;

int main() {
	char ch, str[N];
	int i = 0;

	while ((i < N - 1) && ((ch = getchar()) != '\n')) {
		str[i] = ch;
		i++;
	}

	str[i] = '\0'; // крај на низа

	cout << str << endl;

	return 0;
}