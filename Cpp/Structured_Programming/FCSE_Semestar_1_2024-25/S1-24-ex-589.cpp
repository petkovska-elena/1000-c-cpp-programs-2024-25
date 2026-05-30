//
// Created by Elena Petkovska on 14.8.25.
//

/* Да се имплементира класа List во којашто ќе се чуваат информации за:

броеви што се дел од листата (динамички алоцирана низа од цели броеви)
бројот на броеви што се дел од листата
За класата да се дефинираат следните методи:

конструктор (со аргументи), copy-конструктор, деструктор, оператор =
void pecati() метод што ќе ги печати информациите за листата во форматот: [број на елементи во листата]: x1 x2 .. xn sum: [сума] average: [просек]
int sum() метод што ја враќа сумата на елементите во листата
double average() метод што ќе го враќа просекот на броевите во листата
Дополнително, креирајте класата ListContainer, во која што ќе се чуваат информации за:

низа од листи (динамички алоцирана низа од објекти од класата List)
број на елементи во низата од листи (цел број)
број на обиди за додавање на листа во контејнерот (цел број првично поставен на нула)
За класата потребно е да ги дефинирате следните методи:

конструктор (default), copy-конструктор, деструктор, оператор =
void pecati() метод што ќе ги печати информациите за контејнерот во форматот: List number: [реден број на листата] List info: [испечатени информации за листата со методот List::pecati()] \n sum: [сума] average: [просек]
доколку контејнерот е празен се печати само порака The list is empty.
void addNewList(List l) метод со којшто се додава листа во контејнерот
Напомена: една листа се додава во контејнерот ако и само ако има различна сума од сите листи што се веќе додадени во контејнерот
int sum() метод што ја враќа сумата на сите елементи во сите листи
double average() метод што го враќа просекот на сите елементи во сите листи во контејнерот

Влез:
5
5
1 2 3 4 5
2
10 5
3
1 2 3
6
1 4 5 6 7 10
3
10 10 13
0
Излез:
List number: 1 List info: 5: 1 2 3 4 5 sum: 15 average: 3
List number: 2 List info: 3: 1 2 3 sum: 6 average: 2
List number: 3 List info: 6: 1 4 5 6 7 10 sum: 33 average: 5.5
Sum: 54 Average: 3.85714
Successful attempts: 3 Failed attempts: 2

Влез:
5
5
1 2 3 4 5
2
10 5
3
1 2 3
6
1 4 5 6 7 10
3
10 10 13
1
Излез:
Test case for operator =
The list is empty
0 54
List number: 1 List info: 5: 1 2 3 4 5 sum: 15 average: 3
List number: 2 List info: 3: 1 2 3 sum: 6 average: 2
List number: 3 List info: 6: 1 4 5 6 7 10 sum: 33 average: 5.5
Sum: 54 Average: 3.85714
Successful attempts: 3 Failed attempts: 2
54 54

Влез:
2
1
1
2
0 1
0
Излез:
List number: 1 List info: 1: 1 sum: 1 average: 1
Sum: 1 Average: 1
Successful attempts: 1 Failed attempts: 1 */

#include <iostream>
using namespace std;

class List {
private:
	// Ke bide dinamicka niza, stavame * bidejki ne znaeme kolkva ke ni bide dinamicki alocirnaata niza
	int *numbers;
	int numElements;

public:

	// Sekogash koga imame dinamicki alocirana niza, ova sekogash morame da go definirame vo
	// Defaultniot konstruktor
	List() {
		numElements = 0;
		this->numbers = new int[0];
	}

	List (int *numbers, int numElements) {
		this->numElements = numElements;
		// Alociranjeto na dinamicki alociranata niza
		this-> numbers = new int[numElements];

		for (int i = 0; i < numElements; i++) {
			this->numbers[i] = numbers[i];
		}
	}

	List (const List &list) {
		this->numElements = list.numElements;
		this->numbers = new int[numElements];

		for (int i = 0; i < numElements; i++) {
			numbers[i] = list.numbers[i];
		}
	}

