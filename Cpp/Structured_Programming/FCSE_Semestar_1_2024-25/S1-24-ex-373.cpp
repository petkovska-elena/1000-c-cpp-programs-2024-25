//
// Created by Elena Petkovska on 14.8.25.
//

// Ispecati gi site clenovi od niza vnesena od standarden vlez so zapirka pomegju niv

#include <iostream>
using namespace std;

int main() {
	int n;
	char c;
	bool firstComma = true;

	while (cin >> n)
	{
		if (!firstComma)
		{
			cout << ", ";
			cout << n;
			firstComma = false;

			cin >> c;
			if (c == '!')
			{
				break;
			}
		}
	}

	cout << endl;
	return 0;
}
