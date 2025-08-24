//
// Created by Elena Petkovska on 30.5.25.
//

/* Auditoriski Vezbi 1 (09.10.2024) */

/* Да се напише програма која чита голема буква од стандарден влез и ја печати истата како мала буква.
 * Напомена: Секој знак се претставува со ASCII број. */


#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char a;
    cout << "Please enter an uppercase character: ";
    cin >> a;

    //check if the input is uppercase before converting
    if (isupper(a))
    {
        cout << "The lowercase version of the character " << a << " is: " << char (a + ('a' - 'A')) << endl;
    }

    else
    {
        cout << "Invalid input! Please enter an uppercase character! " << endl;
    }

    return 0;
}



//Opposite case (lower to upper)
/*
#include <iostream>
using namespace std;

int main()
{
    char a;
    cout << "Please enter a lowercase character: ";
    cin >> a;

    //Check if the input is a lowercase character before converting
    if (islower(a))
    {
        cout << "The uppercase version of the character " << a << " is: " << char (a + ('A' - 'a')) << endl;
    }

    else
    {
        cout << "Invalid input! Please enter a lowercase character! " << endl;
    }

    return 0;
} */



//Other alternative for turning lower to upper
/*
#include <iostream>
using namespace std;

int main()
{
    char a;
    cout << "Please enter a lowercase character: ";
    cin >> a;

    //Check if the input is a lowercase character before converting
    if (isupper(a))
    {
        cout << "Invalid character! Please enter a lowercse character!" << endl;
    }

    else
    {
        cout << "The uppercase version of the character is: " << char (a + ('A' - 'a')) << endl;
    }

    return 0;
} */