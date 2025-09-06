// Created by Elena Petkovska on 4.6.2025.
//

/* Courses FINKI 2024/25 - Zadachi za vezhbanje za 1 kolokvium */

/* TO-DO Steps:
* 1. Од стандарден влез се внесуваат два цели броја N и X.
* 2. Треба да се најде најблискиот број помал од N кој е тотално различен од бројот X.
* 3. Еден број е тотално различен од друг ако и само ако во него не се појавува ниту една од цифрите на другиот број.
* 4. Забрането е користење на низи и матрици.
*
* For Example:
* Input:
* 88 7
* Result:
* 86
*/

#include <iostream>
using namespace std;

bool e_razlichen (int n, int x){
    int n_temp = n;

    while (n_temp > 0){
        int x_temp = x;

        while (x_temp > 0){
            if (n_temp % 10 == x_temp % 10) { return false; }
            x_temp /= 10;
        }
        n_temp /= 10;
    }
    return true;
}

int main() {
    int n, x, res = 0;
    cin >> n >> x;

    for (int i = n -1; i > 0; i--){
        if (e_razlichen (i, x)){
            res = i;
            break;
        }
    }

    cout << res << endl;
    return 0;
}
