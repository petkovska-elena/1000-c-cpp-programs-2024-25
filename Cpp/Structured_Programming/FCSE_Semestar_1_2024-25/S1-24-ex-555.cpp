//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Sporedba so koristenje na relaciski operatori - primer 3 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string first;
    string second;

    cout << "Enter the first string:" << endl;
    cin >> first;

    cout << "Enter the second string:" << endl;
    cin >> second;

    if (first < second)
        cout << "The first string is smaller." << endl;
    else
        cout << "The first string is greater than or equal to the second." << endl;

    return 0;
}
