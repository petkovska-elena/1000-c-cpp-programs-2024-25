//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Elementi na unija */
/* Union e tip kako Struct, no so razlika vo toa shto site chlenovi delat ista memorija. */

#include <iostream>
using namespace std;

//Definicija na unija od broevi
union number
{
	int x;
	double y;
};

int main() {
	union number value;
	value.x = 100;          // Stavi cel broj vo unijata
	cout << "Stavi cel broj vo unijata i ispechati gi dvata chlena" << endl;
	cout << "int: " << value.x << endl;
	cout << "double: " << value.y << endl;

	value.y = 100;          // Stavi double vo istata unija
	cout << "Stavi realen broj vo unijata i ispechati gi dvata chlena" << endl;
	cout << "int: " << value.x << endl;
	cout << "double " << value.y << endl;

	return 0;
}
