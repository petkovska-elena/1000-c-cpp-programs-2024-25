//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Konstruktori i Destruktori */

#include <iostream>
#include <cstring>
using namespace std;

class Test
{
public:
	// Konstruktor so eden argument
	Test (const char *name);
	~Test() {
		cout << "Unisten Test object " << ime << endl;
	}

private:
	char ime[20];
};

Test::Test (const char *name) {
	cout << "Kreiran Test objekt " << name << endl;
	strncpy(ime, name, 19);
	ime[19] = 0;
}

Test globalTest ("global");
void func() {
	static Test statictest ("static");
	Test functest ("func");
}

int main() {
	Test first ("main first");
	func() {
		Test first ("main inner");
	}
	Test second ("main second");

	return 0;
}
