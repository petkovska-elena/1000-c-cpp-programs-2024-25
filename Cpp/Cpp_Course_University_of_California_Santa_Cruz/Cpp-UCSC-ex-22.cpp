// Created by Elena Petkovska on 5.4.2025.
//

/* Cpp Course University of California Santa Cruz */

// Convert C to modern C++: I/O, vector, inline, consts

#include <iostream>
#include <vector>

const int N = 40;

// Inline function to calculate sum
inline void sum(int* p, int n, const std::vector<int>& d) {
    *p = 0;
    for (int i = 0; i < n; ++i) *p += d[i];
}

int main() {
    int accum = 0;
    std::vector<int> data(N);

    for (int i = 0; i < N; ++i) data[i] = i;

    sum(&accum, N, data);

    std::cout << "sum is " << accum << std::endl;

    return 0;
}