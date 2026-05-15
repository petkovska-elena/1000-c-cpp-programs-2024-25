//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Specijalizacija na templejti */

#include <iostream>
using namespace std;

// maximum of two int values
inline int const& max(int const& a, int const& b) {
	return a < b ? b : a;
}

// maximum of two values of any type
template <typename T>
inline T const& max(T const& a, T const& b) {
	return a < b ? b : a;
}

// maximum of three values of any type
template <typename T>
inline T const& max(T const& a, T const& b, T const& c) {
	return max(max(a, b), c);
}

int main() {
	cout << max(7, 42, 68) << endl;        // template with three arguments
	cout << max(7.0, 42.0) << endl;        // max<double>
	cout << max('a', 'b') << endl;         // max<char>
	cout << max(7, 42) << endl;            // non-template int version
	cout << max<>(7, 42) << endl;          // template max<int>
	cout << max<double>(7, 42) << endl;    // explicit template argument
	cout << max('a', 42.7) << endl;        // non-template int version

	return 0;
}
