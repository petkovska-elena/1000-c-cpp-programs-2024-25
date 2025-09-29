//
// Created by Elena Petkovska on 14.8.25.
//

//Kvalifikaciski Zadaci

/* Прочитај 8 цели броеви. Испечати YES ако низата е строго растечка, во спротивно NO.
Read 8 integers. Print YES if the sequence is strictly increasing, otherwise NO. */

#include <iostream>
using namespace std;

int main() {
  int niza[8];

  for (int i = 0; i < 8; i++) { cin >> niza[i];}

  bool increasing = true;
  for (int i = 0; i < 7; i++)
  {
    if (niza[i] >= niza[i+1])
    {
      increasing = false;
      break;
    }
  }

  if (increasing)
  {
    cout << "YES" << endl;
  } else
  {
    cout << "NO" << endl;
  }

  return 0;
}
