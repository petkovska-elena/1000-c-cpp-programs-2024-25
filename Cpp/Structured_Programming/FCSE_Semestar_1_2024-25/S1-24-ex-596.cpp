//
// Created by Elena Petkovska on 14.8.25.
//

/* Да се развие класа Nediviznina за коjа се чуваат следниве информации:

адреса (динамички алоцирана низа од знаци)
квадратура (цел боj)
цена за квадрат (цел боj)
За оваа класа да се имплементираат соодветните конструктори и следните методи:

cena() коj ќе jа враќа цената на недвижнината (квадратура * цена-за-квадрат)
pecati() коj ќе ги испечати сите информации за истата
danokNaImot() коj го ваќа данокот што се плаќа за недвижнината, а истиот се пресметува како 5% од цената на недвижнината.
Од оваа класа да се изведе класа Vila за коjа дополнително се чува:

данок на луксуз (цел броj, пр. 10%).
За оваа класа да се преоптоварат методите:

pecati()
danokNaImot() со тоа што пресметаниот данок се зголемува процентуално за данокот на луксуз.
И за двете класи треба да се преоптовари operator >>.

Input:
Stan_vo_N.Lisice
35
900
Vila_vo_Zlokukjani
150
700
5

Output:
Stan_vo_N.Lisice, Kvadratura: 35, Cena po Kvadrat: 900
Danok za: Stan_vo_N.Lisice, e: 1575
Vila_vo_Zlokukjani, Kvadratura: 150, Cena po Kvadrat: 700, Danok na luksuz: 5
Danok za: Vila_vo_Zlokukjani, e: 10500 */

#include <iostream>
using namespace std;

class Nedviznina {
protected:
	char *adresa;
	int kvadratura;
	int cenaKvadrat;

public:
	Nedviznina() {
		adresa = new char[0];
	}

	// Copy constructor
	Nedviznina(const Nedviznina &nedviz) {
		adresa = new char [strlen(nedviz.adresa) + 1];
		strcpy(adresa, nedviz.adresa);
		kvadratura = nedviz.kvadratura;
		cenaKvadrat = nedviz.cenaKvadrat;
	}

	Nedviznina &operator=(const Nedviznina &ned) {
		if (this != &ned) {
			delete[] adresa;

			adresa = new char [strlen(ned.adresa) + 1];
			strcpy(adresa, ned.adresa);
			kvadratura = ned.kvadratura;
			cenaKvadrat = ned.cenaKvadrat;
		}

		return *this;
	}

	~Nedviznina() {
		delete[] adresa;
	}

	char *getAdresa() {
		return adresa;
	}

	int cena() {
		return kvadratura * cenaKvadrat;
	}

	float danokNaImot() {
		return (float) 0.05 * cena();
	}

	void pecati() {
		cout << adresa << ", Kvadratura: " << kvadratura << " , Cena po Kvadrat" << cenaKvadrat << endl;
	}

	friend istream &operator>>(istream &in, Nedviznina &ned) {
		in >> ned.adresa >> ned.kvadratura >> ned.cenaKvadrat;
		return in;
	}
};

class Vila : public Nedviznina {
private:
	int danokNaLuksuz;

public:
	Vila() : Nedviznina(){}

	Vila(const Vila &vila) : Nedviznina(vila){
		danokNaLuksuz = vila.danokNaLuksuz;
	}

	Vila &operator=(const Vila &vila) {
		if (this != &vila) {
			delete[] adresa;

			adresa = new char[strlen(vila.adresa) + 1];
			strcpy(adresa, vila.adresa);
			kvadratura = vila.kvadratura;
			cenaKvadrat = vila.cenaKvadrat;
			danokNaLuksuz = vila.danokNaLuksuz;
		}

		return *this;
	}

	~Vila() {}

	void pecati() {
		cout << adresa << ", Kvadratura: " << kvadratura << ", Cena po Kvadrat: " << cenaKvadrat << ", Danok na luksuz: " << danokNaLuksuz << endl;
	}

	float danokNaImot() {
		// :: e scoper resolution operator
		// :: znaci od koj opseg (klasa/namespace) doagja ovaa funkcija ili promenliva
		// Se koristi: koga ima povekje funkcii so isto ime, :: my kazuva na c++ koja tocno da ja povika
		float danok = Nedviznina::danokNaImot();
		float novDanok = ((float) danokNaLuksuz * cena()) / 100;
		return danok + novDanok;
	}

	friend istream &operator>>(istream &in, Vila &vila) {
		in >> vila.adresa >> vila.kvadratura >> vila.cenaKvadrat >> vila.danokNaLuksuz;
		return in;
	}
};

int main() {
	Nedviznina n;
	Vila v;
	cin >> n;
	cin >> v;

	n.pecati();
	cout << "Danok za: " << n.getAdresa() << ", e: " << n.danokNaImot() << endl;

	v.pecati();
	cout << "Danok za: " << v.getAdresa() << ", e: " << v.danokNaImot() << endl;

	return 0;
}
