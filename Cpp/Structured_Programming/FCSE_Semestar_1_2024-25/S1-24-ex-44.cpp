//
// Created by Elena Petkovska on 8.4.25.
//

/* Prezentacii Predavanja */

/* Да се пресмета рекурзивно mn, 𝑛 ∈ ℕ */

#include <iostream>
using namespace std;

int power (int m, int n)
{
    if (n) return m * power (m, n - 1);
    else return 1;
}

int main()
{
    int m, n;
    cin >> m >> n;
    int result = power (m, n);
    cout << result << endl;
    return 0;
}