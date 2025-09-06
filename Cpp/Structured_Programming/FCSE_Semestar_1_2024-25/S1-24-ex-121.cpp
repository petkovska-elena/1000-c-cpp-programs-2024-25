// Created by Elena Petkovska on 4.6.2025.
//

/* Courses FINKI 2024/25 - Zadachi za vezhbanje za 1 kolokvium */

/* TO-DO Steps:
* 1. Од стандарден влез се чита еден природен број n.
* 2. Меѓу природните броеви помали од n, да се најде оној чиј збир на делителите е најголем.
* 3. Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број.
*
* For Example:
* Input:
* 10
* Result:
* 8 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int max_sum = 0;
    int result = 0;

    for (int i = 1; i < n; i++)
    {
        int sum = 0;

        for (int j = 1; j <= i/2; j++)
        {
            if (i % j == 0) { sum += j; }
        }

        if (sum > max_sum)
        {
            max_sum = sum;
            result = i;
        }
    }

    cout << result << endl;
    return 0;
}
