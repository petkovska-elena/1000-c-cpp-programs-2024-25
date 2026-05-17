//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Primer za klasen shablon */

#include <iostream>
using namespace std;

template <typename T>
class BaseVector
{
public:
    // ctors & dtor
    BaseVector(unsigned int element);
    ~BaseVector();

    // operator []
    T &operator[](unsigned int index);

    // BaseVector length
    unsigned int len() const;

    // Find element
    int find(const T &key);

private:
    T *data;                // elements of BaseVector
    unsigned int size;      // number of elements
};

// BaseVector implementation

// Constructor
template <typename T>
BaseVector<T>::BaseVector(unsigned int element) : size(element)
{
    data = new T[size];
}

// Destructor
template <typename T>
BaseVector<T>::~BaseVector()
{
    delete[] data;
    data = 0;
}

// operator []
template <typename T>
T &BaseVector<T>::operator[](unsigned int index)
{
    return data[index];
}

// len()
template <typename T>
unsigned int BaseVector<T>::len() const
{
    return size;
}

// find()
template <typename T>
int BaseVector<T>::find(const T &key)
{
    for (int i = 0; i < (int)size; i++)
        if (key == data[i])
            return i;
    return -1;
}

// Use of a template function
template <typename T>
void print(BaseVector<T> &a)
{
    for (unsigned int i = 0; i < a.len(); i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    // Declaring different BaseVectors
    BaseVector<int> A(10);
    BaseVector<float> B(5);
    BaseVector<char> C(8);

    cout << "Len of A (10) is " << A.len() << endl;
    cout << "Len of B (5) is " << B.len() << endl;

    for (unsigned int i = 0; i < A.len(); i++)
        A[i] = 2 * i;

    cout << "Elements of BaseVector A : ";
    print(A);

    float x = 2.5;
    for (unsigned int i = 0; i < B.len(); i++, x += 3.0)
        B[i] = x;

    cout << "Elements of BaseVector B : ";
    print(B);

    char c = 'f';
    for (unsigned int i = 0; i < C.len(); i++, c++)
        C[i] = c;

    cout << "Elements of BaseVector C : ";
    print(C);

    int p;
    cout << "find 6 in A - ";
    if ((p = A.find(6)) != -1)
        cout << "found @ A[" << p << "]" << endl;
    else
        cout << "not found" << endl;

    cout << "find 3.5 in B - ";
    if ((p = B.find(3.5)) != -1)
        cout << "found @ B[" << p << "]" << endl;
    else
        cout << "not found" << endl;

    return 0;
}
