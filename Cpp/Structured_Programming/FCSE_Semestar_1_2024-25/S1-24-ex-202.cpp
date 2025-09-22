//
// Created by Elena Petkovska on 14.8.25.
//

//Auditoriski vezhbi 6

/* Да се напише програма која за даден природен број ја пресметува разликата помеѓу најблискиот поголем од него прост број и самиот тој број.
 * Пример:
 * Ако се внесе 573, програмата треба да испечати 577 – 573 = 4 */

#include <iostream>
using namespace std;

int prost (int n) {
  int i;
  for (i = 2; i * i <= n; ++i){
    if (n % i == 0){
      return 0;
    }
  }
  return 1;
}

int prv_pogolem_prost_broj (int n){
  ++n;
  while (!prost(n)){
    ++n;
  }
  return n;
}

int main() {
  int n;
  cin >> n;
  int pogolem_prost_broj = prv_pogolem_prost_broj (n);
  cout << pogolem_prost_broj << " - " << n << " = " << pogolem_prost_broj - n << endl;
  return 0;
}
