//
// Created by Elena Petkovska on 14.8.25.
//

/*  Да се креира класа Customer за опишување на купувачи на една книжара. За секој купувач се чуваат податоци за:

името (низа од 50 знаци),
електронска адреса (низа од 50 знаци),
вид на купувач (стандардни, лојални или вип),
основен попуст (цел број изразен во проценти),
дополнителен попуст (цел број изразен во проценти) и
број на купени производи.
Сите лојални купувачи со покажување на клуб картичка имаат право на основниот попуст при купување од книжарата. Основниот попуст е ист за сите лојални купувачи и изнесува 10%. Оваа вредност може да се смени со одлука на раководството на книжарата. Дополнителниот попуст е фиксен и може да го користат само вип купувачите и изнесува 20%. Стандардните купувачи немаат право на попуст.

За оваа класа да се имплементира оператор << за печатење на купувач во формат:Да се креира класа Customer за опишување на купувачи на една книжара. За секој купувач се чуваат податоци за:

името (низа од 50 знаци),
електронска адреса (низа од 50 знаци),
вид на купувач (стандардни, лојални или вип),
основен попуст (цел број изразен во проценти),
дополнителен попуст (цел број изразен во проценти) и
број на купени производи.
Сите лојални купувачи со покажување на клуб картичка имаат право на основниот попуст при купување од книжарата. Основниот попуст е ист за сите лојални купувачи и изнесува 10%. Оваа вредност може да се смени со одлука на раководството на книжарата. Дополнителниот попуст е фиксен и може да го користат само вип купувачите и изнесува 20%. Стандардните купувачи немаат право на попуст.

За оваа класа да се имплементира оператор << за печатење на купувач во формат:

[ime_na_kupuvac]
[email_na_kupuvac
[broj_na_proizvodi]
[vid_na_kupuvac] [popust_sto_moze_da_go_koristi]

каде попустот е 0% ако купувачот е стандарден, вредноста на основниот попуст, ако е лојален или збир од основниот и дополнителниот попуст, ако купувачот е вип.

Да се креира класа за онлајн книжара eBookstore во која се чува низа од регистрирани купувачи (динамички алоцирана низа) и број на купувачи. За класата да се обезбедат:

operator+= (10 поени) за додавање купувач во листата од купувачи, но само ако веќе не е дел од неа (ако во листата нема купувач со иста електронска адреса). Ако во листата постои корисник со иста електронска адреса, треба да се генерира исклучок UserExistsException. Потребно е да се обезбеди справување со исклучокот во функцијата main на означеното место. Во ваква ситуација се печати порака "The user already exists in the list"
Функција update со која сите стандардни купувачи со купени повеќе од 5 производи стануваат лојални, а сите лојални купувачи со над 10 купени производи, стануваат вип
Оператор << за печатење на информациите за сите регистрирани купувачи . Да се обезбедат сите дополнителни методи потребни за правилно функционирање на програмата. */

#include <iostream>
#include <cstring>
#include <ostream>
using namespace std;

#define MAX 100

enum typeC {
	standard = 0,
	loyal = 1,
	vip = 2
};

class UserExistsException {
public:
	UserExistsException() {}

	void pecati() { cout << "This user already exists in the list." << endl; }
};

class Customer {
private:
	char ime[50];
	char adresa[50];
	typeC kupuvac;
	static int popust;
	const static int dopPopust;
	int brojProizvodi;

public:
	Customer() {}

	Customer(char* ime, char* adresa, typeC kupuvac, int brojProizvodi) {
		strcpy(this->ime, ime);
		strcpy(this->adresa, adresa);
		this->kupuvac = kupuvac;
		this->brojProizvodi = brojProizvodi;
	}

	// Copy contructor
	Customer(const Customer& customer) {
		strcpy(ime, customer.ime);
		strcpy(adresa, customer.adresa);
		kupuvac = customer.kupuvac;
		brojProizvodi = customer.brojProizvodi;
	}

	~Customer() {}

	static void setDiscount1(int osnoven) { popust = osnoven; }

	char* getAdresa() { return adresa; }

	int getBrojProizvodi() { return brojProizvodi; }

	typeC getTip() { return kupuvac; }

	void setKupuvac(typeC kupuvac) { this->kupuvac = kupuvac; }

	int popustSporedTip() {
		if (kupuvac == 0) { return 0; }
		else if (kupuvac == 1) { return popust; }

		return popust + dopPopust;
	}

	friend ostream& operator<<(ostream& os, Customer& customer) {
		os << customer.ime << endl;
		os << customer.adresa << endl;
		os << customer.brojProizvodi << endl;

		if (customer.kupuvac == standard) { os << "standard "; }
		else if (customer.kupuvac == loyal) { os << "loyal "; }
		else { os << "vip "; }

		os << customer.popustSporedTip() << endl;
		return os;

		/* With generate
	  friend std::ostream& operator<<(std::ostream& os, const Customer& obj) {
	  return os
		<< "kupuvac: " << obj.kupuvac
		<< " brojProizvodi: " << obj.brojProizvodi;
	  } */
	}
};

int Customer::popust = 10;
const int Customer::dopPopust = 20;

class eBookstore {
private:
	Customer* customers;
	int numCustomers;

public:
	eBookstore() {
		customers = new Customer[0];
		numCustomers = 0;
	}

