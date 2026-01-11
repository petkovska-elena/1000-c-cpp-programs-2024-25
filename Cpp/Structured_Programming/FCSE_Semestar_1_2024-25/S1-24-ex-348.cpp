//
// Created by Elena Petkovska on 14.8.25.
//

// Kvalifikaciski Zadaci

/* Испечати ги сите четирицифрени броеви кои се деливи со 127 и се парни, по опаѓачки редослед. */

#include <iostream>
using namespace std;

int main() {

	for (int i = 9998; i >= 1000; --i)
	{
		if (i % 127 == 0 && i % 2 == 0)
		{
			cout << i << endl;
		}
	}

	return 0;
}
