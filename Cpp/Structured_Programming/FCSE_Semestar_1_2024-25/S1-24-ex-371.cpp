//
// Created by Elena Petkovska on 14.8.25.
//

/* Од стандарден влез се читаат знаци се додека не се прочита извичник.
 * Во вака внесениот текст се скриени цели броеви (помали од 100).
 * Да се напише програма што ќе ги прочита сите знаци и на излез ќе го испечати збирот на сите броеви скриени во текстот.
 * Напомена: cin во C++ ги игнорира празните места (space).
 * За да не ги игнорира потребно е да се додаде noskipws пред читањето на знакот (пр. cin >> noskipws >> znak;) */

#include <iostream>
#include <cctype>
using namespace std;

int main() {
	char znak;
	int eCifra;
	int currentNumber = 0;
	int sum = 0;

	while (cin >> noskipws >> znak && znak != '!')
	{
		if (znak >= '0' && znak <= '9')
		{
			currentNumber = currentNumber * 10 + (znak - '0');
		}
			else {
				sum += currentNumber;
				currentNumber = 0;
			}
	}

	sum += currentNumber;
	cout << sum << endl;
	return 0;
}