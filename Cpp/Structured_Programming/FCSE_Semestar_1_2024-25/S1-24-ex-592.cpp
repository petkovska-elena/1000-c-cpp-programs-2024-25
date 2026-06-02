//
// Created by Elena Petkovska on 14.8.25.
//

/* Да се напише класа Automobile во која се чуваат информации за марката на автомобилот (динамички алоцирана низа од знаци), регистрација (динамички алоцирана низа од 5 цели броја) и максимална брзина (цел број). За класата да се обезбедат set и get методите што се користат и да се преоптоварат следните оператори:
оператор == за споредување на два автомобила според регистрацијата
оператор << за печатење на податоци на автомобил во формат Marka:име Registracija:[x y z k l]

Да се напише класа RentACar за агенција за измајмување возила во која се чуваат информација за името на агенцијата ( низа од 100 знци), низа од автомобили (динамички алоациана низа од објекти од класата Automobile) и број на автомобили со кој располага (цел број). Во класата RentACar да се напише конструктор со еден аргумент за иницијализација на името на агенцијата. При секое додавање на нов автомобил, динамички алоцираната низа да го зголемува капацитетот за 1 елемент. Во оваа класа да се преоптоварат операторите:
+= за додавање на нов автомобил во агенцијата и
-= за отстранување на даден автомобил од агенцијата (оној со иста регистрација).

Да се напише main функција во која се инстанцира објект од класата RentACar. Во овој објект да се додадат сите автомобили чии информации се читаат од тастатура со операторот +=. Меѓутоа, откриено е дека во внесувањето на податоците има грешка затоа што при обид да се додаде нов автомобил во агенцијата, увидено е дека таа регистрација веќе постои. Во последниот ред од влезот дадени се инфромации тој автомобил. Потребно е да се избрише автомобилот што претходно е погрешно внесен.
На излез да се отпечатат името на агенцијата и листа на автомобили што таа ги изнајмува, а чија максимална брзина е поголема од 150. Последново да се направи со функција pecatiNadBrzina(int max) што треба да се дефинира во класата RentACar.

Влез:
3
Opel 4 5 6 7 4 200
Toyota 2 3 4 1 2 120
Audi 1 2 1 1 1 130
Suzuki 1 2 1 1 1 100
Излез:
Ecode-Car
Marka\tOpel\tRegistracija[ 4 5 6 7 4 ]

Влез:
3
Citroen 4 5 6 7 4 120
Peugeot 2 3 4 1 2 190
Mercedes 1 2 1 2 4 130
BMW 1 2 1 2 4 100
Излез:
Ecode-Car
Marka\tPeugeot\tRegistracija[ 2 3 4 1 2 ]

Влез:
2
Honda 5 3 2 1 5 100
BMW 1 2 4 5 6 200
Peugeot 5 3 2 1 5 100
Излез:
Ecode-Car
Marka\tBMW\tRegistracija[ 1 2 4 5 6 ] */

#include <iostream>
using namespace std;

class Automobile {
// TEST: With Generate Code
/*
public:
	Automobile(const Automobile& other)
		: maxBrzina(other.maxBrzina) {}

	Automobile(Automobile&& other) noexcept
		: maxBrzina(other.maxBrzina) {}

	Automobile& operator=(const Automobile& other) {
		if (this == &other)
			return *this;
		maxBrzina = other.maxBrzina;
		return *this;
	}

	Automobile& operator=(Automobile&& other) noexcept {
		if (this == &other)
			return *this;
		maxBrzina = other.maxBrzina;
		return *this;
	}

	Automobile(const Automobile& other)
		: maxBrzina(other.maxBrzina) {}

	Automobile(Automobile&& other) noexcept
		: maxBrzina(other.maxBrzina) {}

	Automobile& operator=(const Automobile& other) {
		if (this == &other)
			return *this;
		maxBrzina = other.maxBrzina;
		return *this;
	}

	Automobile& operator=(Automobile&& other) noexcept {
		if (this == &other)
			return *this;
		maxBrzina = other.maxBrzina;
		return *this;
	}

private:
	friend bool operator<(const Automobile& lhs, const Automobile& rhs) { return lhs.maxBrzina < rhs.maxBrzina; }
	friend bool operator<=(const Automobile& lhs, const Automobile& rhs) { return !(rhs < lhs); }
	friend bool operator>(const Automobile& lhs, const Automobile& rhs) { return rhs < lhs; }
	friend bool operator>=(const Automobile& lhs, const Automobile& rhs) { return !(lhs < rhs); }
	friend bool operator==(const Automobile& lhs, const Automobile& rhs) { return lhs.maxBrzina == rhs.maxBrzina; }
	friend bool operator!=(const Automobile& lhs, const Automobile& rhs) { return !(lhs == rhs); }

public:
	int max_brzina1() const { return maxBrzina; }
	void set_max_brzina(int max_brzina) { maxBrzina = max_brzina; }

	int max_brzina() const { return maxBrzina; }

private:
	~Automobile() = default;

public:
	explicit Automobile(int max_brzina)
		: maxBrzina(max_brzina) {}

	explicit Automobile(const int max_brzina)
		: maxBrzina(max_brzina) {}

	explicit Automobile(int max_brzina)
		: maxBrzina(max_brzina) {}

	explicit Automobile(int max_brzina)
		: maxBrzina(max_brzina) {}

	explicit Automobile(int max_brzina)
		: maxBrzina(max_brzina) {}

	Automobile() = default;
*/

// class Automobile {
private:
	char *brand;
	int *registration;
	int maxSpeed;

public:
	// Sekogash go pishuvame ova kaj Default-en konstruktor
	Automobile() {
		brand = new char[0];
		registration = new int[0];
	}

