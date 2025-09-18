// Created by Elena Petkovska on 4.6.2025.
//

//Auditoriski vezhbi 5

/* Да се напише програма што од N цели броеви внесени од тастатура ќе ја определи
 * разликата од сумите на броевите на парни и непарни позиции (според редоследот на внесување).
 * Ако оваа разлика е помала од 10 на екран се печати “Dvete sumi se slicni”, а во спротивно
 * “Dvete sumi mnogu se razlikuvaat”.
 * пример
 * За броевите внесени од тастатура:
 * 2 4 3 4 2 1 1 6 1 7
 * suma_neparni_pozicii = 9
 * suma_parni_pozicii = 22
 * На екран ќе се испечати:
 * Dvete sumi mnogu se razlikuvaat */

#include <iostream>
using namespace std;

int main() {
    int difference, i, n = 0, number = 0;
    int sum_odd_positions = 0, sum_even_positions = 0;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cin >> number;
        if (i % 2)
        {
            sum_odd_positions += number;
        } else
        {
            sum_even_positions += number;
        }
    }

    difference = sum_even_positions - sum_odd_positions;
    if (abs(difference) < 10)
    {
        cout << "Dvete sumi se slicni";
    } else
    {
        cout << "Dvete sumi mnogu se razlikuvaat";
    }
    return 0;
}
