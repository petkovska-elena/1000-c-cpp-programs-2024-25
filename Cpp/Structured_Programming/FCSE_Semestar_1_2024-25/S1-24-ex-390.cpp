//
// Created by Elena Petkovska on 14.8.25.
//

/*
 * Од тастатура се внесува природен број N (N <= 100).
 * Во следните N редови се внесува по еден стринг со должина помала од 80 знаци.
 * Вашата програма треба на излез да го отпечати најдолгиот стринг кој е палиндром
 * (стринг кој исто се чита од лево на десно и од десно на лево).
 *
 * Доколку има повеќе такви стрингови со иста должина,
 * да се отпечати оној што е лексикографски најмал
 * (според редоследот на функцијата strcmp()).
 *
 * Доколку не постои ниту еден палиндром,
 * на екран да се испечати NEMA.
 *
 * Пример:
 * Влез:
 * 6
 * asasa
 * a&b&a&b&a
 * awawawawaw
 * Xyz
 * c&b&a&b&c
 * PotoP
 *
 * Излез:
 * a&b&a&b&a
 *
 * Влез:
 * 3
 * asdr
 * u6253u3
 * lakdsadalkfhldakf
 *
 * Излез:
 * NEMA
 */

#include <iostream>
#include <cstring>
using namespace std;

bool ePalindrom(char s[]) {
	int i = 0, j = strlen(s) - 1;
	while (i < j)
	{
		if (s[i] != s[j]) return false;
		i++;
		j--;
	}
	return true;
}

int main() {
	int N;
	cin >> N;

	char s[100], best[100];
	bool found = false;

	for (int i = 0; i < N; i++)
	{
		cin >> s;

		if (ePalindrom(s)) {
			if (!found) {
				strcpy(best, s);
				found = true;
			} else {
				if (strlen(s) > strlen(best)) {
					strcpy(best, s);
				} else if (strlen(s) == strlen(best) && strcmp(s, best) < 0) {
					strcpy(best, s);
				}
			}
		}
	}
		if (found) cout << best;
		else cout << "NEMA";

		return 0;
}
