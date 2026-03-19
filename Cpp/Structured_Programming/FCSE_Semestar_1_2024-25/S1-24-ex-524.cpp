//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Objekti vo Objekti - Kompozicija na Objekti */

#include <iostream>
#include <cstring>
using namespace std;

class Charr
{
	enum {CharrSize = 40};

private:
	char arr[CharrSize + 1];
public:
	Charr(const char *);             // Charr constructor
	~Charr();                        // Charr destructor

	void Show(void) const { cout << arr;}
};

Charr::Charr(const char * a) {
	cout << "\t * Constructing Charr: " << a << endl;
	strncpy(arr, a, CharrSize);
	arr[CharrSize] = '\0';
};

Charr::~Charr() {
	cout << "\t#Destructing Charr: " << arr << endl;
};

class Person
{
private:
	Charr name;
	Charr surname;
	int level;

public:
	Person(int lv,  char *name, char *sname);
	~Person();
	void Show (void) const;
};

Person::Person(int lv, char *name, char *sname):name(name), surname(sname) {
	cout << "\t*Constructing Person: " << name << ' ' << sname << ' ' << lv << endl;
	level = lv;
}

Person::~Person() {
	cout << "\t#Destucting Person: ";
	name.Show();
	cout << ' ';
	surname.Show();
	cout << level << endl;
}

void Person::Show(void) const {
	name.Show();
	cout << ' ';
	surname.Show();
	cout << ' ';
	cout << level;
}

int main() {
	Charr a("Hello");
	const Charr b("World");

	Person y(1, "A1", "Capone");

	a.Show();
	cout << endl;
	{
		Person
		x(1, "Tony", "Luchiano");
		x.Show();
		cout << endl;
		y.Show();
		cout << endl;
	}

	b.Show();
	cout << endl;

	return 0;
}
