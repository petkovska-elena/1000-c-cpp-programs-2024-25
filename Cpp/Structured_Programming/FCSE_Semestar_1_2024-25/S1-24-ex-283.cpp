//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski Vezhbi 12

/* Да се напише функција која во дадена текстуална низа ќе ги отстранува празните места на почетокот и крајот од низата.
 * Пример
 * За низата:
 * "   make trim   "
 * треба да се добие:
 * "make trim" */

#include <iostream>
#include <cctype>
using namespace std;

void trim (char s[]) {
	int spaces = 0;
	while (isspace (s[spaces]))
	{
		spaces++;
	}
	int i;
	for (i = 0; s[i + spaces] != '\0'; i++)
	{
		s[i] = s[i + spaces];
	}
	s[i] = '\0';
	while (i > 0 && isspace (s[i - 1]))
	{
		i--;
		s[i] = '\0';
	}
}

int main() {
	int MAX = 100;
	char s[MAX];
	cin.getline (s, MAX);
	cout << "[" << s << "] -> ";
	trim(s);
	cout << "[" << s << "]";
	return 0;
}
