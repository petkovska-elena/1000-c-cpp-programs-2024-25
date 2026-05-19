//
// Created by Elena Petkovska on 14.8.25.
//

// Klasi i Objekti
/*
Опис
Во оваа задача треба да имплементираме класа Chovek во C++, која претставува човек со основни лични податоци.
Програмата демонстрира како се користат конструктори, гетери, сетери и методи во C++.

Атрибути
Класата ги содржи следните приватни членови:
- ime (име) - низа од 50 карактери
- prezime (презиме) - низа од 50 карактери
- godini (возраст) - целобројна променлива
- EMBG (единствен матичен број на граѓанинот) - текстуална променлива

Функционалности
1. Конструктори:
- Default конструктор, кој иницијализира празни или стандардни вредности.
За име и презиме default вредност нека биде Nepoznato, за години нека биде 0 и за EMBG нека биде 0000000000000.
- Конструктор со параметри, кој овозможува иницијализација на сите атрибути.
2. Getter и Setter методи - за пристап и измена на атрибутите.
3. Метода pecatiPodatoci() - печати податоци во формат:

Ime Prezime Godini EMBG

Пример за очекуван излез:
Nepoznato Nepoznato 0 0000000000000
Ecode MK 30 1234567890123
Jovan Srbinovski 25 2345678900123
*/

#include <iostream>
#include <cstring>
using namespace std;

class Chovek
{
private:
	char ime[50];
	char prezime[50];
	int godini;
	long long EMBG;

public:
	//Default constructor (nema atributi vnatre zatoa shto e defaulten)
	Chovek() {
		strcpy(ime, "Nepoznato");                   // strcpy, string copy, od cstring bibliotekata
		strcpy(prezime, "Nepoznato");               // Vrednostite od "" se kopiraat vo definiranite destinacii ime i prezime
		int godini = 0;
		long long EMBG = 0000000000000;
	}

	//Definiranje na konstruktorot so argumenti
	Chovek (char *ime, char *prezime, int godini, long long EMBG) {
		strcpy (this->ime, ime);
		strcpy (this->prezime, prezime);
		this->godini = godini;
		this->EMBG = EMBG;
	}

	~Chovek() {}

	char *getIme() {
		return ime;
	}

	char *getPrezime() {
		return prezime;
	}

	int getGodini() {
		return godini;
	}

	long long getEMBG() {
		return EMBG;
	}

	void setIme(char *ime) {
		strcpy(this->ime, ime);
	}

	void setPrezime(char *prezime) {
		strcpy(this->prezime, prezime);
	}

	void setGodini(int godini) {
		this->godini = godini;
	}

	void setEMBG(long long EMBG) {
		this->EMBG = EMBG;
	}

	void pecatiPodatoci() {
		cout << ime << " " << prezime << " " << godini << " " << EMBG << endl;
	}
};

int main() {
	// Default Konstruktor
	Chovek chovek;
	cout << "Default" << endl;
	chovek.pecatiPodatoci();

	chovek.setIme("Elena");
	chovek.setPrezime("Panta-Rei");
	chovek.setGodini(20);
	chovek.setEMBG(1122334455667);

	cout << endl;
	cout << "Updated" << endl;
	chovek.pecatiPodatoci();

	// Konstruktor so Argumenti
	Chovek chovek1("Djordje", "Balasevic", 67, 2345678900123);
	chovek1.pecatiPodatoci();

	cout << endl;
	cout << "So pomosh na getteri" << endl;
	cout << chovek1.getIme() << " " << chovek1.getPrezime() << " " << chovek1.getGodini() << " " << chovek1.getEMBG() << endl;
	return 0;
}
