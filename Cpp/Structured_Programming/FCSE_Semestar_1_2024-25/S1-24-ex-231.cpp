//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај 12 цели броеви. Испечати го збирот на броевите што се деливи со 3, но не се деливи со 5.
Read 12 integers and print the sum of those divisible by 3 but not by 5. */

#include <iostream>
using namespace std;

int main() {
  int a[12], sum = 0;

  for (int i = 0; i < 12; i++)
  {
    cin >> a[i];
    if (a[i] % 3 == 0 && !(a[i] % 5 == 0))
    {
      sum += a[i];
    }
  }
  cout << sum << endl;
}
