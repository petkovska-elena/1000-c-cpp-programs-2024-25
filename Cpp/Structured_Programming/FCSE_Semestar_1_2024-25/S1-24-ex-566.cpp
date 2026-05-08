//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Virtuelni funkcii */

#include <iostream>
using namespace std;

class Vozilo {
public:
	virtual int VratiTezina() const { return(tezina); }
	void PostaviTezina(int wt) { tezina = wt; }
};

class Kamion : public Avtomobil {
private:
	int TezinaPrikolka;
public:
	void PostaviTezina(int engine_wt, int trailer_wt);
	int VratiTezina() const;
};

void Kamion::PostaviTezina(int engine_wt, int trailer_wt)
{
	TezinaPrikolka = trailer_wt;
	Avtomobil::PostaviTezina(engine_wt);
}

int Kamion::VratiTezina() const {
	return (Avtomobil::VratiTezina() + TezinaPrikolka);
}

int main()
{
	Vozilo v(1200);
	Kamion t(6000, 115, "Scania", 15000);

	Vozilo *vp;
	vp = &v;
	cout << vp->VratiTezina() << endl;

	vp = &t;
	cout << vp->VratiTezina() << endl;
	cout << vp->VratiBrzina() << endl;
}
