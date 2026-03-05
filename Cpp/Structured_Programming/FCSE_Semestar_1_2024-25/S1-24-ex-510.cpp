//
// Created by Elena Petkovska on 14.8.25.
//

// SNIMKI - Аудиториска вежба 2: Структури во C++
// Kolokviumska I Zadaca

/* TO-DO Steps:
* 1. Да се дефинира структура Call, во која ќе се чуваат информации за датумот на повикот (цели броја за ден, месец и година),
* времетраење во секунди (цел број), и два телефонски броја (текстуални низи од 9 цифри за број кој повикува и баран број). (10 поени)
* 2. Да се напише main функција во која се чита цел број N (max 500), а потоа информации за N повици, секој во посебен ред,
* во следниот формат: dd/mm/yyyy број_што_повикува баран_број времетраење. (10 поени)
* 3. На екран да се испечатат сите повици каде бројот што повикува е бројот 070214011 и се
* комплетирани во периодот од 1.1.2019 до 31.12.2020, вклучувајќи ги и датумите 1.1.2019 и 31.12.2020. (15 поени)
* 4. Да се испечати вкупното времетраење на тие повици. (5 поени)
* 5. Форматот на печатење да се види од тест примерите.
*
* Пример влез:
* 18/03/2016 070211123 071300400 73
*
* For example:
	Input
	10
	08/02/2014 070215655 070300800 73
	04/06/2019 070214644 070880599 602
	16/01/2020 070214011 071222333 10
	03/12/2018 072201899 075444765 150
	27/01/2021 078308428 070365567 301
	19/07/2020 079207079 079599699 365
	27/03/2019 070214011 070485011 1025
	14/07/2018 070214987 076230808 425
	05/11/2016 070214011 077444765 875
	15/11/2017 070345567 077333444 985

	Result
	16/01/2020 070214011 071222333 10
	27/03/2019 070214011 070485011 1025
	Total: 1035 sec.
*/

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

struct Call
{
	int day, month, year;
	char caller[10];
	char receiver[10];
	int duration;

	void readCall() {
		char slash1, slash2;
		// Reads: 18/03/2016 070211123 071300400 73
		//        dd/mm/yyyy caller receiver duration
		cin >> day >> slash1 >> month >> slash2 >> year >> caller >> receiver >> duration;
	}

	void printCall() const {
		cout << setfill('0')
			 << setw(2) << day << "/"
			 << setw (2) << month << "/"
			 << setw (4) << year << " "
			 << caller << " "
			 << receiver << " "
			 << duration << "\n";
	}

	int asIntDate() const {
		return year * 10000 + month * 100 + day; //yyyymmdd
	}
};

bool inRangeInclusive(const Call& c, int d1, int m1, int y1, int d2, int m2, int y2) {
	int x = c.asIntDate();
	int left = y1 * 10000 + m1 * 100 + d1;
	int right = y2 * 10000 + m2 * 100 + d2;
	return x >= left && x <= right;
}

int main() {
	int N;
	cin >> N;

	Call calls[500];
	for (int i = 0; i < N; i++)
	{
		calls[i].readCall();
	}

	const char targetCaller[] = "070214011";
	int totalTime = 0;

	for (int i = 0; i < N; i++)
	{
		if (strcmp(calls[i].caller, targetCaller) == 0 && inRangeInclusive(calls[i], 1, 1, 2019, 31, 12, 2020))
		{
			calls[i].printCall();
			totalTime += calls[i].duration;
		}
	}

	cout << "Total: " << totalTime << " sec.\n";
	return 0;
}
