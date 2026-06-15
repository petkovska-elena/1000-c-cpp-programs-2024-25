//
// Created by Elena Petkovska on 14.8.25.
//

/* Да се дефинира класа Student во која ќе се чуваат информации за студент кој полагал испит по некој предмет и тоа индекс (стринг), име (стринг), презиме (стринг) и поени освоени на испитот (цел број).

За класата да се дефинираат потребните конструктори , оператор за печатење << и метод int grade() (методот ја враќа оценката по предметот по скалата 0-49 (5), 50-59 (6), 60-69 (7), 70-79 (8), 80-89 (9), 90-100 (10)).

Да се дефинира класа Results во која ќе се чуваат листа на студенти кои го положиле испитот по предметот (динамички алоцирана низа од објекти од класата Student и цел број кој ја означува големината на листата).

За класата да се имплементираат:

Потребните конструктори
Оператор += за додавање на студент (Student) во резултатите
Доколку студентот кој се додава има помалку од 50 поени, односно не го положил испитот, да се фрли исклучок од класата StudentFailedException. Справувањето со исклучокот треба да испечати порака “Student with id {ID} failed the course”.
Оператор за печатење <<
Метод Results withGrade(int grade) - кој прима како аргумент оценка (цел број), а враќа нов објект од класата Results во кој во листата на студенти кои го полагале предметот се содржат само студентите со оценка grade.

Дополнете ја main функцијата со следните барања:

Од датотеката input.txt прочитајте ги информациите за сите студенти кои го полагале испитот и тоа во следниот формат: Информациите за секој студент се дадени во еден ред и тоа во редослед индекс, име, презиме и поени, одделени со празно место. По читањето на информациите за секој студент, секој студент се додава во објектот results. Во датотеката output1.txt да се испечатат резултатите за сите студенти.

Во датотеката output2.txt да се испечатат резултатите за сите студенти со оценка grade вчитана во почетниот код.

----INPUT & OUTPUT----
1.
123456 Test Test 89
678910 Test2 Test2 55
----
9

All students:
123456 Test Test 89 Grade: 9
678910 Test2 Test2 55 Grade: 6
Grade report for grade 9:
123456 Test Test89 Grade: 9 */

#include <iostream>
#include <fstream>
using namespace std;

void wtf() {
	ofstream fout("input.txt");
	string line;

	while (getline(cin, line)) {
		if (line == "-----") {
			break;
		}
		fout << line << endl;
	}
};

void rff(string path) {
	ifstream fin(path);
	string line;

	while (getline(fin, line)) {
		cout << line << endl;
	}
}

class StudentFailedException {
private:
	string ID;

public:
	StudentFailedException(string ID) {
		this->ID = ID;
	}

	void message() {
		cout << "Student with ID " << ID << " failed the course" << endl;
	}
};

class Student {
private:
	string ID;
	string name;
	string surname;
	int points;

public:
	Student() {}

	Student(string index, string name, string surname, int points) {
		this->ID = index;
		this->name = name;
		this->surname = surname;
		this->points = points;
	}

	~Student() {}

	int getPoints() {
		return points;
	}

	string &getID() {
		return ID;
	}

	int grade() {
		if (points >= 90) {
			return 10;
		} else if (points >= 80) {
			return 9;
		} else if (points >= 70) {
			return 8;
		} else if (points >= 60) {
			return 7;
		} else if (points >= 50) {
			return 6;
		} else {
			return 5;
		}
	}

	friend ostream &operator<<(ostream &out, Student &s) {
		out << s.ID << " " << s.name << " " << s.points << " Grade: " << s.grade() << endl;
	}

	friend istream &operator>>(istream &in, Student &s1) {
		in >> s1.ID >> s1.name >> s1.points;
		in.ignore();
		return in;
	}
};

class Results {
private:
	// Student *studenti e pokazhuvac kon Student, pokazhuvac kon dinamicki alocirana niza od objekti Student
	Student *studenti;
	int brojNaStudenti;

public:

