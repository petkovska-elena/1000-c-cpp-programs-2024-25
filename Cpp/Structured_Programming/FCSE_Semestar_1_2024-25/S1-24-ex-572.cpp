//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Во датотеката in.txtсе наоѓа список на студенти. Во секој ред е запишано презимето,
 * името, бројот на индекс и четири броја (бодови од секоја задача) со произволен број празни места
 * или табулатори меѓу нив и празни редови. Да се напише програма која во датотеката out.txt
 * ќе смести список на студенти (ред.бр., име, презиме, број на индекс и вкупен број на бодови).
 * При тоа имињата и презимињата да се напишат со голема почетна буква. */

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <ctype.h>

using namespace std;

void norm(string &s) {
	s[0] = toupper(s[0]);
	for (size_t i = 1; i < s.length(); ++i)
		s[i] = tolower(s[i]);
}

int main() {
	ifstream fin("in.txt");
	ofstream fout("out.txt");

	if (!fout.is_open()) {
		cout << "Ne mozam da ja otvoram datotekata out.txt\n";
		return -1;
	}

	if (!fin.is_open()) {
		cout << "Ne mozam da ja najdam datotekata in.txt\n";
		return -1;
	}

	string red, ime, prezime;
	int index, zadaca[4], bodovi;
	int rbr = 0;

	while (!fin.eof()) {
		fin >> prezime >> ime >> index
			>> zadaca[0] >> zadaca[1] >> zadaca[2] >> zadaca[3];

		norm(ime);
		norm(prezime);

		bodovi = 0;
		for (int i = 0; i < 4; ++i)
			bodovi += zadaca[i];

		string imeprez = ime + " " + prezime;
		fout << setw(3) << right << ++rbr << ". "
			 << setw(35) << left << imeprez
			 << setw(8) << index
			 << setw(6) << bodovi << '\n';
	}

	fin.close();
	fout.close();
	return 0;
}
