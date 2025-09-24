//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski Vezbi 10

/* Да се напише рекурзивна функција count_down(int n) која за даден цел број n ќе овозможи печатење на броевите од n до 0. */

#include <iostream>
using namespace std;

void count_down(int n) {
	if (n == 0)
	{
		cout << 0 << " ";
		return;
	}
	cout << n << " ";
	count_down(n - 1);
}

int main() {
  int n;
	cin >> n;
	count_down(n);
	return 0;
}
