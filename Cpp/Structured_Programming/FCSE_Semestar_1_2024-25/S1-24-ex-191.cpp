// Created by Elena Petkovska on 4.6.2025.
//

//Auditoriski vezhbi 5

/* Со Морзеовата азбука, знаците (букви, цифри) се претставуваат со точки и цртички.
 * Цифрите од 0 до 4 се претставуваат, соодветно, на следниот начин: “—–”, “.—-”, “..—”, “…–”, “….-”.
 * Од тастатура се внесува даден природен број N (N<100 000), и потоа се внесуваат N други природни броеви.
 * За секој од внесените броеви, во посебен ред, да се отпечати остатокот при делењето на тој број со 5 во Морзеов код. */

#include <iostream>
using namespace std;

int main() {
    int n, current_number;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> current_number;
        int rest = current_number % 5;

        if (rest == 0)
        {
            cout << "-----" << endl;
        } else if (rest == 1) {
            cout << ".----" << endl;
        } else if (rest == 2) {
            cout << "..---" << endl;
        } else if (rest == 3) {
            cout << "...--" << endl;
        } else
        {
            cout << "....." << endl;
        }

    }
    return 0;
}
