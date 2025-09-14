// Created by Elena Petkovska on 4.6.2025.
//

//Auditoriski Vezhbi 2

#include <iostream>
using namespace std;

int main() {
    float cena, kamata, rata, vkupno;
    int broj_na_rati;
    cout << "Vnesete ja cenata na proizvodot: \n";
    cin >> cena;

    cout << "Vnesete go brojot na rati: ";
    cin >> broj_na_rati;

    cout << "Vnesete ja goleminata na kamatata: ";
    cin >> kamata;

    vkupno = cena * (1 + kamata/100);
    rata = vkupno / broj_na_rati;

    cout << "Edna rata ke iznesuva: " << rata << endl;
    cout << "Vkupnata isplatena suma ke bide: " << vkupno << endl;
    return 0;
}