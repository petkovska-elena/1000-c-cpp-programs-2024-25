//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај 10 цели броеви. Ротирај ја низата надесно за 3 позиции и испечати ја во еден ред со празни места.
Read 10 integers. Rotate the array right by 3 and print it on one line. */

#include <iostream>
using namespace std;

int main() {
	int niza[10];
	int n = 10, positions = 3;

	for (int i = 0; i < 10; i++)
	{
		cin >> niza[i];
	}

	for (int i = 0; i < 10; i++)
	{
		cout << niza [(i + (n - positions) % n)] << " ";
	}

	cout << endl;
	return 0;
}
