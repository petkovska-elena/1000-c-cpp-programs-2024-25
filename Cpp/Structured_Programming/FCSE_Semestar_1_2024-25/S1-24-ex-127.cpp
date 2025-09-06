// Created by Elena Petkovska on 4.6.2025.
//

/* Courses FINKI 2024/25 - Zadachi za vezhbanje za 1 kolokvium */

/* TO-DO Steps:
* 1. Од стандарден влез се читаат знаци еден по еден.
* 2. Читањето завршува кога ќе се прочита знакот '.' (точка).
* 3. Во внесениот текст се кријат хексадецимални цифри:
*    - тие се бројки ('0' до '9') или букви ('A' до 'F', 'a' до 'f')
* 4. За секоја хексадецимална цифра:
*    - претвори ја во децимална вредност (на пр. 'A' = 10, 'F' = 15, '3' = 3)
*    - додади ја таа вредност во вкупниот збир
*
* 5. Откако ќе се прочита точката:
*    - провери дали збирот е делив со 16 (zbir % 16 == 0)
*    - провери дали последните две цифри на збирот се 1 и 6
*      (на пример, ако zbir = 316, тогаш завршува со 16)
*
* 6. Ако збирот:
*    - е делив со 16 и завршува со 16 → испечати "Poln pogodok"
*    - е делив со 16 → испечати "Pogodok"
*    - инаку → испечати го самиот збир како број
*
* Пример:
* Влез: A 7 F 2 0 c A 5 .
* Збир: 10 + 7 + 15 + 2 + 0 + 12 + 10 + 5 = 61 → не е делив со 16 → Печати: 61
*
* Влез: 0 1 0 0 1 d 0 0 . → збир: 0+1+0+0+1+13+0+0 = 15 → Печати: 15
* Влез: 1 6 . → збир: 1+6 = 7 → Печати: 7
*/

#include <iostream>
using namespace std;

int main() {
    char hex_char;
    int dekaden_zbir = 0;
    int digit;

    while (cin >> noskipws >> hex_char)
    {
        if (hex_char == '.') { break; }
        if (hex_char >= '0' && hex_char <= '9') { digit = hex_char - '0'; }
        else if (hex_char >= 'A' && hex_char <= 'F') { digit = hex_char - 'A' + 10; }
        else if (hex_char >= 'a' && hex_char <= 'f') { digit = hex_char - 'a' + 10; }
        else continue;
    }

    if (dekaden_zbir % 16 == 0 ) { cout << "Pogodok" << endl; }
    else if (dekaden_zbir % 16 == 0 && dekaden_zbir % 100 == 16) { cout << "Poln pogodok" << endl; }
    else { cout << dekaden_zbir << endl; }
    return 0;
}
