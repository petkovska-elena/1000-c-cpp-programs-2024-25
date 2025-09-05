// Created by Elena Petkovska on 4.6.2025.
//

/* Laboratoriski vezbi 1 - 2024/25 */

/* 1. At FINKI, it's time to enroll new students.
 * 2. For a student to enroll, he should arrive at the faculty before 9 a.m. and wait in line to be served by the student service.
 * 3. Student service starts working from 9 o'clock, works 2 hours, takes a break of 30 minutes, works 1 hour, takes a break of 30 minutes, works 2 hours and its working time ends.
 * 4. Student service needs exactly 5 minutes to serve 1 student.
 * 5. Your task is, if you know which number a certain student is in line, to print the time in hours and minutes that he will be waiting to be served,
 * 6. or “Student will not be served at all” if he will not be served at all because the working hours of the student service will end.
 * Example: Input:  26                       12
 * Example: Result: Hours: 2, minutes: 35    Hours: 0, minutes: 55 */

#include <iostream>
using namespace std;

int main() {
    int reden_broj;
    cin >> reden_broj;
    int time = 0;

    if (reden_broj <= 24) { time = (reden_broj * 5) - 5; }
    else if (reden_broj > 24 && reden_broj <= 36)
    {
        time += 30;
        time += (reden_broj * 5) - 5;
    } else if (reden_broj > 36 && reden_broj <= 60)
    {
        time += 60;
        time += (reden_broj * 5) - 5;
    } else
    {
        time = -1;
    }

    if (time > 0) { cout << "Hours: " << time/60 << ", minutes: " << time % 60 << endl; }
    else { cout << "Studentot ne e voopsto usluzen"; }
    return 0;
}
