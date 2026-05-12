//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Имаме фирма за чии вработени треба да пресметуваме плата. Во фирмата работат
различни профили на работници, чија плата се пресметува на различен начин. За
вработените платата се изразува во бодови и вредноста за исплата се добива со множење
на бодовите по вредноста на бодот кој е единствен за целата фирма. Платите на
соработниците не зависта од вредноста на бодот и се одредуваат директно.

Вработени:
Директор прима фиксна плата
Механичар платен е според бројот на работни часови кои работел во месецот, според
одреден надомест за 1 час работа
Дилер платен е според бројот на остварени продажби (добива одреден бонус од секоја
остварена продажба, но нема работно време)
Продавач има одредена фиксна основица за плата на која се додаваат стимулативни
бонуси според остварените продажби (има работно време во продавница)

Соработници:
Хонорарец привремено ангажиран од страна на фирмата по договор за дело за
договорена сума која не зависи од вредноста на бодот.
Консултант ангажиран паушално со (повеќе)годишен договор со одредена динамика на
исплата (месечно на пр.). Според договорот во одредени случаи му се исплаќаат и
бонуси за трошоци (над договорената сума). Не зависи од вредноста на бодот.

За сите лица (вработени и соработници) се чуваат и дополнителни информации кои не
зависат од нивниот работен ангажман (име и презиме, адреса, банкарска сметка, ...) */

#include <iostream>
#include <string>

using namespace std;

class Rabotnik {
public:
    Rabotnik(string name = "") : ime(name) { }
    virtual ~Rabotnik() { }

    static void SetBod(float newbod) { bod = newbod; }
    const string &Ime(void) const { return ime; }
    float VrednostBod(void) const { return bod; }
    void SmeniIme(const string &novoime) { ime = novoime; }

    virtual float Plata(void) const = 0;
    virtual void Show(void) const = 0;

private:
    string ime;
    static float bod;
};

class Direktor : public Rabotnik {
public:
    Direktor(string ime = "", float plata = 0)
        : Rabotnik(ime), bod_plata(plata) { }
    ~Direktor() { }

    float Plata(void) const { return bod_plata * VrednostBod(); }
    void Show(void) const { cout << Ime() << " " << Plata(); }
    void Osnovica(float vrednost) { bod_plata = vrednost; }

private:
    float bod_plata;
};

class Mehanicar : public Rabotnik {
public:
    Mehanicar(string ime = "", float plata_po_cas = 0, int rab_casovi = 0)
        : Rabotnik(ime), satnina(plata_po_cas), casovi(rab_casovi) { }
    ~Mehanicar() { }

    float Plata(void) const { return satnina * casovi * VrednostBod(); }
    void Show(void) const { cout << Ime() << " " << Plata(); }
    void RabotniCasovi(int cas) { casovi = cas; }
    void Satnica(float vrednost) { satnina = vrednost; }

private:
    float satnina;
    int casovi;
};

class Diler : public Rabotnik {
public:
    Diler(string ime = "", float prov = 0, int brprod = 0)
        : Rabotnik(ime), bonus(prov), prodazbi(brprod) { }
    ~Diler() { }

    float Plata(void) const { return bonus * prodazbi * VrednostBod(); }
    void Show(void) const { cout << Ime() << " " << Plata(); }
    void Bonus(float vrednost) { bonus = vrednost; }
    void Prodazbi(int br) { prodazbi = br; }

private:
    float bonus;
    int prodazbi;
};

class Prodavac : public Diler {
public:
    Prodavac(string ime = "", float osnova = 0, float prov = 0, int brprod = 0)
        : Diler(ime, prov, brprod), mesecna(osnova) { }
    ~Prodavac() { }

    float Plata(void) const { return mesecna * VrednostBod() + Diler::Plata(); }
    void Show(void) const { cout << Ime() << " " << Plata(); }
    void Osnovica(float vrednost) { mesecna = vrednost; }

private:
    float mesecna;
};

class Honorarec : public Rabotnik {
public:
    Honorarec(string ime = "", float vrednost = 0)
        : Rabotnik(ime), honorar(vrednost) { }
    ~Honorarec() { }

    float Plata(void) const { return honorar; }
    void Show(void) const { cout << Ime() << " " << Plata(); }
    void Honorar(float vrednost) { honorar = vrednost; }

private:
    float honorar;
};

class Konsultant : public Honorarec {
public:
    Konsultant(string ime = "", float osnova = 0, float usluga = 0)
        : Honorarec(ime, osnova), bonus(usluga) { }
    ~Konsultant() { }

    float Plata(void) const { return bonus + Honorarec::Plata(); }
    void Show(void) const { cout << Ime() << " " << Plata(); }
    void Bonus(float vrednost) { bonus = vrednost; }

private:
    float bonus;
};

float Rabotnik::bod = 10.0;

int main()
{
    Rabotnik::SetBod(12.0);

    Rabotnik *Firma[] = {
        new Direktor("direktor1", 1000.0),
        new Mehanicar("mehanicar1", 3.5, 45),
        new Prodavac("prodavac1", 300.0, 30.0, 5),
        new Prodavac("prodavac2", 400.0, 25.0),
        new Diler("diler1", 50.0, 3),
        new Honorarec("honorarec1", 100.0),
        new Konsultant("konsultant1", 500.0),
        0
    };

    float total = 0.0;
    Rabotnik *r;

    for (int i = 0; r = Firma[i]; i++) {
        r->Show();
        cout << endl;
        total += r->Plata();
    }

    cout << "Vkupno za isplata " << total << endl;

    for (int i = 0; Firma[i]; delete Firma[i++]);

    return 0;
}
