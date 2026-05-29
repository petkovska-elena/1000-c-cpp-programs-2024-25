//
// Created by Elena Petkovska on 14.8.25.
//

/* Да се дефинира класа Potpisuvac во која се чуваат информации за:

име (низа од максимум 20 знаци)
презиме (низа од максимум 20 знаци)
ЕМБГ (низа од максимум 14 знаци)
За класата да се дефинира copy конструктор, default конструктор и конструктор со аргументи.

Да се дефинира класа Dogovor, во која се чуваат информации за:

број на договор (int),
категорија на договор (низа од 50 знаци),
поле од 3 потпишувачи на договорот (објекти од класата Potpisuvac)
Во класата да се додаде метод кој ќе проверува дали постојат два исти потпишувачи (имаат ист ЕМБГ).

Влез:
 2
 0101988450001 Alek Aleksov
 0101988450001 Alek Aleksov
 0202987440022 Marko Markov
 1 Osiguruvanje
 0101988450001 Alek Aleksov
 0101988450011 Tome Tomov
 0202987440022 Marko Markov
 2 Kreditiranje
Излез:
 Dogovor 1:
 Postojat potpishuvaci so ist EMBG
 Dogovor 2:
 Ne postojat potpishuvaci so ist EMBG
 */

#include <iostream>
#include <cstring>
using namespace std;

class Potpishuvac {
private:
	char EMBG[14];
	char ime[20], prezime[20];
	char kategorija[20];

public:
	// Default Construktor
	Potpishuvac() {}

	// Constructor with Arguments
	Potpishuvac(char *ime, char *prezime, char *EMBG) {
		strcpy(this->ime, ime);
		strcpy(this->prezime, prezime);
		strcpy(this->EMBG, EMBG);
	}

	// Copy Constructor
	Potpishuvac(const Potpishuvac &potpishuvac) {
		strcpy(this->ime, potpishuvac.ime);
		strcpy(this->prezime, potpishuvac.prezime);
		strcpy(this->EMBG, potpishuvac.EMBG);
	}

	~Potpishuvac() {}

	char *getEMBG() {
		return EMBG;
	}
};

class Dogovor {
private:
	int broj;
	char kategorija[50];
	Potpishuvac potpishuvac[3];

public:
	Dogovor() {}

	Dogovor(int broj, char *kategorija, Potpishuvac *potpishuvac) {
		this->broj = broj;
		strcpy(this->kategorija, kategorija);

		for (int i = 0; i < 3; i++) {
			this->potpishuvac[i] = potpishuvac[i];
		}
	}

	bool proverka() {
		for (int i = 0; i < 2; i++) {
			if (strcmp(potpishuvac[i].getEMBG(), potpishuvac[i+1].getEMBG()) == 0) {
				return true;
			}
		}
		return false;
	}
};

int main() {
	char EMBG[14], ime[20], prezime[20], kategorija[20];
	int broj, n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> EMBG >> ime >> prezime;
		Potpishuvac p1(ime, prezime, EMBG);

		cin >> EMBG >> ime >> prezime;
		Potpishuvac p2(ime, prezime, EMBG);

		cin >> EMBG >> ime >> prezime;
		Potpishuvac p3(ime, prezime, EMBG);

		cin >> broj >> kategorija;
		Potpishuvac p[3];

		p[0] = p1;
		p[1] = p2;
		p[2] = p3;

		Dogovor d(broj, kategorija, p);
		cout << "Dogovor " << broj << ":" << endl;

		if (d.proverka()) {
			cout << "Postojat potpishuvachi so ist EMBG" << endl;
		} else {
			cout << "Ne postojat potpishuvachi so ist EMBG" << endl;
		}
	}

	return 0;
}
