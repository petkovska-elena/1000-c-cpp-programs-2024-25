//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski Vezbi 10

/* Да се напише рекурзивна функција count_up(int n) која за даден цел број n ќе овозможи печатење на броевите од 0 до n.
 * (Искористете го кодот на функцијата count_down(int n) и решете ја задачата со промена на редоследот на командите).
 */

#include <iostream>
using namespace std;

void count_up (int n){
	if(n == 0){
		cout << 0 << " ";
		return;
	}
	count_up (n-1);
	cout << n << " ";
}

int main () {
	int n;
	cin >> n;
	count_up(n);
}
