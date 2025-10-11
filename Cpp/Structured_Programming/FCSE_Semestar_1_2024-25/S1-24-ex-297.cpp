//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 7 - Funkcii

/* Пресметување волумен на кутија */

#include <iostream>
using namespace std;

int boxVolume(int length = 1, int width = 1, int height = 1);

int main()
{
	cout << "Predefiniraniot volumen e: " << boxVolume()
		 << "\nVolumenot na kutija so dolzhina 10, shirina 1 i visina 1 e: " << boxVolume(10)
		 << "\nVolumenot na kutija so dolzhina 10, shirina 5 i visina 1 e: " << boxVolume(10, 5)
		 << "\nVolumenot na kutija so dolzhina 10, shirina 5 i visina 2 e: " << boxVolume(10, 5, 2)
		 << endl;

	return 0;
}

int boxVolume(int length, int width, int height)
{
	return length * width * height;
}