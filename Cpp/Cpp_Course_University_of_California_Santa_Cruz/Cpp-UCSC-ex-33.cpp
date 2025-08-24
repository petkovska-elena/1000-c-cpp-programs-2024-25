//
// Created by Elena Petkovska on 7.6.25.
//

/* Define a class Number that holds an integer variable num. Implement for the class:
Necessary constructors
increaseNumber method which will increment the num value by the given integer value.
If the sum is greater than 100, set the value of num to 100 and print the message "Sum is greater than 100" getter for num.

Do not change the main function.

For example:
Input:    Output:
4         100
1         Sum is greater than 100
100       100
2         20
1000      100
3
10
10
4  */

#include <iostream>
using namespace std;

//Define the class Number
class Number
{
private:
    int num; //private member variable to store the integer

public:
    //Default constructor
    Number ()
    {
        num = 0;
    }


    //Parameterized constructor
    Number (int n)
    {
        if (n > 100)
        {
            n = 100;
            cout << "Sum is greater than 100" << endl;
        } else
        {
            num = n;
        }
    }

    //Method to increase the number
    void increaseNumber(int k)
    {
        num += k;
        if (num > 100)
        {
            num = 100;
            cout << "Sum is greater than 100" << endl;
        }
    }

    //Getter method to return num
    int get() const
    {
        return num;
    }
};

int main()
{
    Number obj1;

    int n;
    cin >> n;

    int cmd;
    int k;
    for (int i = 0; i < n; i++)
    {
        cin >> cmd;
        switch (cmd)
        {
        case 1:
            {
                cin >> k;
                Number obj2(k);
                cout << obj2.get() << endl;
                break;
            }

        case 2:
            {
                cin >> k;
                obj1.increaseNumber(k);
                cout << obj1.get() << endl;
                break;
            }

        case 3:
            {
                cin >> k;
                Number obj3(k);
                cin >> k;
                obj3.increaseNumber(k);
                cout << obj3.get() << endl;
                break;
            }

        default:
            {
                cout << obj1.get() << endl;
            }
        }
    }
}

