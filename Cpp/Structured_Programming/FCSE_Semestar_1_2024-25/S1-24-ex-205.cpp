//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski vezhbi 8

/* Да се напише програма која за две низи кои се внесуваат од тастатура ќе провери дали се еднакви или не.
 * На екран да се испачати резултатот од споредбата. Максимална големина на низите е 100. */

#include <iostream>
using namespace std;

int main() {
  int n1, n2, element, i;
  int a[100], b[100];

	cout << "size of the first array: " << endl;
	cin >> n1;

	cout <<"Size of the second array: " << endl;
	cin >> n2;

	if (n1 != n2)
	{
		cout << "Arrays are not equal!" << endl;
	} else
	{
		cout << "Elements of the first array: " << endl;
		for (i = 0; i < n1; i++)
		{
			cout << "a[" << i << "] = " << endl;
			cin >> a[i];
		}

		cout << "Elements of the second array: " << endl;
		for (i = 0; i < n2; i++)
		{
			cout << "b[" << i << "] = " << endl;
			cin >> b[i];
		}

		//Check if arrays are equal
		for (i = 0; i < n1; i++)
		{
			if (a[i] != b[i])
			{
				break;
			}
		}

		if (i == n1) {
			cout << "Arrays are equal!" << endl;
		} else
		{
			cout << "Arrays are not equal!" << endl;
		}
	}

	return 0;
}
