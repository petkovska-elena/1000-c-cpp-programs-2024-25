//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Function template example */

#include <iostream>
#include <cstring>
using namespace std;

template <typename X>
int search(X object, X* list, int size)
{
	for (int i = 0; i < size; i++)
		if (object == list[i])
			return i;
	return -1;
}

int main()
{
	int a[] = { 1, 2, 3, 4 };
	char* c = (char*)"This is a test";
	double d[] = { 1.1, 2.2, 3.3 };

	cout << search(3, a, 4) << endl;
	cout << search('a', c, (int)strlen(c)) << endl;
	cout << search(0.0, d, 3) << endl;

	return 0;
}
