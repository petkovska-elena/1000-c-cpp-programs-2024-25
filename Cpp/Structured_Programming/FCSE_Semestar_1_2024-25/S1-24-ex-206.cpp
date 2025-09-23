//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski vezhbi 8

/* Да се напише програма која за низа чии елементи се внесуваат од тастатура,
 * ќе го пресмета збирот на парните елементи, збирот на непарните елементи, како и односот помеѓу бројот на парни и непарни елементи.
 * Резултатот да се испечати на екран.
 * Пример:
 * За низата: 3 2 7 6 2 5 1 На екран ќе се испечати:
 * Sum even: 10
 * Sum odd: 16
 * Rel: 0.75
 */

#include <iostream>
using namespace std;

int main() {
  int n, a[100], n_odd = 0, n_even = 0, sum_odd = 0, sum_even = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2)
		{
			n_odd++;
			sum_odd += a[i];
		} else
		{
			n_even++;
			sum_even += a[i];
		}
	}

	cout << "Sum even: " << sum_even << endl;
	cout << "Sum odd: " << sum_odd << endl;
	cout << "Rel: " << (float)n_even / n_odd << endl;

	return 0;
}
