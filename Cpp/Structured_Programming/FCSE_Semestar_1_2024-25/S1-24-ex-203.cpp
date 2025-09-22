//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski vezhbi 6

/* Да се напише програма што ќе ги отпечати сите прости броеви помали од 10000 чиј што збир на цифри е исто така прост број.
 * На крајот да се отпечати колку вакви броеви се пронајдени. */

#include <iostream>
using namespace std;

int is_prime (int n) {
    if (n < 4) return 1;
    else
    {
        if (n % 2 == 0) return 0;
        else
        {
            for (int i = 3; i * i <= n; i += 2)
            {
                if (n % i == 0)
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

int sum_digits (int n) {
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
  int count = 0;
    for (int i = 2; i <= 9999; ++i)
    {
        if (is_prime(i) && is_prime(sum_digits(i)))
        {
            cout << i << "\t";
            ++count;
        }
    }
    cout << "\nVkupno: " << count << endl;
    return 0;
}
