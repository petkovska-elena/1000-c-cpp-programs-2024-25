//
// Created by Elena Petkovska on 14.8.25.
//

// Kvalifikaciski Zadaci

/* Прочитај N цели броеви. Испечати ги сите негативни броеви во редоследот во којшто се појавуваат. */

#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;

		if (num < 0)
		{
			cout << num;
		}
	}

	return 0;
}
