//
// Created by Elena Petkovska on 14.8.25.
//

//OBJEKTNO-ORIENTIRANO PROGRAMIRANJE
//AUDITORISKI VEZBI 1 - Strukturi vo C++
/* 1.4 Студенти
 * Од стандарден влез се читаат податоци за непознат број студенти (не повеќе од 100).
 * Податоците се внесуваат така што во секој ред се состои од:
 * името
 * презимето
 * бројот на индекс (формат xxyzzzz)
 * четири броја (поени од секоја задача)
 * со произволен број празни места или табулатори меѓу нив.
 * Да се напише програма која ќе испечати список на студенти, каде во секој ред ќе има:
 * презиме, име, број на индекс, вкупен број на бодови сортиран според бројот на бодови.
 * При тоа имињата и презимињата да се напишат со голема почетна буква.
 */

#include <iostream>
#include <cstring>
using namespace std;

struct Student
{
	char firstName[50];
	char lastName[50];
	int number;
	int totalPoints;

	void print() {
		cout << lastName << " " << firstName << ", " << number << ", " << totalPoints << endl;
	}
};

void normalise (char *name, bool allUppercase = false) {
	*name = toupper(*name);
	++name;

	while (*name)
	{
		if (allUppercase) { *name = toupper(*name); }
		else { *name = tolower(*name); }
		++name;
	}
}

void read (Student &s) {
	cin >> s.firstName;
	cin >> s.lastName;
	cin >> s.number;
	normalise(s.firstName);
	normalise(s.lastName);

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	s.totalPoints = a + b + c + d;
}

void sort (Student s[], int n) {
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n - 1; ++j)
		{
			if (s[j].totalPoints < s[j + 1].totalPoints)
			{
				Student temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}
}

int main() {
  Student s[100];
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		read(s[i]);
	}

	sort(s, n);
	cout << "======= ORDERED =======" << endl;

	for (int i = 0; i < n; ++i)
	{
		s[i].print();
	}

	return 0;
}
