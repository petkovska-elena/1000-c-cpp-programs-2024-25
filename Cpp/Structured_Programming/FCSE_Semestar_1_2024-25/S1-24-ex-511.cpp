//
// Created by Elena Petkovska on 14.8.25.
//

// SNIMKI - Аудиториска вежба 2: Структури во C++
// Zadaci za Vezhbi

/* Да се креира структура SkiLift во која се чуваат податоци за името на ски лифтот (низа од 15 знаци),
 * максимален број на корисници што може да опслужи на едно возење, дали е пуштен во функција.
 *
 * Потоа да се креира структура SkiCenter во која се чуваат податоци за името на скијачкиот центар,
 * држава во која се наоѓа (низа од 20 знаци), низа од ски лифтови (макс 20) што ги има и број на ски лифтови.
 *
 * Треба да се направи функција со потпис
 * void najgolemKapacitet(SkiCenter *sc, int n)
 * која што ќе го отпечати ски центарот што има најголем капацитет за опслужување скијачи
 * (вкупниот број на скијачи кои може да се опслужуваат во еден момент вкупно на сите ски лифтови во центарот).
 *
 * Доколку два ски центри имаат ист капацитет, тогаш се печати оној кој има поголем број на ски лифтови. Притоа треба да се испечатат во посебен ред името, државата и капацитетот на ски центарот. Кога се пресметува капацитет на еден ски центар во предвид се земаат само ски лифтовите кои се поставени дека се во функција.
 * For example:
 *
	Input
	1
	Mavrovo
	Makedonija
	6
	Ednosed
	30
	1
	Dvosed
	60
	1
	Ciciban
	10
	1
	Galicki
	20
	1
	Belicki
	(остатокот од примерот е прекриен на сликата)

	Result
	Mavrovo
	Makedonija
	160
*/

#include <iostream>
using namespace std;

struct SkiLift {
	char name[15];
	int maxUsers;
	int active;

	void readSkilift() {
		cin >> name >> maxUsers >> active;
	}
};

struct SkiCenter {
	char name[20];
	char country[20];
	SkiLift skiLifts[20];
	int cntLifts;

	void readSkicenter() {
		cin >> name >> country;
		cin >> cntLifts;
		for (int i = 0; i < cntLifts; i++) {
			skiLifts[i].readSkilift();
		}
	}

	void printSkiCenter (SkiCenter center) {

	}

	int calculateCapacityForSkiCenter (SkiCenter center) {
		int sum = 0;
		for (int i = 0; i < center.cntLifts; i++)
		{
			if (center.skiLifts[i].active)
			{
				sum += center.skiLifts[i].maxUsers;
			}
		}
		return sum;
	}

	int cmpSkiCenter (SkiCenter s1, SkiCenter s2) {
		if (calculateCapacityForSkiCenter(s1) > calculateCapacityForSkiCenter(s2))
		{
			return 1;
		} else if (calculateCapacityForSkiCenter(s1) < calculateCapacityForSkiCenter(s2))
		{
			return -1;
		} else
		{
			return 0;
		}
	}

	void najgolemKapacitet (SkiCenter *centers, int n) {
		SkiCenter max = centers[0];
		for (int i = 1; i < n; i++)
		{
			if (cmpSkiCenter(centers[i], max) > 0)
			{
				max = centers[i];
			}
		}
		printSkiCenter(max);
	}
};

int main() {
	int n;
	cin >> n;

	SkiCenter centers[10];

	for (int i = 0; i < n; i++) {
		centers[i].readSkicenter();
	}

	centers[0].najgolemKapacitet(centers, n);
	return 0;
}