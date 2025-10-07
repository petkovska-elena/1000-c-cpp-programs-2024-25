//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski Vezhbi 12

/* Да се напише функција која ќе проверува дали дадена текстуална низа е палиндром.
 * Една текстуална низа е палиндром ако таа се чита исто од лево на десно и од десно на лево.
 * Примери за палиндроми
 * dovod
 * ana
 * kalabalak*/

#include <iostream>
using namespace std;

int e_palindrom (char str[]) {
	int n = strlen(str);
	for (int i = 0; i < n / 2; i++)
	{
		if (str[i] != str[n - 1 - i])
		{
			return 0;
		}
	}
	return 1;
}

//Rekurzivno
int e_pal(char str[], int start, int end) {
	if (start >= end) return 1;
	if (str [start] == str[end])
	{
		return e_pal(str, start + 1, end - 1);
	}
	return 0;
}

int main() {
  int MAX = 100;
	char s[MAX];
	cin.getline(s, MAX);
	cout << s << " ";
	if (e_pal(s, 0, strlen(s) - 1))
	{
		cout << "e palindrom.";
	} else
	{
		cout << "NE e palindrom.";
	}
	return 0;
}
