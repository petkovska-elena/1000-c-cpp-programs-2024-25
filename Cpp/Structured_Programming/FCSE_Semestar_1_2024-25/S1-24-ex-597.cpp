//
// Created by Elena Petkovska on 14.8.25.
//

/* Да се дефинира класа Vozilo која ќе содржи информација за неговата маса (децимален број), ширина и висина (цели броеви).

Од оваа класа да се изведе класата Автомобил во која како дополнителна информација се чува информацијата за бројот на врати (цел број).
Од класата возило да се изведе и класата Автобус во која се чуваат информации и за бројот на патници кои може да ги пренесува.
Од класата возило да се изведе класата Камион во која се чуваат информации и за максималната маса која може да се товари на него (децимална вредност).

За сите класи да се креираат погодни контруктори, како и set и get функции.
Да се дефинира класа ParkingPlac за која се чува динамичко алоцирано поле од покажувачи кон Vozilo, како и бројот на елементи во полето. Во оваа класа да се дефинираат:

конструктор
деструктор
операторот += за додавање на ново возило (аргументот е покажувач кон Vozilo)
функција float presmetajVkupnaMasa() со која се пресметува вкупната маса на сите возила во паркинг плацот
функција int brojVozilaPoshirokiOd(int l) со која се пресметува бројот на возила кои се пошироки од дадената вредност
функција void pecati() со која се печати: Brojot na avtomobili e X, brojot na avtobusi e Y i brojot na kamioni e Z.
функција int pogolemaNosivostOd(Vozilo& v) во која се враќа бројот на сите камиони кои имаат носивост поголема од масата на возилото предадено како аргумент.
Да се дефинира виртуелна функција int vratiDnevnaCena() во класата Vozilo и истата да се преоптовари во сите изведени класи. За секој автомобил со помалку од 5 врати дневната цена е 100, а инаку е 130 денари. За секој камион цената се пресметува со формулата: (masa+nosivost)*0.02. За секој автобус цената е 5 денари по лице кое може да се пренесува.
Во класата ParkingPlac да се додаде следната функција: - функција int vratiDnevnaZarabotka() со која се враќа дневната заработка од сите возила на паркингот.

Input:

3
1 1300 3 2 3
2 4500 10 4 45
3 6000 8 5 2000

Output:
Brojot na avtomobili e 1, brojot na avtobusi e 1 i brojot na kamioni e 1.

Zarabotkata e 485
Vkupnata masa e 11800
Brojot poshiroki od 5 e 2
Brojot na kamioni so nosivost pogolema od avtomobilot e 1
 */

#include <iostream>
using namespace std;

class Vozilo {
protected:
	float masa;
	int shirina;
	int visina;

public:
	Vozilo() {}

	Vozilo(float masa, int shirina, int visina) {
		this->masa = masa;
		this->shirina = shirina;
		this->visina = visina;
	}

	Vozilo(const Vozilo& vozilo) {
		masa = vozilo.masa;
		shirina = vozilo.shirina;
		visina = vozilo.visina;
	}

	~Vozilo() {}

	float getMasa() { return masa; }

	float getShirina() { return shirina; }

	// CISTO VIRTUELNA FUNKCIJA, NE SMEE DA IMA TELO
	// Ne presmetuva nisto, ne vrakja vrednost, ne se izvrshuva - samo pravilo
	// Funkcijata ke se izvrshuva samo koga od ovaa cisto virtuelna funckija ke ja iskoristime vo izvedena klasa
	virtual int vratiDnevnaCena() = 0;
};


class Avtomobil : public Vozilo {
private:
	int brojVrati;

public:
	Avtomobil() : Vozilo() {}

	Avtomobil(float masa, int shirina, int visina, int brojVrati) : Vozilo(masa, shirina, visina) {
		this->brojVrati = brojVrati;
	}

	Avtomobil(const Avtomobil& a) : Vozilo(a) { brojVrati = a.brojVrati; }

	~Avtomobil() {}

	int vratiDnevnaCena() {
		// return brVrati < 5 ? 100 : 130;
		if (brojVrati < 5) return 100;
		return 130;
	}
};

class Avtobus : public Vozilo {
private:
	int brojPatnici;

public:
	Avtobus() : Vozilo() {}

	Avtobus(float masa, int shirina, int visina, int brojPatnici) : Vozilo(masa, shirina, visina) {
		this->brojPatnici = brojPatnici;
	}

	Avtobus(const Avtobus& avtobus) : Vozilo(avtobus) { brojPatnici = avtobus.brojPatnici; }

	~Avtobus() {}

	int vratiDnevnaCena() { return brojPatnici * 5; }
};

class Kamion : public Vozilo {
private:
	float nosivost;

public:
	Kamion() : Vozilo() {}

