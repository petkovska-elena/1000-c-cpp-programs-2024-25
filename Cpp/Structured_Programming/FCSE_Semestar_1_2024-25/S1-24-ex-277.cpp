//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski Vezhbi 12

/* Да се напише програма која ќе ја отпечати поднизата на дадена текстуална низа
 * (што се внесува од тастатура) определена со позицијата и должината,
 * што како параметри се внесуваат од тастатура. Поднизата започнува од знакот што се наоѓа
 * на соодветната позиција во текстуалната низа, броејќи од лево.
 * Пример
 * Ако од тастатура се внесе:
 * banana
 * позиција: 2
 * должина: 4
 * тогаш програмата треба да отпечати: nana */

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int MAX = 100;
	char s[MAX], dest[MAX];
	int pozicija, dolzhina;

	cin.getline(s,  MAX);
	cin >> pozicija >> dolzhina;

	if (pozicija <= strlen(s))
	{
		strncpy(dest, s + pozicija - 1, dolzhina);
		dest[dolzhina] = '\0';
		cout << "Rezultat: " << dest << endl;
	} else
	{
		cout << "Nevaliden vnes, prochitaniot string ima samo " << strlen(s) << " znaci.\n";
	}
	return 0;
}
