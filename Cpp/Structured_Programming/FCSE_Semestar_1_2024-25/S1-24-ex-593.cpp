//
// Created by Elena Petkovska on 14.8.25.
//

/* Да се креира класа за претставување на планинарско друштво во која ќе се чуваат информации за името на друштвото ( динамички алоцирана низа од знаци), број на поминати тури (цел број) и број на членови во планинарското друштво (цел број). За оваа класа да се напише:

оператор + за собирање на две друштва што како резултат враќа друштво со број на членови еднаков на збирот од членовите од двете друштва, а останатите атрибути на резултантното друштво ги добиваат вредностите на соодветните атрибути од друштвото со поголем број на членови
оператори >, < за споредба во однос на бројот на членови во планинарските друштва
оператор << за печатење на информациите за планинарското друштво
Да се напише функција што на влез прима низа од планинарски друштва и вкупен број на друштва во низата и го печати планинарското друштво што има најголем број на членови.

Влез:
Bistra
12
75
Kozuv
15
89
Kozjak
2
15
Излез:
Ime: Kozuv Turi: 15 Clenovi: 164
Najmnogu clenovi ima planinarskoto drustvo: Ime: Kozuv Turi: 15 Clenovi: 89

Влез:
Vodno
5
100
Korab
7
50
Аурора
2
10
Излез:
Ime: Vodno Turi: 5 Clenovi: 150
Najmnogu clenovi ima planinarskoto drustvo: Ime: Vodno Turi: 5 Clenovi: 100
*/

#include <iostream>
using namespace std;

class planinarskoDrustvo {
private:
	char *ime;
	int brojNaTuri;
	int brojNaClenovi;

public:
	// Default konstruktor
	planinarskoDrustvo() {
		brojNaClenovi = 0;
		brojNaTuri = 0;
		ime = new char[0];
	}

	// Konstruktor so argumenti
	planinarskoDrustvo(char *ime, int brojNaTuri, int brojNaClenovi) {
		// strlen - string length - broi kolku karakteri ima tekstot
		// +1 e za '\0' na krajot za C-string
		this->ime = new char[strlen(ime) + 1];
		strcpy(this->ime, ime);
		this->brojNaTuri = brojNaTuri;
		this->brojNaClenovi = brojNaClenovi;
	}

	// Copy konstruktor
	// Vnatre go sodrzhi celosno istiot kod od konstrukotorot so argumenti
	// pogore samo dodavame od (const planinarskoDrustvo &planinarsko) planinarsko. pred planinarsko.ime, itn.
	planinarskoDrustvo(const planinarskoDrustvo &planinarsko) {
		this->ime = new char[strlen(planinarsko.ime) + 1];
		strcpy(this->ime, planinarsko.ime);
		this->brojNaTuri = planinarsko.brojNaTuri;
		this->brojNaClenovi = planinarsko.brojNaClenovi;
	}

	// Ovde gi kopirame liniite kod od copy constructor
	// &planinarsko - e referenca kon objektot, ne e nov objekt, ne e kopija, tuku e samo istiot objekt, so drugo ime
	// const kazuva deka ke pravime samo citanje, ne menuvanje na objektot
	// this e pokazvac (pointer) kon tekovniot objekt, vrz koj e povikana metodata
	// this->ime           // ime на ТЕКОВНИОТ објект (левата страна)
	// planinarsko.ime     // ime од ДРУГИОТ објект (десната страна)
	planinarskoDrustvo &operator=(const planinarskoDrustvo &planinarsko) {
		if (this != &planinarsko) {
			delete[] ime;

			this->ime = new char[strlen(planinarsko.ime) + 1];
			strcpy(this->ime, planinarsko.ime);
			this->brojNaTuri = planinarsko.brojNaTuri;
			this->brojNaClenovi = planinarsko.brojNaClenovi;
		}

		// Vrakja referenca kon tekovniot objekt
		return *this;
	}

	~planinarskoDrustvo() {
		delete[] ime;
	}

	planinarskoDrustvo operator+(const planinarskoDrustvo &other) {
		planinarskoDrustvo nov;
		nov.brojNaClenovi = this->brojNaClenovi + other.brojNaClenovi;

		if (this->brojNaClenovi > other.brojNaClenovi) {
			nov.ime = new char[strlen(this->ime) + 1];
			strcpy(nov.ime, this->ime);
			nov.brojNaTuri = this->brojNaTuri;
		} else if (this->brojNaClenovi < other.brojNaClenovi) {
			nov.ime = new char[strlen(other.ime) + 1];
			strcpy(nov.ime, other.ime);
			nov.brojNaTuri = other.brojNaTuri;
		}

		return nov;
	}

	bool operator>(const planinarskoDrustvo &other) {
		return brojNaClenovi > other.brojNaClenovi;
	}

	bool operator<(const planinarskoDrustvo &other) {
		return brojNaClenovi < other.brojNaClenovi;
	}

	friend ostream &operator<<(ostream &out, const planinarskoDrustvo &other) {
		// Ime: Kozuv Turi: 15 clenovi: 164
		out << "Ime: " << other.ime << " Turi: " << other.brojNaTuri << " Clenovi: " << other.brojNaClenovi << endl;
		return out;
	}
};

void najmnoguClenovi(planinarskoDrustvo *drustva, int n) {
	planinarskoDrustvo maxDrustvo = drustva[0];

	for (int i = 1; i < n; i++) {
		if (maxDrustvo < drustva[i]) {
			maxDrustvo = drustva[i];
		}
	}

	cout << "Najmnogu clenovi ima planinarskoto drustvo: " << maxDrustvo;
}

int main() {
	planinarskoDrustvo drustva[3];
	planinarskoDrustvo planinarsko;

	for (int i = 0; i < 3; i++) {
		char ime[100];
		int brojNaTuri;
		int brojNaClenovi;

		cin >> ime;
		cin >> brojNaTuri;
		cin >> brojNaClenovi;

		planinarskoDrustvo planinarsko(ime, brojNaTuri, brojNaClenovi);
		drustva[i] = planinarsko;
	}

	planinarsko = drustva[0] + drustva[1];
	cout << planinarsko;

	najmnoguClenovi(drustva, 3);
	return 0;
}
