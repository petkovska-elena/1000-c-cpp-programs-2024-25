//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski vezhbi 8

/* Од стандарден влез се читаат едноцифрени броеви, се додека не се прочита нешто што не е број.
 * Да се испечати на екран статистика колку пати се јавува секоја цифра меѓу прочитаните броеви.
 */

#include <iostream>
using namespace std;

int main() {
  int digit;

	int counter[10] = {0};

	while (cin >> digit)
	{
		counter[digit]++;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << i << " -> " << counter[i] << endl;
	}
	return 0;
}
