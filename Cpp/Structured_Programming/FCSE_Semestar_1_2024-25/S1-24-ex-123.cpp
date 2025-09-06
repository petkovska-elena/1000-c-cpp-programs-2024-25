// Created by Elena Petkovska on 4.6.2025.
//

/* Courses FINKI 2024/25 - Zadachi za vezhbanje za 1 kolokvium */

/* TO-DO Steps:
* 1. Од стандарден влез се внесува еден позитивен цел број z.
* 2. Потоа последователно се внесуваат парови цели броеви (a, b).
* 3. Внесувањето завршува кога ќе се внесе парот (0, 0).
* 4. Потребно е да се пресмета:
*    - Колку пати збирот a + b е еднаков на z.
*    - Колкав процент од вкупниот број на внесени парови имаат збир еднаков на z.
* 5. Парот (0, 0) **не** се зема предвид при пресметките.
* 6. На излез се печати:
*    - Бројот на парови чииот збир е еднаков на z.
*    - Процентот на тие парови од вкупниот број парови.
*
* For Example:
* Input:
* 100
* 50 50
* -50 -50
* -99 199
* 32 98
* 0 0
* Result:
* Vnesovte 2 parovi od broevi chij zbir e 100
* Procentot na parovi so zbir 100 e 50%
*/

#include <iostream>
using namespace std;

int main() {
    int z;
    cin >> z;

    int counter = 0;
    int total = 0;
    int a, b;


    while (cin >> a >> b)
    {
        if (a == 0 && b == 0) { break; }
        if ((a + b) == z)
        {
            counter++;
        }
        total++;
    }

    float procent = 0;
    if (total > 0)
        procent = (counter / (float)total) * 100.0;
    cout << "Vnesovte " << counter << " parovi od broevi chij zbir e " << z << endl;
    cout << "Procentot na parovi so zbir " << z << " e " << procent << "%" << endl;
    return 0;
}
