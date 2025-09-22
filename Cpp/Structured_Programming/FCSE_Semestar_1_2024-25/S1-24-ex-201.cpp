//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski vezhbi 6

/* Да се напише програма која што ќе ги отпечати сите четирицифрени природни броеви кои се деливи со збирот на двата
 * броја составени од првите две цифри и од последните две цифри на четирицифрениот број.
 * На крајот треба да отпечати и колку вакви броеви се пронајдени.
 * Пример:
 * 3417 е делив со 34 + 17
 * 5265 е делив со 52 + 65
 * 6578 е делив со 65 + 78 */

#include <iostream>
using namespace std;

int zbir_po_2_cifri(int n) {
    return n % 100 + n/100;
}

int main() {
  int i;
  int count = 0;

  for (i = 1000; i <= 9999; ++i)
  {
      if (i % zbir_po_2_cifri(i) == 0)
      {
          cout << i << endl;
          count++;
      }
  }
  cout << "Vkupno " << count << endl;
  return 0;
}