	Kamion(float masa, int shirina, int visina, float nosivost) : Vozilo(masa, shirina, visina) {
		this->nosivost = nosivost;
	}

	Kamion(const Kamion& kamion) : Vozilo(kamion) { nosivost = kamion.nosivost; }

	~Kamion() {}

	float getNosivost() { return nosivost; }

	// Za sekoj kamion cenata se presmetuva so formulata:
	// (masa + nosivost) * 0.02
	int vratiDnevnaCena() { return (masa + nosivost) * 0.02; }
};

class ParkingPlac {
private:
	Vozilo** vozila;
	int brojVozila;

public:
	ParkingPlac() {
		vozila = new Vozilo*[0];
		brojVozila = 0;
	}

	ParkingPlac(const ParkingPlac& pp) {
		brojVozila = pp.brojVozila;
		vozila = new Vozilo*[brojVozila];

		for (int i = 0; i < brojVozila; i++) { vozila[i] = pp.vozila[i]; }
	}

	ParkingPlac& operator=(const ParkingPlac& pp) {
		if (this != &pp) {
			delete[] vozila;

			vozila = new Vozilo*[brojVozila];
			for (int i = 0; i < brojVozila; i++) { vozila[i] = pp.vozila[i]; }
		}

		return *this;
	}

	~ParkingPlac() { delete[] vozila; }

	ParkingPlac& operator+=(Vozilo* vozilo) {
		Vozilo** temp = new Vozilo*[brojVozila + 1];

		for (int i = 0; i < brojVozila; i++) { temp[i] = vozila[i]; }

		temp[brojVozila] = vozilo;
		delete[] vozila;
		brojVozila++;

		vozila = new Vozilo*[brojVozila];
		for (int i = 0; i < brojVozila; i++) { vozila[i] = temp[i]; }

		return *this;
	}

	float presmetajVkupnaMasa() {
		float vkupno = 0;
		for (int i = 0; i < brojVozila; i++) { vkupno += vozila[i]->getMasa(); }

		return vkupno;
	}

	int brojVozilaPoshirokiOd(int value) {
		int brojac = 0;

		for (int i = 0; i < brojVozila; i++) { if (vozila[i]->getShirina() > value) { brojac++; } }

		return brojac;
	}

	void pecati() {
		int brojacAvtomobili = 0, brojacAvtobusi = 0, brojacKamioni;

		for (int i = 0; i < brojVozila; i++) {
			Avtomobil* avtomobil = dynamic_cast<Avtomobil*>(vozila[i]);
			Avtobus* avtobus = dynamic_cast<Avtobus*>(vozila[i]);

			if (avtomobil) { brojacAvtomobili++; }
			else if (avtobus) { brojacAvtobusi++; }
			else { brojacKamioni++; }
		}

		cout << "Brojot na avtomobili e " << brojacAvtomobili << ", brojot na avtobusi e " << brojacAvtobusi
			<< " i brojot na kamioni e " << brojacKamioni << endl;
	}

	int pogolemaNosivostOd(Vozilo& vozilo) {
		int brojac = 0;
		for (int i = 0; i < brojVozila; i++) {
			Kamion* kamion = dynamic_cast<Kamion*>(vozila[i]);

			if (kamion) { if (kamion->getNosivost() > vozilo.getMasa()) { brojac++; } }
		}
		return brojac;
	}

	int vratiDnevnaZarabotka() {
		int vkupno = 0;
		for (int i = 0; i < brojVozila; i++) { vkupno += vozila[i]->vratiDnevnaCena(); }

		return vkupno;
	}
};

int main() {
	ParkingPlac p;

	int n;
	cin >> n;
	int shirina, visina, broj;
	float masa, nosivost;
	for (int i = 0; i < n; i++) {
		int type;
		cin >> type;
		if (type == 1) {
			cin >> masa >> shirina >> visina >> broj;
			Avtomobil* a = new Avtomobil(masa, shirina, visina, broj);
			p += a;
		}
		if (type == 2) {
			cin >> masa >> shirina >> visina >> broj;
			p += new Avtobus(masa, shirina, visina, broj);
		}
		if (type == 3) {
			cin >> masa >> shirina >> visina >> nosivost;
			p += new Kamion(masa, shirina, visina, nosivost);
		}
	}

	p.pecati();

	cout << "\nZarabotkata e " << p.vratiDnevnaZarabotka() << endl;
	cout << "Vkupnata masa e " << p.presmetajVkupnaMasa() << endl;
	cout << "Brojot poshiroki od 5 e " << p.brojVozilaPoshirokiOd(5) << endl;
	Avtomobil a(1200, 4, 3, 5);
	cout << "Brojot na kamioni so nosivost pogolema od avtomobilot e " << p.pogolemaNosivostOd(a) << endl;


	return 0;
}
