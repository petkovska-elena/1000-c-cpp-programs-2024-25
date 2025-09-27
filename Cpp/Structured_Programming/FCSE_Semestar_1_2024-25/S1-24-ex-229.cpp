//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* На стандарден излез испечати ги во опаѓачки редослед сите петцифрени броеви деливи со 625. Секој број во нов ред.
 * Print in descending order all five-digit numbers divisible by 625. One number per line. */

#include <iostream>
using namespace std;

int main() {

	for (int i = 99999; i >= 10000; i--)
	{
		if (i % 625 == 0)
		{
			cout << i << endl;
		}
	}

	return 0;
}
