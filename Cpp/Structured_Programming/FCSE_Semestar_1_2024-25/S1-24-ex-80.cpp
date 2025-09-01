//
// Created by Elena Petkovska on 8.4.25.
//

//
// Created by Elena Petkovska on 8.4.25.
//

/* Kolokviumski zadaci */

/* Сума-рабен број на даден број се смета бројот за кој последните 2 цифри од првичниот број ќе се заменат со нивната сума.
 * Така на пример сума-рабен број на 187478 е 187415 (последните две цифри 7 и 8 се собираат и се добива 15).
 * Дополнително, доколку некој од собироците (последните 2 цифри) е цифрата 0, таа се заменува со 1.
 * Постапката може да се повтори за секој новодобиен број се додека се добива повеќецифрен број (број кој има повеќе од 1 цифра).
 * Едноцифрениот број кој се добива преку повторување на постапката се нарекува краен сума-рабен број.
 * Од тастатура се внесуваат непознат број на цели броеви се додека не се внесе нешто различно од број.
 * За секој од внесените броеви треба да се испечатат сите сума-рабни броеви се’ додека не се добие крајниот сума-рабен број.
 * Објаснување:
 * 123456789 – последните 2 цифри (8 и 9) се заменуваат со нивната сума (17) и се добива 123456717
 * Потоа постапката се повторува. */



#include <iostream>
using namespace std;

int suma_raben_broj(int n) {
    int last = n % 10;
    int second_last = (n / 10) % 10;

    if (last == 0) last = 1;
    if (second_last == 0) second_last = 1;

    int sum = second_last + last;
    int rest = n / 100;

    if (sum < 10)
        return rest * 10 + sum;
    else
        return rest * 100 + sum;
}

int main() {
    int num;

    cout << "Vnesuvaj broevi. Za prekin, vnesi karakter koj shto ne e broj: " << endl;

    while (cin >> num) {
        int steps = 0;
        cout << "Transformacii za brojot:" << endl;

        while (num >= 10) {
            int next = suma_raben_broj(num);
            cout << num << " -> " << next << endl;

            if (next == num) break;

            num = next;
            steps++;
        }

        cout << "Kraen suma-raben broj: " << num << " (vo " << steps << " cekori)" << endl;
    }

    return 0;
}
