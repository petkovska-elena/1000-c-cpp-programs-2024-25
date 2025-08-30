//
// Created by Elena Petkovska on 8.4.25.
//

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    while (true)
    {
        char input[100];
        cin.getline(input, 100);

        if (input[0] == '#')
            break;

        for (int i = 0; i < strlen(input); i++)
        {
            input[i] = tolower(input[i]);
        }
        cout << input << endl;
    }
    return 0;
}