	// Konstruktor so Argumenti
	Automobile(char *brand, int *registration, int maxSpeed) {
		this->brand = new char[strlen(brand) + 1];
		strcpy(this->brand, brand);
		this->registration = new int[5];

		for (int i = 0; i < 5;  i++) {
			this->registration = registration[i];
		}

		this->maxSpeed = maxSpeed;
	}

	// Copy Konstruktor
	Automobile(const Automobile &automobile) {
		brand = new char[strlen(automobile.brand) + 1];
		strcpy(brand, automobile.brand);
		registration = new int[5];

		for (int i = 0; i < 5; i++) {
			registration[i] = automobile.registration[i];
		}

		maxSpeed = automobile.maxSpeed;
	}

	Automobile &operator=(const Automobile &automobile) {
		if (this != &automobile) {
			delete[] brand;
			delete[] registration;

			brand = new char[strlen(automobile.brand) + 1];
			strcpy(brand, automobile.brand);
			registration = new int[5];

			for (int i = 0; i < 5; i++) {
				registration[i] = automobile.registration[i];
			}

			maxSpeed = automobile.maxSpeed;
		}

		return *this;
	}

	~Automobile() {
		delete[] brand;
		delete[] registration;
	}

	int getMaxSpeed() {
		return maxSpeed;
	}

	bool operator==(const Automobile &other) {
		return registration == other.registration;
	}

	friend ostream &operator<<(ostream &out, const Automobile &other) {
		out << "Marka \t" << other.brand << "\tRegistracija ";
		for (int i = 0; i < 5; i++) {
			out << other.registration[i] << " ";
		}

		out << "]" << endl;
		return out;
	}
};

class RentACar {
private:
	char name[100];
	Automobile *autos;
	int numAutos;

public:
	RentACar() {
		autos = new Automobile[0];
		numAutos = 0;
	}

	RentACar(char *name) {
		strcpy(this->name, name);
		autos = new Automobile[0];
		numAutos = 0;
	}

	RentACar(const RentACar *renting) {
		strcpy(this->name, renting.name);
		numAutos = renting->numAutos;
		autos = new Automobile[numAutos];

		for (int i = 0; i < numAutos; i++) {
			autos[i] = renting->autos[i];
		}
	}

	RentACar &operator=(const RentACar &renting) {
		if (this != &renting) {
			delete[] autos;

			strcpy(this->name, renting.name);
			numAutos = renting->numAutos;
			autos = new Automobile[numAutos];

			for (int i = 0; i < numAutos; i++) {
				autos[i] = renting->autos[i];
			}
		}
		return *this;
	}

	~RentACar() {
		delete[] autos;
	}

	RentACar &operator+=(const Automobile &other) {
		Automobile *temp = new Automobile[numAutos + 1];
		for (int i = 0; i < numAutos; i++) {
			temp[i] = autos[i];
		}

		temp[numAutos] = other;
		delete[] autos;
		numAutos++;

		autos = new Automobile[numAutos];
		autos = temp;

		return  *this;
	}

	RentACar &operator-=(const Automobile &other) {
		bool flag = false;

		for (int i = 0; i < numAutos; i++) {
			if (autos[i] == other) {
				flag = true;
			}
		}

		if (!flag) return *this;

		Automobile *temp = new Automobile[numAutos -1];
		int index = 0;

		for (int i = 0; i < numAutos; i++) {
			if (!(autos[i] == other)) {
				temp[index] = autos[i];
				++index;
			}
		}

		delete[] autos;
		--numAutos;

		autos = new Automobile[numAutos];
		autos = temp;
	}

	void pecatiNadBrzina(int max) {
		cout << name << endl;
		for (int i = 0; i < numAutos; i++) {
			if (autos[i].getMaxSpeed() > max) {
				cout << autos[i];
			}
		}
	}
};

int main() {
	RentACar agencija("Rent a Fancy Car");
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		char marka[100];
		int registracija[5];
		int maxBrzina;

		cin >> marka;

		for (int i = 0; i < 5; i++) {
			cin >> registracija[i];
		}

		cin >> maxBrzina;

		Automobile nov = Automobile(marka, registracija, maxBrzina);

		// Dodavanje na avtomovil
		agencija += nov;
	}

	// Se cita greshniot avtomovil, za koj shto avtomovilot so ista registracija treba da se izbere
	char marka[100];
	int registracija[5];
	int maxBrzina;

	cin >> marka;
	for (int i = 0; i < 5; i++) {
		cin >> registracija[i];
	}
	cin >> maxBrzina;

	Automobile greshka = Automobile(marka, registracija, maxBrzina);

	// Brishenje na avtomobil
	agencija -= greshka;

	agencija.pecatiNadBrzina(150);

	return 0;
}
