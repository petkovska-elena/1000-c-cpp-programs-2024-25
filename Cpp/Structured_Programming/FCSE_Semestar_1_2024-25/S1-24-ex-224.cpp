//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski Vezbi 10

/* За даден број n, да се напише рекурзивна функција која ќе ги изброи појавувањата на цифрата 8.
 * Притоа, доколку до некоја цифра 8 има уште една цифра 8 веднаш лево од неа, нејзиното појавување се брои двојно.
 * count8(8) -> 1
 * count8(818) -> 2
 * count8(8818) -> 4
 */

#include <iostream>
using namespace std;

int count_8(int n) {
	if (n == 0)
		return 0;
	if ((n / 10) % 10 == 8 && n % 10 == 8)
		return 2 + count_8(n /10);
	if (n % 10 == 8)
		return 1 + count_8(n / 10);
	return count_8(n / 10);
}

int main() {
   int n;
	cin >> n;
	cout << count_8(n);
	return 0;
}
