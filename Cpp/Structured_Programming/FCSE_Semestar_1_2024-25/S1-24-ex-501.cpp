//
// Created by Elena Petkovska on 14.8.25.
//

//OBJEKTNO-ORIENTIRANO PROGRAMIRANJE
//AUDITORISKI VEZBI 1 - Strukturi vo C++
/* 1.1 Date
 * Да се напише програма која ќе споредува два датуми (ден, месец, година)
 * и ќе ја пресмета разликата во денови од едниот до другиот датум.
 * Пресметките да се реализираат во посебни функции.
 * За датумот да се дефинира посебна структура date.
 */

#include <iostream>
using namespace std;

struct Date
{
	int year;
	int month;
	int day;

	/*
	//Sporeduvanje so Terneren Operator (?)
	int Compare(Date other) {
		return year != other.year ? (year > other.year ? 1 : -1) : (month != other.month ? (month > other.month ? 1 : -1) : (day != other.day > (day > other.day ? 1 : -1) : 0));
	}
	*/

	// Method Compare
	int compare (Date other) {
		if (year > other.year) return 1;
		else if (year < other.year) return -1;
		else                                             //d1.year == other.year
		{
			if (month > other.month) return 1;
			else if (month < other.month) return -1;
			else                                         //d1.month == ohter.month
			{
				if (day > other.day) return 1;
				else if (day < other.day) return -1;
				else return 0;
			}
		}
	}

	//This function is an approximation
	int daysDiff(Date other) {
		int days = day - other.day;
		days += (month - other.month) * 30;
		days += (year - other.year) * 365;
		return days;
	}
};

// Method for reading
void read(Date &date) {
	cin >> date.day >> date.month >> date.year;
}

// Method for printing
void print(Date d) {
	cout << d.day << d.month << d.year;
}

int main() {
    Date d1;
	Date d2;
	read(d1);
	read(d2);

	int result = d1.compare(d2);
	if (result == 0)
	{
		cout << "Dates are equal" << endl;
	} else if (result > 0)
	{
		cout << "The difference in days is " << d1.daysDiff(d2) << " days." << endl;
	} else
	{
		cout << "The difference in days is " << d2.daysDiff(d1) << " days." << endl;
	}
	return 0;
}
