//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Да се напише клас која ќе овозможи работа со низи од знаци (стрингови)
 * при што низите же се сместуваат во динамички алоцирана меморија
 * (без ефективно ограничување на нивната максимална должина).
 * Во секој момент низата треба да зафаќа само онолку меморија колку што навистина е долга. */

#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
	char * cptr;                               // Pokazhuvac kon dinamicki alocirana memorija vo koja ke se cuva stringot

public:
	String(const char * = " ");
	~String();
	void Show(void) const {cout << cptr;}
};

String::String(const char* a_cptr) {
	cptr = new char [strlen(a_cptr) + 1];      // Alociranje na potrebna memorija
	strcpy(cptr, a_cptr);                      // Kopiranje na nizata znaci vo nea
}

int main() {
	const String b("World");
	String c, d("Hello");
	{
		String a(d);
		a.Show(); cout << ' ';
		b.Show(); cout << endl;

		c = a; d = b;
		c.Show(); cout << ' ';
		d.Show(); cout << endl;

		return 0;
	}
}
