//
// Created by Elena Petkovska on 8.4.25.
//

/* Prezentacii Predavanja */

/* Збир на целите броеви не поголеми од n */

#include <iostream>
using namespace std;

int zbir_n (int n)
{
    if (n == 0) return 0;
    else return n + zbir_n(n -1);
}

int main()
{
    int n;
    cin >> n;
    int result = n + zbir_n(n-1);
    cout << result << endl;

    return 0;
}