	//    eBookstore(const eBookstore &eb) {
	//        numCustomers = eb.numCustomers;
	//        customers = new Customer[numCustomers];
	//        for (int i = 0; i < numCustomers; i++) {
	//            customers[i] = eb.customers[i];
	//        }
	//    }
	//
	//    eBookstore &operator=(const eBookstore &eb) {
	//        if (this != &eb) {
	//            delete[] customers;
	//            numCustomers = eb.numCustomers;
	//            customers = new Customer[numCustomers];
	//            for (int i = 0; i < numCustomers; i++) {
	//                customers[i] = eb.customers[i];
	//            }
	//        }
	//
	//        return *this;
	//    }

	~eBookstore() { delete[] customers; }

	void setCustomers(Customer* customers, int n) {
		numCustomers = n;
		this->customers = new Customer[numCustomers];

		for (int i = 0; i < numCustomers; i++) { this->customers[i] = customers[i]; }
	}

	eBookstore& operator+=(Customer& nov) {
		for (int i = 0; i < numCustomers; i++) {
			if (strcmp(customers[i].getAdresa(), nov.getAdresa()) == 0) { throw UserExistsException(); }
		}

		Customer* tmp = new Customer[numCustomers + 1];
		for (int i = 0; i < numCustomers; i++) { tmp[i] = customers[i]; }

		tmp[numCustomers] = nov;
		delete[] customers;
		++numCustomers;
		customers = new Customer[numCustomers];
		for (int i = 0; i < numCustomers; i++) { customers[i] = tmp[i]; }

		return *this;
	}

	void update() {
		for (int i = 0; i < numCustomers; i++) {
			if (customers[i].getTip() == standard && customers[i].getBrojProizvodi() > 5) {
				customers[i].setKupuvac(loyal);
			} else if (customers[i].getTip() == loyal && customers[i].getBrojProizvodi() > 10) {
				customers[i].setKupuvac(vip);
			}
		}
	}

	friend ostream &operator<<(ostream &os, eBookstore &eb) {
		for (int i = 0; i < eb.numCustomers; i++) {
			os << eb.customers[i];
		}

		return os;
	}
};

int main() {
	int testCase;
	cin >> testCase;

	char name[MAX];
	char email[MAX];
	int tC;
	int discount;
	int numProducts;


	if (testCase == 1) {
		cout << "===== Test Case - Customer Class ======" << endl;
		cin.get();
		cin.getline(name, MAX);
		cin.getline(email, MAX);
		cin >> tC;
		cin >> numProducts;
		cout << "===== CONSTRUCTOR ======" << endl;
		Customer c(name, email, (typeC)tC, numProducts);
		cout << c;
	}

	if (testCase == 2) {
		cout << "===== Test Case - Static Members ======" << endl;
		cin.get();
		cin.getline(name, MAX);
		cin.getline(email, MAX);
		cin >> tC;
		cin >> numProducts;
		cout << "===== CONSTRUCTOR ======" << endl;
		Customer c(name, email, (typeC)tC, numProducts);
		cout << c;

		c.setDiscount1(5);

		cout << c;
	}

	if (testCase == 3) {
		cout << "===== Test Case - ECODE-bookstore ======" << endl;
		eBookstore fc;
		int n;
		cin >> n;
		Customer customers[MAX];
		for (int i = 0; i < n; ++i) {
			cin.get();
			cin.getline(name, MAX);
			cin.getline(email, MAX);
			cin >> tC;
			cin >> numProducts;
			Customer c(name, email, (typeC)tC, numProducts);
			customers[i] = c;
		}

		fc.setCustomers(customers, n);

		cout << fc << endl;
	}

	if (testCase == 4) {
		cout << "===== Test Case - operator+= ======" << endl;
		eBookstore fc;
		int n;
		cin >> n;
		Customer customers[MAX];
		for (int i = 0; i < n; ++i) {
			cin.get();
			cin.getline(name, MAX);
			cin.getline(email, MAX);
			cin >> tC;
			cin >> numProducts;
			Customer c(name, email, (typeC)tC, numProducts);
			customers[i] = c;
		}

		fc.setCustomers(customers, n);
		cout << "OPERATOR +=" << endl;
		cin.get();
		cin.getline(name, MAX);
		cin.getline(email, MAX);
		cin >> tC;
		cin >> numProducts;
		Customer c(name, email, (typeC)tC, numProducts);
		try { fc += c; }
		catch (UserExistsException& uee) { uee.pecati(); }

		cout << fc;
	}

	if (testCase == 5) {
		cout << "===== Test Case - operator+= (exception) ======" << endl;
		eBookstore fc;
		int n;
		cin >> n;
		Customer customers[MAX];
		for (int i = 0; i < n; ++i) {
			cin.get();
			cin.getline(name, MAX);
			cin.getline(email, MAX);
			cin >> tC;
			cin >> numProducts;
			Customer c(name, email, (typeC)tC, numProducts);
			customers[i] = c;
		}

		fc.setCustomers(customers, n);
		cout << "OPERATOR +=" << endl;
		cin.get();
		cin.getline(name, MAX);
		cin.getline(email, MAX);
		cin >> tC;
		cin >> numProducts;
		Customer c(name, email, (typeC)tC, numProducts);
		try { fc += c; }
		catch (UserExistsException& uee) { uee.pecati(); }

		cout << fc;
	}

	if (testCase == 6) {
		cout << "===== Test Case - update method  ======" << endl << endl;
		eBookstore fc;
		int n;
		cin >> n;
		Customer customers[MAX];
		for (int i = 0; i < n; ++i) {
			cin.get();
			cin.getline(name, MAX);
			cin.getline(email, MAX);
			cin >> tC;
			cin >> numProducts;
			Customer c(name, email, (typeC)tC, numProducts);
			customers[i] = c;
		}

		fc.setCustomers(customers, n);

		cout << "Update:" << endl;
		fc.update();
		cout << fc;
	}
	return 0;
}
