//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Koverzija - primer 2 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string pi = "pi is " + to_string(3.1415926);
	string perfect = to_string(1 + 2 + 4 + 7 + 14) + "is a perfect number";

	cout << pi << endl;
	cout << perfect << endl;
	return 0;
}
