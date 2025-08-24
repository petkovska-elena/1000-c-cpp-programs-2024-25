//
// Created by Elena Petkovska on 30.5.25.
//

/* Auditoriski Vezbi 1 (09.10.2024) */

/* Да се напише програма каде од тастатура ќе се внесе цена на производ,
 * а потоа ќе ја испечати неговата цена со пресметан ддв.
 * ПОМОШ: ДДВ е 18% од почетната цена */

#include <iostream>
using namespace std;

int main()
{
    float cena;
    cout << "Vnesi ja cenata na proizvodot: ";
    cin >> cena;

    cout << "Cenata na proizvodot so vkluchen DDV e: " << cena * 1.18 << endl;
    cout << "Taka e, skapo skapo! Zemi skeniraj ja smetkata. Ke vratish nekoj denar :)))" << endl;
    cout << endl;
    cout << "Kisses," << endl;
    cout << "UJP" << endl;

    return 0;
}

/*
//Variation 2: with +DDV and -DDV
#include <iostream>
using namespace std;

int main()
{
    float cena;
    cout << "Vnesi ja cenata na proizvodot: ";
    cin >> cena;

    //Cena so vkluchen DDV, zgolemuvanje za 18%
    cout << "Cenata zgolemena za 18% e: " << cena * 1.18 << endl;

    //Cena so iskluchen DDV, namaluvanje za 18%
    cout << "Cenata namalena za 18% e: " << cena * 0.82 << endl;

    return 0;
} */







