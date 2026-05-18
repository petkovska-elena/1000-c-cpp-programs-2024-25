//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Vector example */

#include <iostream>
#include <vector>
#include <algorithm> // for sort

using namespace std;

int main()
{
	vector<int> g1; // do not have to specify dimension, initially empty
	cout << "Size : " << g1.size() << endl;

	// can add elements at the end – the vector is automatically expanded
	for (int i = 1; i <= 5; i++)
		g1.push_back(i);

	cout << "Size : " << g1.size() << endl;
	cout << "Capacity : " << g1.capacity() << endl;

	vector<float> g2(10); // can specify dimension
	cout << "Size : " << g2.size() << endl;

	// and then access the elements directly
	for (int i = 1; i <= 5; i++)
		g2[i] = i * 1.1f;

	vector<int> vector1 = { 5, 4, 3, 2, 1 }; // initializer list
	for (auto i = vector1.begin(); i != vector1.end(); ++i)
		cout << *i << " ";
	cout << endl;

	vector<int> vector3(5, 12); // 5 is the size, 12 is the value repeated
	vector3.insert(vector3.begin() + 3, 13);
	for (const int& i : vector3) // ranged loop
		cout << i << " ";
	cout << endl;

	vector<int> copy;
	copy = vector1;

	sort(copy.begin(), copy.end());
	for (const int& i : copy) // ranged loop
		cout << i << " ";
	cout << endl;

	return 0;
}
