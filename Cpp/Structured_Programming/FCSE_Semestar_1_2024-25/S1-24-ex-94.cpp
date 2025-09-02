//
// Created by Elena Petkovska on 8.4.25.
//

/* Kolokvium 1 zadaci - ENG */

/* od a do b
 * 28940 middle flip
 * 2 498 0
 * ako 498 se deli so 20 printaj */

// 1. Read two integers: start and end of the range
#include <iostream>
using namespace std;

int main() {
    // 2. Set counter = 0 for counting interesting numbers
    int start, end, counter = 0;
    cin >> start >> end;

    // 3. Loop through all numbers from start to end:
    for (int i = start; i <= end; i++)
    {
        // 3.1 Store the number in a temp variable
        int temp = i;
        // 3.2 Extract the last digit → digit1
        const int digit_1 = temp % 10;
        // 3.3 Remove the last digit from temp
        temp = temp / 10;

        // 3.4 Initialize flipped = 0
        int flipped = 0;
        // 3.5 Reverse the rest of the number (except the last digit):
        // while temp > 0:
        while (temp > 0)
        {
            // Add last digit of temp to flipped (in reverse order)
            flipped = flipped * 10 + temp % 10;
            // Remove last digit from temp
            temp = temp / 10;
        }

        // 3.6 Extract first digit from flipped → digit2
        const int digit_2 = flipped % 10;
        // 3.7 Remove first digit from flipped → now only middle part remains
        flipped = flipped / 10;

        // 3.8 Calculate sum of first and last digits → zbir = digit1 + digit2
        int zbir = digit_1 + digit_2;

        // 3.9 If middle part is divisible by zbir AND middle ≠ 0:
        if (flipped % zbir == 0 && flipped != 0)
        {
            // Print the number with explanation
            cout << i << " -> " << "(" << flipped << " == " << "(" << digit_1 << " + " << digit_2 << ") * " << flipped/zbir << ")" << endl;
            // Increment counter
            counter++;
        }
    }
    // 4. Print the total counter of such numbers
    cout << counter << endl;
    return 0;
}














