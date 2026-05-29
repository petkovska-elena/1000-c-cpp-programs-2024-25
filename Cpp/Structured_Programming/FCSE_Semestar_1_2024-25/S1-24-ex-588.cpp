//
// Created by Elena Petkovska on 14.8.25.
//

/* Креирајте класа Rabotnik која во себе содржи:

ime (низа од максимум 30 знаци)
prezime (низа од максимум 30 знаци)
plata (целобројна вредност)
За оваа класа да се креираат default конструктор и конструктор со аргументи. Да се имплементираат и следните методи:

getPlata() која ја враќа платата на работникот
pecati() која ги печати името, презимето и платата.
Креирајте класа Fabrika во која има:

rabotnik [100] (низа од вработени)
brojVraboteni (целобројна вредност)
Во класата имплементирајте ги следните методи:

pecatiVraboteni() ги печати сите вработени
pecatiSoPlata(int plata) ги печати сите вработени со плата поголема или еднаква на дадената во аргументот(int plata).
Во главната функција се внесуваат податоци за n вработени. Притоа прво се внесува n, па податоците за сите n вработени. Во последниот ред се чита минималната плата.

На излез да се прикажат прво сите вработени, а потоа само оние со поголема плата од минималната. Треба да се корисатат методите pecatiVraboteni и pecatiSoPlata!

Влез:
 6
 Mile Palkovski 20000
 Kalina Saleska 9530
 Aco Noveski 66320
 Kalina Saleska 10720
 Ilinka Ilieska 30220
 Vesna Petkova 10500
 23000
Излез:
 Site vraboteni:
 Mile Palkovski 20000
 Kalina Saleska 9530
 Aco Noveski 66320
 Kalina Saleska 10720
 Ilinka Ilieska 30220
 Vesna Petkova 10500
 Vraboteni so plata povisoka od 23000 :
 Aco Noveski 66320
 Ilinka Ilieska 30220

Влез:
 2
 Mile Palkovski 21000
 Kalina Saleska 9530
 23000
Излез:
 Site vraboteni:
 Mile Palkovski 21000
 Kalina Saleska 9530
 Vraboteni so plata povisoka od 23000 :
 */

#include <iostream>
#include <cstring>
using namespace std;

class Rabotnik {
private:
 char ime[30], prezime[30];
 int plata;

public:
 Rabotnik(){}

 Rabotnik(char *ime, char *prezime, int plata) {
  strcpy(this->ime, ime);
  strcpy(this->prezime, prezime);
  this->plata = plata;
 }

 ~Rabotnik(){}

 int getPlata() {
  return plata;
 }

 void pecati() {
  cout << ime << " " << prezime << " " << plata << endl;
 }
};

class Fabrika {
private:
 Rabotnik rabotnici[100];
 int brojVraboteni;

public:
 Fabrika(){}

 Fabrika (Rabotnik *rabotnik, int brojVraboteni) {
  this->brojVraboteni = brojVraboteni;

  for (int i = 0; i < brojVraboteni; i++) {
   this->rabotnici[i] = rabotnici[i];
  }
 }

 // Copy constructor
 Fabrika(const Fabrika &fabrika) {
  brojVraboteni = fabrika.brojVraboteni;

  for (int i = 0; i < brojVraboteni; i++) {
   this-> rabotnici[i] = fabrika.rabotnici[i];
  }
 }

 void pecatiVraboteni() {
   for (int i = 0; i < brojVraboteni; i++) {
    rabotnici[i].pecati();
   }
 }

 void pecatiSoPlata(int plata) {
  for (int i = 0; i < brojVraboteni; i++) {
    if (rabotnici[i].getPlata() >= plata) {
     rabotnici[i].pecati();
    }
  }
 }

};

int main() {
 int n;
 cin >> n;

 Rabotnik rabotnici[100];
 for (int i = 0; i < n; i++) {
  char ime[30], prezime [30];
  int plata;

  cin >> ime >> prezime >> plata;
  rabotnici[i] = Rabotnik(ime, prezime, plata);
 }

 Fabrika fabrika (rabotnici, n);

 int minPlata;
 cin >> minPlata;

 cout << "Site vraboteni: " << endl;
 fabrika.pecatiVraboteni();

 cout << "Vraboteni so plata povisoka od " << minPlata << ":" << endl;
 fabrika.pecatiSoPlata(minPlata);
   return 0;
}
