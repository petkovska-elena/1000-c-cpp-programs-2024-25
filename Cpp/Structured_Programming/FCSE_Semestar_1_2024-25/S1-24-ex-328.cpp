//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 11 - Pokazhuvaci

/* Константни покажувачи */
// Пример за декларирање и иницијализација на текстуална низа

// a[] = "hello\n"
// *b
// *(b+1)
// *(b+2)
// *(b+3)
// *(b+4)
// *(b+5)
// *(b+6)

// a[0]  a[1]  a[2]  a[3]  a[4]  a[5]  a[6]
//  h     e     l     l     o    \n     \0
// 104   101   108   108   111   10     0
// Декларација и иницијализација

#include <iostream>
using namespace std;

int main() {
	char s1[10];
	char *s2;
	char s3[10] = "hello";
	char s5[6] = "hello";
	char a[] = "hello\n";
	const char *b = "hello\n";
	char *s4 = "hello\n";

	return 0;
}