//
// Created by Elena Petkovska on 14.8.25.
//

// Kvalifikaciski zadaci
/* Да се дефинира класа Student во која ќе се чуваат информации за:

Индексот на студентот (тип: string, со default вредност "NO_ID") // TODO: done
Поените освоени на некој испит (тип: integer, со default вредност 0) // TODO: done
За класата да се дефинираат: // TODO: done

Конструктори (согласно кодот во main методот) // TODO: done
addPoints(int points) - метод кој додава поени на студентот. Да се внимава поените да не надминат 100! // TODO:
print() - метод кој ги печати информациите за студентот во следниот формат: // TODO: done
ID - POINTS - STATUS, каде што статус може да биде: // TODO:
FAILED (ако студентот има под 50 поени) // TODO:
PASSED (ако студентот има 50 или повеќе од 50 поени) // TODO:
BEST (ако студентот има 90 или повеќе од 90 поени) // TODO:

For Example:
Input:                          Output:
constructor1 151020 20          151020 - 20 FAILED
print                           151020 - 30 FAILED
addPoints 10
print

constructor2 151023             151023 - 0 FAILED
print                           151023 - 10 FAILED
addPoints 10                    151023 - 20 FAILED
print                           151023 - 33 FAILED
addPoints 10                    151023 - 48 FAILED
print                           151023 - 58 PASSED
addPoints 13                    151023 - 68 PASSED
print                           151023 - 78 PASSED
addPoints 15                    151023 - 88 PASSED
print                           151023 - 98 BEST
addPoints 10                    151023 - 100 BEST
print                           151023 - 100 BEST
addPoints 10
print
addPoints 10
print
addPoints 10
print
addPoints 10
print
addPoints 10
print
addPoints 10
print

print                         NO_ID - 0 FAILED
addPoints 50                  NO_ID - 50 PASSED
print                         NO_ID - 100 BEST
addPoints 50
print
addPoints 50 */

#include <iostream>
#include <cstring>
using namespace std;

class Student
{
private:
	string id;
	int points;

public:
	// Default konstruktor
	Student() {
		id = "NO_ID";
		points = 0;
	}

	// Constructor with Arguments (Construcotr with id)
	Student (string id) {
		this->id = id;
		this->points = 0;
	}

	// Constructor with Arguments (Construcotr with id and points)
	Student (string id, int points) {
		this->id = id;
		if (points > 100) this->points = 100;
		else if (points < 0) this->points = 0;
		else this->points = points;
	}

	void addPoints(int p) {
		points += p;

		if (points > 100)
		{
			points = 100;
		}
	}

	void print() {
		string status;
		if (points < 50)
		{
			status = "FAILED";
		} else if (points >= 50 && points < 90)
		{
			status = "PASSED";
		} else
		{
			status = "BEST";
		}

		cout << id << " - " << points << " " << status << endl;
	}
};


int main() {
	string command;
	Student s;
	string id;
	int points;

	while (cin >> command) {
		if (command == "constructor1") {
			cin >> id >> points;
			s = Student(id, points);
		} else if (command == "constructor2") {
			cin >> id;
			s = Student(id);
		} else if (command == "addPoints") {
			cin >> points;
			s.addPoints(points);
		} else if (command == "print") {
			s.print();
		}
	}

	return 0;
}
