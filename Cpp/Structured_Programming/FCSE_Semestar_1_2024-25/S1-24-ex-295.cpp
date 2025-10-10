//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 7 - Funkcii

/* Scope оператор :: (област на важност на променливи) */

#include <iostream>
using namespace std;

int ccc = 987;   // глобална променлива

int main() {
	int ccc = 123;   // локална променлива во main
	cout << "main ccc = " << ccc << endl;
	cout << "Global ccc = " << ::ccc << endl;

	{
		int ccc = 456;   // локална променлива во inner блок
		cout << "Inner ccc = " << ccc << endl;
		cout << "Global ccc = " << ::ccc << endl;

		{
			int ccc = 789;   // локална променлива во innest блок
			cout << "Innest ccc = " << ccc << endl;
			cout << "Global ccc = " << ::ccc << endl;

			// менување на глобалната променлива
			::ccc = 321;
		}

		cout << "Inner ccc = " << ccc << endl;
		cout << "Global ccc = " << ::ccc << endl;
	}

	cout << "main ccc = " << ccc << endl;
	cout << "Global ccc = " << ::ccc << endl;

	return 0;
}