	// DA GO PREOPTOVARIME OPERATOROT =
	List & operator=(const List &list) {
		if (this != &list) {
			delete[] numbers;

			numElements = list.numElements;
			numbers = new int[numElements];

			for (int i = 0; i < numElements; i++) {
				numbers[i] = list.numbers[i];
			}
		}

		return *this;
	}

	// Sekogash koga imame dinamicki alocirana niza morame da napravime delete na nizata vo destruktorot
	// Bidejki pri brishenje na samiot objekt preku destruktorot morame da ja oslobodime memorijata od alociranta niza
	~List() {
		delete[] numbers;
	}

	int getNumElements() {
		return numElements;
	}

	int sum() {
		int sum = 0;
		for (int i = 0; i < numElements; i++) {
			sum += numbers[i];
		}

		return sum;
	}

	double average() {
		double avg = sum() / (double) numElements;
		return avg;
	}

	// 5: 1 2 3 4 5 sum: 15 average: 3
	void pecati() {
		cout << numElements << ": ";
		for (int i = 0; i < numElements; i++) {
			cout << numbers[i] << " ";
		}

		cout << "sum: " << sum() << " average:" << average() << endl;
	}
};

class ListContainer {
private:
	List *list;
	int numList;
	int tries;

public:
	ListContainer() {
		tries = 0;
		numList = 0;
		list = new List[0];
	}

	ListContainer(List *list, int numlist, int tries) {
		this->numList = numList;
		this->list = new List[numList];

		for (int i = 0; i < numList; i++) {
			this->list[i] = list[i];
		}

		this->tries = tries;
	}

	ListContainer(const ListContainer &other) {
		numList = other.numList;
		list = new List[numList];

		for (int i = 0; i < numList; i++) {
			list[i] = other.list[i];
		}

		tries = other.tries;
	}

	ListContainer & operator=(const ListContainer &other) {
		if (this != &other) {
			delete[] list;

			numList = other.numList;
			list = new List[numList];

			for (int i = 0; i < numList; i++) {
				list[i] = other.list[i];
			}

			tries = other.tries;
		}

		return *this;
	}

	~ListContainer() {
		delete[] list;
	}

	int sumOfNumElements() {
		int sumNumElements = 0;
		for (int i = 0; i < numList; i++) {
			sumNumElements += list[i].getNumElements();
		}

		return sumNumElements;
	}

	int sum() {
		int sum = 0;
		for (int i = 0; i < numList; i++) {
			sum += list[i].sum();
		}

		return sum;
	}

	double average() {
		return sum() / (double) sumOfNumElements();

	}

	void addNewList(List l) {
		++tries;

		for (int i = 0; i < numList; i++) {
			if (list[i].sum() == l.sum()) {
				return;
			}
		}

		List *temp = new List[numList + 1];
		for (int i = 0; i < numList; i++) {
			temp[i] = list[i];
		}

		temp[numList] = l;
		delete[] list;
		numList++;

		list = new List[numList];
		for (int i = 0; i < numList; i++) {
			list[i] = temp[i];
		}
	}

	void print() {
		if (numList == 0) {
			cout << "The list is empty" << endl;
			return;
		}

		for (int i = 0; i < numList; i++) {
			cout << "List Number: " << i + 1 << " List Info:";
			list[i].pecati();
		}

		cout << "Sum: " << sum() << " Average: " << average() << endl;
		cout << "Successfull attempts: " << numList << " Failed attempts: " << tries - numList;
	}
};

int main() {
	ListContainer lc;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int n;
		int niza[100];
		cin >> n;

		for (int j = 0; j < n; j++) {
			cin >> niza[j];
		}

		List l = List(niza, n);
		lc.addNewList(l);
	}

	int testCase;
	cin >> testCase;

	if (testCase == 1) {
		cout << "Test case for operator = " << endl;
		ListContainer lc1;

		lc1.print();
		cout << lc1.sum() << " " << lc.sum() << endl;

		lc1 = lc;
		lc1.print();
		cout << lc1.sum() << " " << lc.sum() << endl;

		lc1.sum();
		lc1.average();
	} else {
		lc.print();
	}

	return 0;
}
