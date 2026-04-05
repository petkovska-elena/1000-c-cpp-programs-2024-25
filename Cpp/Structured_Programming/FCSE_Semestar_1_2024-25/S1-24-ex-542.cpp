//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Dinamicka alokacija na memorija. Operatori new[] i delete[] */

#include <iostream>
using namespace std;

class X
{
public:
	X() {cout << "Default constructor called " << endl; }
	X(int a):i(a) {
		cout << "Constructor (" << a << ") called " << endl;
	}
	~X() {
		cout << "Destructor for " << i << " called " << endl;
	}

	void Show() const {cout << i << endl; }
private:
	int i;
};

int main() {
	X *ip = new X;
	X *jp = new X(2);
	X *pole = new X[4] {6, 7, 8};

	ip -> Show();
	(*jp).Show();

	for (int i = 0; i < 4; i++)
	{
		cout << "pole[" << i << "]= ";
		pole[i].Show();
	}

	delete ip;
	delete jp;
	delete[] pole;
	return 0;
}
