//
// Created by Elena Petkovska on 8.4.25.
//

/* Auditoriski Vezbi 1 (09.10.2024) */

/* Да се напише програма каде од тастатура ќе се внесе цена на производ,

* број на рати на кои се исплаќа и камата (каматата е број изразен во проценти од 0 до 100).
* Програмата треба да го испечати износот на ратата и вкупната сума што ќе се исплати за производот.
* ПОМОШ: Пресметајте ја целата сума, па потоа ратата. */

#include 
using namespace std;

int main()
{
float cena_na_proizvodot, kamata, cena_na_rata, vkupno_za_plakjanje;
int broj_na_rati;

cout << "Vnesete ja cenata na proizvodot: ";
cin >> cena_na_proizvodot;
cout << "Vnesete go brojot na rati: ";
cin >> broj_na_rati;
cout << "Vnesete ja kamatata (vo procenti): ";
cin >> kamata;
cout << "Vnesenata kamata iznesuva: " << kamata << "%" << endl;
vkupno_za_plakjanje = cena_na_proizvodot * (1 + kamata / 100);
cena_na_rata = vkupno_za_plakjanje / broj_na_rati;
cout << "Iznosot na edna rata iznesuva: " << cena_na_rata << endl;
cout << "Vkupnata suma za plakjanje iznesuva: " << vkupno_za_plakjanje << endl;
cout << endl;
cout << "Vi blagodarime." << endl;
cout << "So pocit," << endl;
cout << "Prodazen sistem" << endl;
return 0;

}

/*
#include 
using namespace std;

int main()
{
float cena, rata, kamata, vkupno;
int vkupno_rati;

cout << "Vnesete ja cenata na proizvodot: ";
cin >> cena;
cout << "Vnesete go brojot na rati na koi ke se isplakja proizvodot: ";
cin >> vkupno_rati;
cout << "Vnesete ja goleminata na kamatata (broj vo % od 0 do 100): ";
cin >> kamata;
cout << "\nKamatata koja ke se plakja iznesuva: " << kamata << "%" << endl;
vkupno = cena * (1 + kamata / 100);
cout << "Vkupnata cena koja ke se plati za proizvodot e: " << vkupno << endl;
rata = vkupno / vkupno_rati;
cout << "Goleminata na edna rata iznesuva: " << rata << endl;
return 0;

}
*/
