//
// Created by Elena Petkovska on 14.8.25.
//

// Kvalifikaciski
/*
Да се дефинира класа Book во која ќе се чуваат информации за:                              //TODO:
Насловот на книгата (тип: string, со default вредност "TEST BOOK")						   //TODO:
Бројот на страници кои се прочитани (тип: integer, со default вредност 0)                  //TODO:

За класата да се дефинираат:															   //TODO:
Конструктори (согласно кодот во main методот)											   //TODO:
readPages(int pages) - метод кој додава број на прочитани страници.						   //TODO:
Да се внимава прочитаните страници да не го надминат вкупниот број на страници за 200.     //TODO:

print() - метод кој ги печати информациите за книгата во следниот формат:			       //TODO:
TITLE - READ_PAGES/200 - STATUS, каде што статус може да биде:						       //TODO:
IN PROGRESS (ако се прочитани помалку од 100 страници)									   //TODO:
ALMOST DONE (ако се прочитани 100 или повеќе страници, но помалку од 200)			       //TODO:
FINISHED (ако се прочитани сите 200 страници)											   //TODO:
*/

#include<iostream>
using namespace std;

class Book
{
private:
	string name;
	int pages;

public:
	// Default constructor
	Book() {
		name = "TEST BOOK";
		pages = 0;
	}

	// Constructor1
	Book (string name) {
		this->name = name;
		pages = 0;
	}

	// Constructor2
	Book (string name, int pagesRead) {
		this->name = name;
		pages = pagesRead;
		if (pages > 200)
		{
			pages = 200;
		}
	}

	void readPages(int p) {
		pages += p;
		if (pages > 200)
		{
			pages = 200;
		}
	}

	void print() {
		string status;
		if (pages < 100)
		{
			status = "IN PROGRESS";
		} else if (pages >= 100 && pages < 200)
		{
			status = "ALMOST DONE";
		} else
		{
			status = "FINISHED";
		}

		cout << name << " - " << pages << "/200" << " - " << status << endl;
	}
};

int main() {
	string command;
	Book s;
	string name;
	int pagesRead;

	while (cin >> command) {
		if (command == "constructor1") {
			cin >> name >> pagesRead;
			s = Book(name, pagesRead);
		} else if (command == "constructor2") {
			cin >> name;
			s = Book(name);
		} else if (command == "readPages") {
			cin >> pagesRead;
			s.readPages(pagesRead);
		} else if (command == "print") {
			s.print();
		}
	}

	return 0;
}