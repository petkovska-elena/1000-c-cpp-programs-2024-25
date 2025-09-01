//
// Created by Elena Petkovska on 8.4.25.
//

/* Kvalifikaciski zadaci */

/* да се најде и испечати сумата на збирот на секоја цифра
 на секој 3 цифрен број кој е помал од 523 */


#include <iostream>
using namespace std;

int main() {
    int suma = 0;
    int zbir;

    for (int i = 100; i < 523; i++) {
        int last_digit = i % 10;
        int second_last = (i / 10) % 10;
        int first_digit = i / 100;

        zbir = first_digit + second_last + last_digit;
        suma += zbir;
        }

    cout << suma << endl;
    return 0;
    }



/* Drug nacin:

#include <iostream>
using namespace std;

int main() {
    int suma=0,zbir;

    for(int i=100; i<523; i++) {
        zbir=0;
        int num=i;
        while(num>0){
        int temp=0;
        temp = num % 10;
        zbir += temp;
        num /= 10; }

    suma=suma+zbir;
}
cout << suma << endl;
return 0;
} */