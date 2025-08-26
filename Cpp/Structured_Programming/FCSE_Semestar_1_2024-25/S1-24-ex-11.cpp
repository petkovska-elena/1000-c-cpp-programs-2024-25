//
// Created by Elena Petkovska on 8.4.25.
//

/* Auditoriski Vezbi 1 (09.10.2024) */

/* Да се напише програма каде од тастатура ќе се внесе цена на производ,
 * број на рати на кои се исплаќа и камата (каматата е број изразен во проценти од 0 до 100).
 * Програмата треба да го испечати износот на ратата и вкупната сума што ќе се исплати за производот
 * ПОМОШ: Пресметајте ја целата сума, па потоа ратата. */

#include <iostream>
using namespace std;

int main()
{
    float cena_na_proizvodot, kamata, cena_na_rata, vkupno_za_plakjanje;
    int broj_na_rati;
    cout << "Dobar den! Kako ste mi?" << endl;
    cout << "Denes za vas spremame eden zabaven plan." << endl;
    cout << "Najprvo, samo vnesete ja cenata na proizvodot koj sakate da go kupite." << endl;
    cout << "(kupuvacot se zhali...)" << endl;
    cout << "Ne, ne, ne se grizhete vie za nishto. Ne e bitno dali sega imate pari. Imame nie opcija za plakjanje na rati ;))" << endl;
    cout << "Znaci, cenata na prozvodot e: ";
    cin >> cena_na_proizvodot;
    cout << "A brojot na rati e: ";
    cin >> broj_na_rati;
    cout << "Morame da pisheme i mala kamata, hhehe, znachi: ";
    cin >> kamata;
    cout << "Kamata ;) od: " << kamata << "%. Nishto strashno..." << endl;
    vkupno_za_plakjanje = cena_na_proizvodot * (1 + kamata / 100);
    cena_na_rata = vkupno_za_plakjanje / broj_na_rati;
    cout << "Znachi, bez gajle, cenata na edna rata iznesuva SAMO: " << cena_na_rata << endl;
    cout << "Shto znaci deka vkupnata isplatena suma ke bide SAMO: " << vkupno_za_plakjanje << endl;
    cout << "Cestito noviot frizhider. Se nadevame nema da vi se rasipe pred da zavrshite so isplakjane na ratite hhehehe..." << endl;
    cout << endl;
    cout << "Pozdrav4e," << endl;
    cout << "Neptun" << endl;
    return 0;
}



/*
#include <iostream>
using namespace std;

int main()
{
    float cena, rata, kamata, vkupno;
    int vkupno_rati;

    cout << "Vnesete ja cenata na proivodot: ";
    cin >> cena;

    cout << "Vnesete go brojot na rati na koi ke se isplakja proizvodot: ";
    cin >> vkupno_rati;

    cout << "Vnesete ja goleminata na kamatata (broj vo % od 0 do 100): ";
    cin >> kamata;
    cout << "\nKamatata koja ke se plakja iznesuva: " << kamata << "% " << endl;

    vkupno = cena * (1 + kamata/100);
    cout << "Vkupnata cena koja ke se plati za proizvodot e: " << vkupno << endl;

    rata = vkupno / vkupno_rati;
    cout << "Znaci, goleminata na ratata ke iznesuva: " << rata << " mesecno." << endl;
    cout << endl;
    cout << "Srekjno isplakjanje dolgovi!" << endl;

    return 0;
} */



/*
//Prvichno reshenie
#include <iostream>
using namespace std;

int main() {
    float cena, kamata, rata, vkupno;
    int brRati;
    cout << "Vnesete ja cenata na proizvodot: \n";
    cin >> cena;
    cout << "Vnesete go brojot na rati: ";
    cin >> brRati;
    cout << "Vnesete ja kamatata: ";
    cin >> kamata;
    vkupno = cena * (1 + kamata/100);
    rata = vkupno / brRati;
    cout << "Edna rata ke iznesuva: " << rata << endl;
    cout << "Vkupnata isplatena suma ke bide: " << vkupno;
    return 0;
} */