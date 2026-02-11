//
// Created by Elena Petkovska on 14.8.25.
//

#include <iostream>
#include <iomanip>
using namespace std;

void scale (int scores[], int n) {
	int max = *scores;
	for (int i = 1; i < n; i++)
	{
		if (*(scores + i) > max)
		{
			max = *(scores + i);
		}
	}

	double ratio = 100.0 / max;

	for (int i = 0; i < n; i++)
	{
		double scaled_score = *(scores + i) * ratio;
		cout << fixed << setprecision(2) << scaled_score << " ";
	}
}

int main() {
	int n;
	cin >> n;

	int scores[n];

	for (int i = 0; i < n; i++)
	{
		cin >> scores[i];
	}

	scale(scores, n);
	return 0;
}