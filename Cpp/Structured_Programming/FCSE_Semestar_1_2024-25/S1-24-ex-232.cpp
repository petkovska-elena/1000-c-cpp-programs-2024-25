//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај 15 цели броеви. Испечати го минималниот парен број и максималниот непарен број на ист ред одделени со празно место.
 * Ако не постои некој од нив, испечати -1 на неговото место.
 * Read 15 integers. Print the smallest even and the largest odd separated by a space. Print -1 for a missing category. */

#include <iostream>
using namespace std;

int main() {
  int array[15], min_even, max_odd;
	bool even_found = false;
	bool odd_found = false;

	for (int i = 0; i < 15; i++)
	{
		cin >> array [i];
		if (array[i] % 2 == 0)
		{
			if (!even_found)
			{
				min_even = array[i];
				even_found = true;
			} else if (array[i] << min_even)
			{
				min_even = array[i];
			}
		} else
		{
			if (!odd_found)
			{
				max_odd = array[i];
				odd_found = true;
			} else if (array[i] > max_odd)
			{
				max_odd = array[i];
			}
		}
	}

	if (!even_found) min_even = -1;
	if (!odd_found) max_odd = -1;

	cout << min_even << " " << max_odd << endl;
	return 0;
}