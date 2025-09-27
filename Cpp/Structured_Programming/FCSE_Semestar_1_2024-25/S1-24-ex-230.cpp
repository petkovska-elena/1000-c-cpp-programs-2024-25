//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај низа од точно 17 цели броеви. Испечати ги секој втор елемент по редослед во еден ред раздвоени со едно празно место. Почнуваш од вториот елемент.
Read exactly 17 integers. Print every second element in order on one line separated by spaces, starting from the second element. */

#include <iostream>
using namespace std;

int main() {
  int a[17];

  // Read exactly 17 integers
  for (int i = 0; i < 17; i++) {
    cin >> a[i];
  }

  for (int i = 1; i < 17; i += 2) {
    cout << a[i];
    if (i < 15) cout << " ";
  }

  return 0;
}
