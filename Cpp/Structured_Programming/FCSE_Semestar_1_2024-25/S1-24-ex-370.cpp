//
// Created by Elena Petkovska on 14.8.25.
//

/* Од стандарден влез се чита еден природен број n.
 * Меѓу природните броеви помали од n, да се најде оној чиј што збир на делителите е најголем.
 * Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број. */

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int maxZbir = 0;
	int brojSoMaxZbir = 0;

	for (int i = 1; i < n; i++)
	{
		int zbirDeliteli = 0;

		for (int d = 1; d < i; d++)
		{
			if (i % d == 0)
			{
				zbirDeliteli += d;
			}
		}

		if (zbirDeliteli > maxZbir)
		{
			maxZbir = zbirDeliteli;
			brojSoMaxZbir = i;
		}
	}

	cout << brojSoMaxZbir << endl;
	return 0;
}
