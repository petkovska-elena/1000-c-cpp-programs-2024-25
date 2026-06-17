//
// Created by Elena Petkovska on 30.5.25.
//

/* Auditoriski Vezbi 1 (09.10.2024) */

/* Да се напише програма каде од тастатура ќе се внесе цена на производ,

* а потоа ќе се испечати неговата цена со пресметан ДДВ.
* ПОМОШ: ДДВ е 18% од почетната цена */

#include 
using namespace std;

int main()
{
float cena;
cout << “Vnesete ja cenata na proizvodot: “;
cin >> cena;

cout << "Cenata na proizvodot so vkluchen DDV iznesuva: " << cena * 1.18 << endl;
cout << "Vi blagodarime za vnesenite podatoci." << endl;
cout << endl;
cout << "So pocit," << endl;
cout << "Sistem za presmetka na DDV" << endl;
return 0;

}

/*
// Variation 2: with +DDV and -DDV
#include 
using namespace std;

int main()
{
float cena;
cout << “Vnesete ja cenata na proizvodot: “;
cin >> cena;

// Cena so vkluchen DDV, zgolemuvanje za 18%
cout << "Cenata so vkluchen DDV iznesuva: " << cena * 1.18 << endl;
// Cena bez DDV, namaluvanje za 18%
cout << "Cenata po namaluvanje za 18% iznesuva: " << cena * 0.82 << endl;
return 0;

}
*/
