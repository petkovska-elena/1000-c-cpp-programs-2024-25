//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Konstantni Objekti 1 & 2 */

#include <iostream>
#include <string>
using namespace std;

class Person
{
	enum {NamLen = 20, AdrLen = 30, PhoneLen = 10};

public:
	Person (string n = "", string a = "-nepoznata-", string p = "-nepoznato-");

	void setName(string);
	void setAddress(string);
	void setPhone(string);

	void Show();

private:
	string name;          // name of person
	string addr;          // address of person
	string phone;         // phone number
};

Person::Person(string n, string a, string p) {
	name = n;
	addr = a;
	phone = p;
}

void Person::setName(string n) {name = n;}
void Person::setAddress(string a) {addr = a;}
void Person::setPhone(string p) {phone = p;}

string Person::getName() {return(name);}
string Person::getAddress() {return(addr);}
string Person::getPhone() {return(phone);}

void Person::Show() {
	cout << name << " " << addr << " " << phone << endl;
}

int main() {
	Person P1("Nekoj", "somebody@network.net");
	const Person P2("Drug", "other@else.com", "5551234");
	Person P3;

	cout << P1.getName() << endl;
	P1.setName("Ovoj");
	P1.Show();

	// P2.Show();                      // Ne mozhe!
	// cout << P2.getName() << endl;   // Ne mozhe!
	P3 = P2;

	return 0;
}
