// Created by Elena Petkovska on 4.6.2025.
//

//Auditoriski vezhbi 5

/* Да се напише програма што од непознат број на цели броеви што се внесуваат од тастатура
 * ќе го определи бројот со максимална вредност. Притоа, броевите поголеми од 100 не се земаат предвид т.е. се игнорираат.
 * Програмата завршува ако се внесе невалидна репрезентација на број. */

#include <iostream>
using namespace std;

int main() {
    int n, mx = 0;
    bool found = false;              // have we seen any number ≤ 100?

    while (cin >> n) {               // stop when input becomes invalid
        if (n > 100) continue;       // ignore numbers > 100
        if (!found || n > mx) {      // first valid or larger than current max
            mx = n;
            found = true;
        }
    }

    if (found) cout << mx;
    else       cout << "Ne e vnesen validen broj";
    return 0;
}

