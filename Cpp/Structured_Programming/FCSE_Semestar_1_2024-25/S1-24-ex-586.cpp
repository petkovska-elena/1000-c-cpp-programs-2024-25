//
// Created by Elena Petkovska on 14.8.25.
//

/*
Car
Во оваа задача треба да се внесат и испечатат податоци за автомобили.

За еден автомобил (објект од класата Car) се чуваат следните податоци:
- сопственик (објект од класата Person)
- датум на купување (објект од класата Date)
- цена (float price), предодредена вредност 0

За класата Car потребно е да се напише:
- метод за печатење print()
- метод за добивање на цената getPrice()

Класата Date содржи три цели броеви:
- int year
- int month
- int day

Тие го претставуваат датумот.
За класата Date треба да се напишат:
- метод за печатење print()
- предодреден (default) конструктор
- конструктор со параметри
- конструктор за копирање

Класата Person содржи:
- име (низа од максимум 20 знаци)
- презиме (низа од максимум 20 знаци)
Со предодредени вредности "not specified".

За класата Person треба да се напишат:
- предодреден конструктор
- конструктор со параметри
- метод за печатење print()

Методот за печатење кај класата Person изгледа вака:
[name] [lastName]

Методот за печатење кај класата Date изгледа вака:
[year].[month].[day]

Методот за печатење кај класата Car изгледа вака:
owner.print() date.print() Price: [price]

Покрај тоа, потребно е да се напише метод:
cheaperThan(Car* cars, int numCars, float price)

Овој метод треба да ги испечати сите објекти Car од низата cars
со големина numCars, чија цена е помала од price.

Влез:
   2
   Petre
   Petreski
   2018
   07
   31
   410020
Излез:
   Petre Petreski
   2018.7.31
   Price: 410020


Влез:
   3
   3
   Riste
   Risteski
   2019
   12
   12
   230000
   Petre
   Petreski
   2018
   07
   31
   410020
   Trajche
   Trajcheski
   2017
   03
   07
   575000
   300000
Излез:
   Riste Risteski
   2019.12.12
   Price: 230000
*/

#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
	char name[20], lastName[20];

public:
	// DEFAULT CONSTRUCTOR
	Person() {
		strcpy(name, "Not Specified");
		strcpy(lastName, "Not Specified");
	}

	// CONSTRUCTOR SO ARGUMENTI
	Person (char *name, char *lastName) {
		strcpy(this->name, name);
		strcpy(this->lastName, lastName);
	}

	// COPY CONSTRUCTOR
	Person (const Person &person) {
		strcpy(this->name, person.name);
		strcpy(this->lastName, person.lastName);
	}

	~Person() {}

	void print() {
		cout << name << " " << lastName << endl;
	}
};

class Date {
private:
	int year, month, day;

public:
	Date() {}

	Date (int year, int month, int day) {
		this->year = year;
		this->month = month;
		this->day = day;
	}

	// IMPLEMENTIRANJE NA COPY CONSTRUKTOROT
	Date (const Date &date) {
		this->year = date.year;
		this->month = date.month;
		this->day = date.day;
	}

	~Date() {}

	void print() {
		cout << year << "." << month << "." << day << endl;
	}
};

class Cars {
private:
	Person person;
	Date date;
	float price;

public:
	Cars() {
		price = 0;
	}

	Cars(Person person, Date date, float price) {
		this->person = person;
		this->date = date;
		this->price = price;
	}

	~Cars(){}

	float getPrice() {
		return price;
	}

	void print() {
		person.print();
		date.print();
		cout << "Price: " << price << endl;
	}
};

void cheaperThan(Cars *cars, int numCars, float price) {
	for (int i = 0; i < numCars; i++){
		if (cars[i].getPrice() < price) {
			cars[i].print();
		}
	}
}
int main() {
	char name[20], lastName[20];
	int year, month, day;
	float price;

	int testCase;
	cin >> testCase;

	if (testCase == 1) {
		cin >> name >> lastName;
		Person lik(name, lastName);

		cin >> year >> month >> day;
		Date date(year, month, day);

		cin >> price;
		Cars car(lik, date, price);

		car.print();
	} else if (testCase == 2) {
		cin >> name >> lastName;
		Person lik(name, lastName);

		cin >> year >> month >> day;
		Date date(Date(year, month, day));

		cin >> price;
		Cars car (lik, date, price);
		car.print();
	} else {
		int numCars;
		cin >> numCars;

		Cars cars[10];
		for (int i = 0; i < numCars; i++) {
			cin >> name >> lastName;
			Person lik(name, lastName);

			cin >> year >> month >> day;
			Date date(year, month, day);

			cin >> price;
			cars[i] = Cars(lik, date, price);
		}

		float priceLimit;
		cin >> priceLimit;
		cheaperThan(cars, numCars, priceLimit);
	}

	return 0;
}
