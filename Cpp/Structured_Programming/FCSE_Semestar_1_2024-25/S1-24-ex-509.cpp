//
// Created by Elena Petkovska on 14.8.25.
//

// SNIMKI - Аудиториска вежба 2: Структури во C++
// Referenci

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

void normaliseName(char *name) {
	name[0] = toupper(name[0]);

	for (int i = 1; i < strlen(name); i++)
	{
		name[i] = tolower(name[i]);
	}
}

struct Student
{
	char firstName[100];
	char lastName[100];
	char index[10];
	int grades[40];
	int countGrade;

	void readStudent() {
		cin >> firstName >> lastName >> index >> countGrade;
		for (int i = 0; i < countGrade; i++)
		{
			cin >> grades[i];
		}
	}

	void printStudent() {
		normaliseName(firstName);
		normaliseName(lastName);
		cout << firstName << " " << lastName << " " << index << " " << average() << endl;
	}

	float average() {
		float sum = 0;
		for (int i  = 0; i < countGrade; i++)
		{
			sum += grades[i];
		}
		return sum / countGrade;
	}
};

void sort(Student *students, int n) {
	int i, j;
	Student temp;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++) {
			if (students[j].average() < students[j + 1].average())
			{
				temp = students[j];
				students[j] = students[j + 1];
				students[j + 1] = temp;
			}
		}
	}
}

int main() {
    int n;
	cin >> n;
	Student students[100];

	for (int i = 0; i < n; i++)
	{
		students[i].readStudent();
	}

	sort (students, n);

	for (int i = 0; i < n; i++)
	{
		students[i].printStudent();
	}
}
