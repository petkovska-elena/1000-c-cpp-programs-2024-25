//
// Created by Elena Petkovska on 14.8.25.
//

/*
Да се дефинира класа Film, во која ќе се чуваат информации за:
- име – низа од 100 знаци
- режисер – низа од 50 знаци
- жанр – низа од 50 знаци
- година – цел број

Сите променливи треба да бидат приватни. Соодветно во рамките на класата
да се дефинираат:
- default конструктор и конструктор со аргументи
- метод за печатење на информациите за филмот

Дополнително да се реализира надворешна функција:
- void pecati_po_godina(Film *f, int n, int godina)
која ќе прима аргумент низа од филмови, вкупниот број на филмови и година,
а треба да ги отпечати само филмовите кои се направени во дадената година.

Vlez:                   Izlez:
4                       Ime: Wall-E
Frankenweenie           Reziser: Andrew_Stanton
Tim_Burton              Zanr: Animation
Animation               Godina: 2008
2012
Lincoln
Steven_Spielberg
History
2012
Wall-E
Andrew_Stanton
Animation
2008
Avatar
James_Cameron
Fantasy
2009
2008
*/

#include <iostream>
#include <cstring>
using namespace std;

class Film
{
private:
	char name[100];
	char rezhiser[50];
	char zhanr[50];
	int godina;

public:
	// Default konstruktor: se stavaat vrednosti samo ako ima potreba da se definiraat default vrednost. pr:
	Film() {
		// strcpy(name, "Name");
	}

	// Konstruktor so argumenti
	// * means pointer. A pointer is a variable that stores an address, not a value
	Film(char* name, char* rezhiser, char* zhanr, int godina) {
		strcpy(this->name, name);
		strcpy(this->rezhiser, rezhiser);
		strcpy(this->zhanr, zhanr);
		this->godina = godina;
	}

	~Film() { }

	//TODO Make getter and setter methods for ime, rezhiser, zhanr
    char* getName(){
		return name;
    }

	char* getRezhiser() {
		return rezhiser;
	}

	char* getZhanr() {
		return zhanr;
	}

	int getGodina() {
		return godina;
	}

	void setName(char* name_) {
		strcpy(name, name_);
	}
	void setName2(char* name) {
		strcpy(this->name, name);
	}

	void setRezhiser(char* rezhiser_) {
		strcpy(rezhiser, rezhiser_);
	}
	void setRezhiser1(char* rezhiser) {
		strcpy(this->rezhiser, rezhiser);
	}

	void setZhanr(char* zhanr_) {
		strcpy(zhanr, zhanr_);
	}
	void setZhanr1(char* zhanr) {
		strcpy(this->zhanr, zhanr);
	}

	void setGodina(int godina_) {
		godina=godina_;
	}
	void setGodina1(int godina) {
		this->godina = godina;
	}

	void pechatiPodatoci() {
		cout << "Ime: " << name << endl;
		cout << "Rezhiser: " << rezhiser << endl;
		cout << "Zhanr: " << zhanr << endl;
		cout << "Godina: " << godina << endl;
	}
};

// Nadvoreshna (Globalna) Funkcija
// [film("Franenweenie", "Tim_Burton", "Animation", 2012), film("Lincoln", "Steven_Spielberg", "History", 2012)]
void pecati_po_godina(Film *filmovi, int n, int godina) {
	for (int i = 0; i < n; i++)
	{
		if (filmovi[i].getGodina() == godina)
		{
			filmovi[i].pechatiPodatoci();
		}
	}
}

int main() {
	int n;
	cin >> n;

	// Inicijaliziranje na niza of filmovi so n golemina
	Film filmovi[n];

	for (int i = 0; i < n; i++)
	{
		char name[100];
		char rezhiser[50];
		char zhanr[50];
		int godina;
		cin >> name >> rezhiser >> zhanr >> godina;

		Film film(name, rezhiser, zhanr, godina);
		filmovi[i] = film;
	}

	int godina;
	cin >> godina;

	pecati_po_godina(filmovi, n, godina);
	return 0;
}
