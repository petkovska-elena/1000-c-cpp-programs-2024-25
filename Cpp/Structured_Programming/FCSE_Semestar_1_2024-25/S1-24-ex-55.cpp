//
// Created by Elena Petkovska on 8.4.25.
//

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int price;
    cin >> price;

    double max = 0;
    int maxtype;
    char maxticket[100];
    char input[100]; // Declare input array to store the input string
    double dobivka = 1.0; //Initialize dobivka

    while (true) //Add a loop to allow multiple entries
    {
        cin >> input;
        if (input[0] == '#') //Check for # to break the loop
        {
            break;
        }

        int type;
        double coef;
        cin >> type >> coef;

        if (coef > max) //Update max and related variables if a new maximum is found
        {
            max = coef;
            strcpy (maxticket, input); //Copyt the input to maxticket
            maxtype = type;
        }

        dobivka *= coef; //Multiply dobivka by coef for each entry
    }

    cout << maxticket << " " << maxtype << " " << max << endl; //Output results
    return 0;
}