	// Morame vo default constructorot da definirame sekogash koga imame dinamicki alocirana niza *
	Results() {
		brojNaStudenti = 0;
		studenti = new Student[0];
	}

	Results(Student *studenti, int brojNaStudenti) {
		this->brojNaStudenti = brojNaStudenti;
		this->studenti = new Student[0];

		for (int i = 0; i < brojNaStudenti; i++) {
			this->studenti[i] = studenti[i];
		}
	}

	Results (const Results &r) {
		brojNaStudenti = r.brojNaStudenti;
		studenti = new Student[brojNaStudenti];

		for (int i = 0; i < brojNaStudenti; i++) {
			studenti[i] = r.studenti[i];
		}
	}

	Results &operator=(const Results &r) {
		if (this != &r) {
			delete[] studenti;
		}

		brojNaStudenti = r.brojNaStudenti;
		studenti = new Student[brojNaStudenti];

		for (int i = 0; i < brojNaStudenti; i++) {
			studenti[i] = r.studenti[i];
		}

		return *this;
	}

	~Results() {
		delete[] studenti;
	}

	int getBrojNaStudenti() const {
		return brojNaStudenti;
	}

	// Throw error
	// Kaj preptovaruvanjeto na operatorite += -= *= /= sekogash koristime return this
	Results &operator+=(Student &other) {
		if (other.getPoints() < 50) {
			throw StudentFailedException(other.getID());
		}

		Student *temp = new Student[brojNaStudenti + 1];
		for (int i = 0; i < brojNaStudenti; i++) {
			temp[i] = studenti[i];
		}

		temp[brojNaStudenti] = other;
		delete[] studenti;
		brojNaStudenti++;

		// Studenti = temp;
		studenti = new Student[brojNaStudenti];
		for (int i = 0; i < brojNaStudenti; i++) {
			studenti[i] = temp[i];
		}

		return *this;
	}

	friend ostream &operator<<(ostream &out, Results &r) {
		for (int i = 0; i < r.brojNaStudenti; i++) {
			out << r.studenti[i];
		}

		return out;
	}

	Results withGrade(int grade) {
		Results nov;

		for (int i = 0; i < brojNaStudenti; i++) {
			if (studenti[i].grade() == grade) {
				nov += studenti[i];
			}
		}

		return nov;
	}
};

int main() {
	wtf();

	Results results;
	// TODO your code here
	// TODO Read the students from the file and add them in 'results'

	// ifstream = input file stream
	ifstream in;
	in.open(("input.txt"));
	string id;
	string name;
	string surname;
	int points;

	while (in >> id >> name >> surname >> points) {
		// Mora da stavime .ignore() za da se ignorira nekoj karakter, najcesto karakter za nov red \n na sekoj red
		in.ignore();
		try {
			Student s(id, name, surname, points);
			results += s;
		} catch (StudentFailedException &sfe) {
			sfe.message();
		}
	}

	in.close();

	// DO NOT MODIFY THE CODE BETWEEN THIS AND THE NEXT COMMENT
	int grade;
	cin >> grade;
	// DO NOT MODIFY THE CODE BETWEEN THIS AND THE PREVIOUS COMMENT

	// TODO Save the results in the files output1.txt and output2.txt after this line
	// ofstream = output file stream
	ofstream out1, out2;
	out1.open("output1.txt");
	out2.open("output2.txt");

	out1 << results;
	out1.close();

	Results nov = results.withGrade(grade);

	if (!nov.getBrojNaStudenti()) {
		out2 << "None";
	} else {
		out2 << nov;
	}

	out2.close();

	//DO NOT MODIFY THE CODE BELOW
	cout << "All students: " << endl;
	rff("output.txt");

	cout << "Grade report for grade " << grade << ": " << endl;
	rff("output.txt");

	return 0;
}
