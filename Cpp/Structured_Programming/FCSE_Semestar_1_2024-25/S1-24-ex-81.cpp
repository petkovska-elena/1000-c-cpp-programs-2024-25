//
// Created by Elena Petkovska on 8.4.25.
//

/* Kolokviumski zadaci */

/* Да се напише програма со која се внесува цел број n (n > 0), а потоа ја пресметува сумата на серијата (n*n)+...+(3*3)+(2*2)+(1*1),
 * но само за парните членови. На излезот се отпечатуваат парните членови, сумата и средната вредност на добиената серија од парните членови.
 * Излезот во дадениот формат (секој парен член, сумата и средната вредност во нови редови, нема празни места).
 *
 * Input:
 * 7
 *
 * Result:
 * 6 * 6 = 36
 * 4 * 4 = 16
 * 2 * 2 = 4
 * 56
 * 18.6667 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    int count = 0;
    for (int i = n; i >= 1; i--)
    {
        if (i % 2 == 0)
        {
            int sq = i * i;
            cout << i << " * " << i << " = " << sq << endl;
            sum += sq;
            count++;
        }
    }

    cout << sum << endl;

    double avg = (double)sum / count;
    cout << fixed << setprecision(4) << avg << endl;
    return 0;
}