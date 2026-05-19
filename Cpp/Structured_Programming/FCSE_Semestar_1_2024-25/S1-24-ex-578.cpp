//
// Created by Elena Petkovska on 14.8.25.
//

// Klasi i Objekti
/*
Да се дефинира класа Agol, во која се чуваат информации за:
- степени, минути и секунди (int)

Во класата да се реализираат:
- конструктор по потреба
- методи за поставување на вредности на атрибутите на класата (set методи)
- метод за пресметување на вредноста на аголот во секунди

Да се дефинира и метод за проверување на тоа дали внесениот агол е валиден,
односно дали се внесени соодветни вредности за атрибутите
(во границите кои ги дозволуваат).
*/

#include <iostream>
using namespace std;

class Agol
{
private:
	int stepeni, minuti, sekundi;

public:
	Agol(){}

	//TODO: Make Constructor with Arguments

	~Agol(){}

	//TODO: Make getter methods for stepeni, minuti

	int getStepeni() {
		return stepeni;
	}

	int getMinuti() {
		return minuti;
	}

	int getSekundi() {
		return sekundi;
	}

	void setStepeni(int stepeni) {
		this->stepeni = stepeni;
	}

	void setMinuti(int minuti) {
		this->minuti = minuti;
	}

	void setSekundi(int sekundi) {
		this->sekundi = sekundi;
	}

	int pretvoriVoSekundi() {
		int vkupnoSekundi = sekundi + (minuti * 60) + (stepeni * 3600);
		return vkupnoSekundi;
		//return sekundi + (minuti * 60) + (stepeni * 3600);
	}

	bool proveri(int sekundi, int minuti, int stepeni) {

		if (stepeni > 360 || stepeni < 0) { return false; }
		if (minuti >= 60 || minuti < 0) { return false; }
		if (sekundi >= 60 || sekundi < 0) { return false; }

		return true;
	}
};

/* int proveri(int sekundi, int minuti, int stepeni) {
	if (stepeni > 360 || stepeni < 0) { return 0; }
    if (minuti >= 60 || minuti < 0) { return 0; }
    if (sekundi >= 60 || sekundi < 0) { return 0; }
    return 1; } */

bool promenaNaSekundi (Agol agol, int sekundi) {
	if (agol.getSekundi() != sekundi)
	{
		return true;
	} else { return false; }

	// return agol.getSekundi() != sekundi;
}

int main() {
	Agol a;

	int stepeni, minuti, sekundi;
	cin >> stepeni >> minuti >> sekundi;

	if (a.proveri(sekundi, minuti, stepeni)) {
		a.setStepeni(stepeni);
		a.setSekundi(sekundi);
		a.setMinuti(minuti);
		cout << a.pretvoriVoSekundi();

		if (promenaNaSekundi(a, sekundi)) { cout << "Ne smeete da gi menuvate sekundite vo ramkite na klasta."; }
	} else
	{
		cout << "Nevalidni vrednosti za agol.";
	}

	cout << endl;
	cout << a.getStepeni() << " "
	     << a.getMinuti() << " "
	     << a.getSekundi() << endl;

	a.setStepeni(60);
	a.setMinuti(40);
	a.setSekundi(40);

	cout << a.pretvoriVoSekundi();
	return 0;
}
