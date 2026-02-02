//
// Created by Elena Petkovska on 14.8.25.
//

/* Eден природен број e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
 * Обратен број е бројот составен од истите цифри, но во обратен редослед
 * (на пример, 653 е обратен број на бројот 356). Од тастатура се внесува природен број n ( n > 9).
 * Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“. Ако внесениот број не е валиден,
 * да се отпечати соодветна порака (Brojot ne e validen). */

/*
 *  eInteresen
 *  obraten broj
 *  broj na cifri na brojot
 *  e deliv so brojot na cifri
 *  n > 9
 *  da se najde najgolemiot broj od N, pomal od n, koj e interesen
 *  Ako ne e valiedn, otpecati
 */

#include <iostream>
using namespace std;

int obratenBroj(int broj) {
		int obraten = 0;

		while (broj > 0)
		{
			int cifra = broj % 10;
			obraten = obraten * 10 + cifra;
			broj = broj / 10;
		}

		return obraten;
}

int brojCifri(int broj) {
	int counter = 0;

	if (broj == 0)
	{
		return 1;
	}

	while (broj > 0)
	{
		counter++;
		broj = broj / 10;
	}

	return counter;
}

bool eInteresen (int broj) {
	int obr = obratenBroj(broj);
	int cif = brojCifri(broj);
	return (obr % cif == 0);
}

int main() {
	  int n;
	  cin >> n;

	  if (n <= 9)
	  {
		  cout << "Brojot ne e validen" << endl;
	  	  return 0;
	  }

	int najgolem = -1;

	//najgolem broj pomal od n koj e interesen
	for (int i = n - 1; i >= 1; i--)
	{
		if (eInteresen(i))
		{
			najgolem = i;
			break;
		}
	}

	if (najgolem != -1)
	{
		cout << najgolem << endl;
	}

	  return 0;
}
