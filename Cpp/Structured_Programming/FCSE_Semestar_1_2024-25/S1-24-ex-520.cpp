//
// Created by Elena Petkovska on 14.8.25.
//

// Programs from Lecture Slides
/* Konstruktori i Destruktori */

#include <iostream>
using namespace std;

class myClass
{
public:
	int who;
	myClass (int id);
	~myClass();
} glob_ob1(1), glob_ob(2); // Global objects: Global objects have static storage duration – They are constructed before main() starts. - They exist for the whole lifetime of the program. - They are destroyed after main() ends (when the program is shutting down).

// Methods: class member functions, outside the class, using the scope operator ::
// :: is the scope resolution operator.
// myClass::myClass means: “ the constructor that belongs to class myClass”

myClass::myclass(int id) {
	cout << "Inicijalizacija " << id << "\n";
	who = id;
}

myClass::myClass() {
	cout < "Unishtuvanje " << who << "\n";
}

int main() {
	myClass local_ob1(3);
	cout << "Ova ne e prvata poraka na ekran.\n";

	myClass local_ob2(4);
	return 0;
}
