//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski Vezhbi 12

/* Да се напише функција која ќе одредува дали една текстуална низа е подниза на друга текстуална низа.
 * Пример
 * face е подниза на Please faceAbook
 */

#include <iostream>
#include <cstring>
using namespace std;

int podstring(char *s1, char *s2) {
	int d1 = strlen(s1);
	int d2 = strlen(s2);
	if (d1 < d2)
	{
		return 0;
	}
	for (int i = 0; i <= d2 - d1; i++)
	{
		if (strncmp (s1, s2 + i, d1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int main() {
	int MAX = 100;
	char s1[MAX], s2[MAX];
	cin.getline(s1, MAX);
	cin.getline(s2, MAX);
	if (podstring (s1, s2))
	{
		cout << s1 << " e podring na " << s2 << endl;
 	} else
 	{
 		cout << s1 << " NE e podstring na " << s2 << endl;
 	}
	return 0;
}
