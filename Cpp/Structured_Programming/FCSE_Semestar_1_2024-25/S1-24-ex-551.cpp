//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* String: Sporedba - compare() - primer 1 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string firstName, secondName;

	cout << "Enter your name: " << endl;
	getline(cin, firstName);

	cout << "Enter your friend's name: " << endl;
	getline(cin, secondName);

	cout << "Your name: " << firstName << endl;
	cout << "Your friend's name: " << secondName << endl;

	int res = firstName.compare(secondName);

	if (res == 0)
		cout << "Both names are the same." << std::endl;
	else if (res < 0)
		cout << "Your name is smaller as compared to your friend's name. "
			 << res << endl;
	else
		cout << "Your name is greater as compared to your friend's name. "
			 << res << endl;

	return 0;
}
