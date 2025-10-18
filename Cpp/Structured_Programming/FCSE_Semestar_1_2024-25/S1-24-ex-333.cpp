//
// Created by Elena Petkovska on 14.8.25.
//

#include <iostream>
using namespace std;

int main() {
  
}

ФАКУЛТЕТ ЗА ИНФОРМАТИЧКИ НАУКИ И
КОМПЈУТЕРСКО ИНЖЕНЕРСТВО
СТРУКТУРНО ПРОГРАМИРАЊЕ
Внесување на текстуални низи
примери ( 5
const
int len1 = 8 , len2 = 12
char s1 len1 ], s2 len2
cin
.getline s1 , len1
if cin .fail
cin .clear
cin .ignore numeric_limits streamsize >::max(), n
cin .getline s2 , len2 , n
cout << s1 << endl << s2 << endl
20
Влез
•
This is a long
string
interesting
Излез
•
This is
interesting
Го
ресетира знаменцето за грешка
Ги отфрла сите останати знаци
додека не наиде на знак за нов
ред (вклучувајќи го и него)
Што ако се
внесе подолга
текстуална
низа???
Враќа
true ако е поставено
знаменцето за грешка