//
// Created by Elena Petkovska on 14.8.25.
//

/*
Од тастатура во низа се внесуваат N позитивни цели броеви (N <= 100),                                //TODO
а потоа се внесува и цел број ind (ind >= 0).														 //TODO
Да се напише функција sum_pos која ја прима низата, бројот ind (кој претставува индекс во низата)    //TODO
и бројот на валидни елементи во низата. Функцијата треба да врати сумата на сите елементи            //TODO
почнувајќи од дадениот индекс ind па се до крајот на низата.                                         //TODO
Ако индексот ind е поголем од Nфункцијата треба да врати 0.										     //TODO
НАПОМЕНА: Задачата да се реши со помош на покажувачи (без користење на оператор [ ]).                //TODO
Пример
влез:
10
2 4 6 8 1 3 9 12 33 44
6

излез:
98
98 = 9+12+33+44
*/

#include <iostream>
using namespace std;

int sum_pos (int *arr, int n, int ind) {
	if (ind >= n)
	{
		return 0;
	}

	int sum = 0;
	int *p = arr + ind;

	while (p < arr + n)
	{
		sum += *p;
		p++;
	}

	return sum;
}

int main() {
	int n;
	cin >> n;

	int arr[100];
	int *p = arr;

	for (int i = 0; i < n; i++)
	{
		cin >> *(p + i);
	}

	int ind;
	cin >> ind;

	cout << sum_pos(arr, n, ind);

	return 0;
}