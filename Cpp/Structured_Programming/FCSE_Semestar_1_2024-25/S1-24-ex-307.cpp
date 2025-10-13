//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 8 - Nizi

/* Да се напише програма што ќе чита текст од тастатура и ќе го брои колку пати се појавува секоја буква од A до Z.
 * На крај програмата треба да испечати колку пати се појавил секој знак. */

#include <iostream>
using namespace std;

int main() {
	int day_tab[2][13] =
	{
		{0,31,28,31,30,31,30,31,31,30,31,30,31},   // Непрестапна година
		{0,31,29,31,30,31,30,31,31,30,31,30,31}    // Престапна година
	};

	int i, prest, den, mesec, godina;
	cout << "Vnesi datum: ";
	cin >> den >> mesec >> godina;

	// Проверка дали е престапна година
	prest = (godina % 4 == 0 && godina % 100 != 0) || (godina % 400 == 0);

	// Додавање на деновите од претходните месеци
	for(i = 1; i < mesec; i++)
		den += day_tab[prest][i];

	cout << "Datumot e " << den << " - iot den vo godinata " << endl;
	return 0;
}