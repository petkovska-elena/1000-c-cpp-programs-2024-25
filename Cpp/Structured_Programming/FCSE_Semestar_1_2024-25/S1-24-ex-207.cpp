//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski vezhbi 8

/* Да се напише програма која ќе го пресмета скаларниот производ на два вектори со по n координати.
 * Бројот на координати n, како и координатите на векторите се внесуваат од стандарден влез.
 * Резултатот да се испечати на екран.
 */

#include <iostream>
using namespace std;

int main() {
  int a[100], b[100], n, scalar = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}

	for (int i = 0; i < n; i++)
	{
		scalar += a[i] * b[i];
	}

	cout << "The scalar product is: " << scalar << endl;
	return 0;
}
