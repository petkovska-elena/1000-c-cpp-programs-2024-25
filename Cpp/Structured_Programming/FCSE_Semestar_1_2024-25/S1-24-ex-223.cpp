//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski Vezbi 10

/* Да се напише рекурзивна функција која ќе го пресметува збирот на цифрите на еден број.
 * sumDigits(126) -> 9
 * sumDigits(49) -> 13
 * sumDigits(12) -> 3
 */

#include <iostream>
using namespace std;

int sum_digits(int n) {
	if (n == 0)
		return 0;
	return n % 10 + sum_digits(n / 10);
}

int main() {
  int n;
	cin >> n;
	cout << sum_digits(n) << endl;
}
