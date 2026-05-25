//
// Created by Elena Petkovska on 14.8.25.
//

// SNIMKI - Аудиториска вежба 3: Класи во C++
// OBJEKTNO-ORIENTIRANO PROGRAMIRANJE
// AUDITORISKI VEZBI 2 - Klasi vo C++
/* 2.2 Vraboten */

// NAJBITNO
// Pri kreiranjeto na konstruktorite sekogash prvo da se testira dali objektite se kreiraat

#include <iostream>
#include <cstring>
using namespace std;

// ENUMERACIJA
// An enum is a way to give names to numbers so your code is readable and safe.
enum positionType {
	employee, //0, means employee == 0
	manager, //1, means manager == 1
	owner //2, means owner == 2
};

class Vraboten {
private:
	char name[50];
	int salary;
	positionType position_;

public:
	Vraboten(char* name_ = "Stefan", int salary_ = 15000, positionType type_ = employee) {
		strcpy(name, name_);
		salary = salary_;
		position_ = type_;
	};

	~Vraboten() { cout << "Object is being destroyed." << endl; };

	void setName(char name_[50]) { strcpy(name, name_); }

	void setSalary(int salary_) { salary = salary_; }

	void setPosition(positionType poss) { position_ = poss; }

	int getSalary() { return salary; }

	void print() {
		cout << "Employee: " << name << " Salary: " << salary << " Position Type: ";

		// Za da go konvertirame enum od broj vo string koga se pecati
		switch (position_) {
		case employee:
			cout << "Basic" << endl;
			break;

		case manager:
			cout << "Manager" << endl;
			break;

		default:
			cout << "Owner " << endl;
			break;
		}
	}

	int compareTo(Vraboten other) {
		int diff = salary - other.salary;
		// return diff == 0 ? diff : (diff > 0) ? 1 : -1;       // Nested ternary operator

		if (diff == 0) { return 0; }
		else if (diff > 0) { return 1; }
		else { return -1; }
	}
};

void swap(Vraboten& e1, Vraboten& e2) {
	Vraboten temp = e1;
	e1 = e2;
	e2 = temp;
}

int main() {
	char name[50];
	int salary;
	int pos;

	int N;
	cin >> N;
	Vraboten employees[5];

	for (int i = 0; i < N; i++) {
		cin >> name >> salary >> pos;
		//employees[i] = Vraboten(name, salary, (positionType)pos);

		employees[i].setName(name);
		employees[i].setSalary(salary);
		// (postionType) - kastiranje - casting (explicit conversion of one date type into another)
		// It forces the integer pos to be treated as a value of the enum positionType.
		employees[i].setPosition((positionType)pos);
	}

	// Sort employees by salary in descending order
	// Bubble sort - pushing the smaller value on the right, one by one, step by step
	// i counts rounds. i does not index employees. smallest number goes at the end right.
	for (int i = 0; i < N - 1; i++) {
		// Last elements are already in place
		// j is the actual index. we use j to compare neighbour elements.
		for (int j = 0; j < N - 1; j++) {
			if (employees[j].getSalary() < (employees[j + 1].getSalary())) {
				swap(employees[j], employees[j + 1]);
			}
		}
	}

	for (int i = 0; i < N; i++) { employees[i].print(); }

	return 0;
}
