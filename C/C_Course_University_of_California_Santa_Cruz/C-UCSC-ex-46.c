// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

/* Write a struct that has a member that is the name of a business department:
 * HR, Sales, Research, Software, and Executive (use enums for the 4 departments).
 * A second member that is an annual salary as an int. A third member that is a social security number(unsigned).
 * Generate 10 employees with different social security numbers.
 * Invent a salary generator for each department (use some base salary for the department and add in a randomly generated offset).
 * Print out the 10 employees and their values to the screen-one line at a time. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Enum for departments
typedef enum {
    HR,
    Sales,
    Research,
    Software,
    Executive
} Department;

// Struct for employee
typedef struct {
    Department dept;
    int salary;
    unsigned int ssn;
} Employee;

// Get department name from enum
const char* getDepartmentName(Department dept) {
    switch (dept) {
    case HR: return "HR";
    case Sales: return "Sales";
    case Research: return "Research";
    case Software: return "Software";
    case Executive: return "Executive";
    default: return "Unknown";
    }
}

// Salary generator based on department
int generateSalary(Department dept) {
    int base, offset;
    switch (dept) {
    case HR:        base = 40000; break;
    case Sales:     base = 45000; break;
    case Research:  base = 60000; break;
    case Software:  base = 70000; break;
    case Executive: base = 100000; break;
    default:        base = 30000; break;
    }
    offset = rand() % 10000; // Random addition up to 9999
    return base + offset;
}

int main() {
    srand(time(NULL)); // Seed for randomness

    Employee employees[10];

    for (int i = 0; i < 10; i++) {
        employees[i].dept = rand() % 5;                  // Random department
        employees[i].ssn = 100000000 + rand() % 90000000; // 9-digit SSN
        employees[i].salary = generateSalary(employees[i].dept);
    }

    // Print the employee data
    printf("Dept\t\tSalary\t\tSSN\n");
    printf("--------------------------------------\n");
    for (int i = 0; i < 10; i++) {
        printf("%-10s\t$%d\t\t%u\n",
            getDepartmentName(employees[i].dept),
            employees[i].salary,
            employees[i].ssn);
    }

    return 0;
}