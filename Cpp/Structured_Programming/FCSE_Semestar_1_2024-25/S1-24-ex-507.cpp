//
// Created by Elena Petkovska on 14.8.25.
//

// SNIMKI - Аудиториска вежба 2: Структури во C++

#include <iostream>
#include <cstring>
using namespace std;

struct Employee
{
  char name[100];
  char position[100];
  double baseSalary;

  void readEmployee() {
    cin >> name >> position >> baseSalary;
  }

  void printEmployee() {
    cout << "Name: " << name << " Position: " << position << " Salary: " << calculateSalary() << endl;
  }

  double calculateSalary() {
    if (strcmp (position, "TA") == 0)
    {
      return 1.10 * baseSalary;
    } else if (strcmp (position, "Assistant Professor") == 0)
    {
      return 1.50 * baseSalary;
    } else if (strcmp (position, "Associate Professor") == 0)
    {
      return 1.90 * baseSalary;
    } else
    {
      return 2.4 * baseSalary;
    }
  }
};

int main() {
  //Employee is the type (the struct), employee is the variable name (one object of that type)
  Employee employee;

  //Povikuvanjeto na metodite e vo ramki na struct, zatoa ne mora da se pishuva nishto vo ()
  employee.readEmployee();
  employee.printEmployee();
  return 0;
}
