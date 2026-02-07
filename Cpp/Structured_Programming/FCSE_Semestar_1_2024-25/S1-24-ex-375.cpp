//
// Created by Elena Petkovska on 14.8.25.
//

// Ispechati gi site 4cifreni broevi delivi so 127, koi isto taka se i parni, vo opagjacki redosled

/* 4 cifreni broevi for (int i = 1000; i < 10000; i++)
 * delivi so 127, i % 127 == 0
 * se i parni, i % 2 == 0
 * vo opagjacki redosled, znaci obratno od ova (int i = 1000; i < 10000; i++), namesto i++, so i-- */

#include <iostream>
using namespace std;

int main() {
	for (int i = 9998; i >= 1000; i--)
	{
		if ((i % 127 == 0) && (i % 2 == 0))
		{
			cout << i << ", ";
		}
	}
}


