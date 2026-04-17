//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* String: Sporedba - compare() - primer 2 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string first("green apple");
    string second("red apple");

    if (first.compare(second) != 0)
        cout << first << " is not " << second << endl;

    if (first.compare(6, 5, "apple") == 0)
        cout << "still, " << first << " is an apple" << endl;

    if (second.compare(second.size() - 5, 5, "apple") == 0)
        cout << "and " << second << " is also an apple" << endl;

    if (first.compare(6, 5, second, 4, 5) == 0)
        cout << "therefore, both are apples" << endl;

    return 0;
}
