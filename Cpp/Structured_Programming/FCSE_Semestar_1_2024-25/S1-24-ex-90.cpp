//
// Created by Elena Petkovska on 8.4.25.
//

/* Kolokvium 1 zadaci - ENG */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    float a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        float percent = (a/b) * 100.0;

        if (percent < 60)
        {
            cout <<"\n" << percent << " FAIL" << endl;
        }
        else
        {
            int grade = (percent/10) + 1;
            cout << endl;
            cout << percent << " " << grade << endl;
        }
    }
    return 0;
}
