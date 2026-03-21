//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Konstantni Objekti 3 */

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	string getName() const;
	string getAddress() const;
	string getPhone() const;

	void Show() const;

private:
	string name;
	string addr;
	string phone;

};

string Person::getName() const { return (name); }
string Person::getAddress() const { return (addr); }
string Person::getPhone() const { return (phone); }

void Person::Show() const {
	cout << name << " " << addr << " " << phone << endl;
}

int main() {
	Person P2;
	Person P3;

	P2.Show();
	cout << P2.getName() << endl;
	P3 = P2;

	return 0;
}
