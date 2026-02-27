//
// Created by Elena Petkovska on 14.8.25.
//

//OBJEKTNO-ORIENTIRANO PROGRAMIRANJE
//AUDITORISKI VEZBI 1 - Strukturi vo C++
/* 1.5 Држави
 * Да се напише програма која од стандарден влез ќе чита податоци за држави и
 * на екран ќе го отпечати името и презимето на претседателот на државата
 * чиj што главен град има најмногу жители. Податоци за држава:
 * име
 * претседател
 * главен град
 * број на жители.
 * Податоци за град:
 *
 * име
 * број на жители.
 * Податоци за претседател:
 *
 * име
 * презиме
 * политичка партија.
 */

#include <iostream>
#include <cstring>
using namespace std;

struct city
{
	char name[100];
	int population;
};

struct country
{
	char name[100];
	char president[100];
	city capital;

	int population;
	void print() {
		cout << name << "\t" << president << "\t";
		cout << capital.name << "\t";
		cout << capital.population << "\t";
		cout << population << endl;
	}
};

void print (country &c) {
	cout << c.name << "\t" << c.president << "\t";
	cout << c.capital.name << "\t";
	cout << c.capital.population << "\t";
	cout << c.population << endl;
}

void read (int n, country c[]) {
	for (int i = 0; i < n; ++i)
	{
		cin >> c[i].name;
		cin >> c[i].president;
		cin >> c[i].capital.name;
		cin >> c[i].capital.population;
		cin >> c[i].population;
	}
}

void maxCapitalPopulation (int n, country c[]) {
	country max = c[0];
	for (int i = 1; i < n; ++i)
	{
		if (c[i].capital.population > max.capital.population)
		{
			max = c[i];
		}
	}

	cout << max.president << endl;
}

int main() {
  country countries[100];
	int n;
	cin >> n;
	read(n, countries);

	for (int i = 0; i < n; ++i)
	{
		countries[i].print();
	}

	maxCapitalPopulation(n, countries);
	return 0;
}
