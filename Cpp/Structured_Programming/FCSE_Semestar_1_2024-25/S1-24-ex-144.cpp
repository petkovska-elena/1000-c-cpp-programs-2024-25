// Created by Elena Petkovska on 4.6.2025.
//

/* Задачи за вежбање за втор колоквиум / испит - Courses 2024/25 */

#include <iostream>
using namespace std;

// Recursive function to replace every 9 with 7
int poramnet(int a) {
    if (a < 10) return (a == 9) ? 7 : a;  // base case
    int last = a % 10;
    if (last == 9) last = 7;
    return poramnet(a / 10) * 10 + last;  // recursive build
}

// Simple bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int vals[100];
    int cnt = 0;

    int x;
    while (cin >> x) {
        if (cnt < 100) vals[cnt++] = poramnet(x);
    }

    if (cnt == 0) return 0;

    bubbleSort(vals, cnt);

    int k = (cnt < 5) ? cnt : 5;
    for (int i = 0; i < k; ++i) {
        if (i) cout << ' ';
        cout << vals[i];
    }
    cout << '\n';

    return 0;
}
