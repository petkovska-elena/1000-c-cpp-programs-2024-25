//
// Created by Elena Petkovska on 14.8.25.
//

// Predavanje 10 - Rekurzija

/* Збир на целите броеви не поголеми од n */

int zbirN(int n) {
	if (n == 0)
		return 0;
	else
		return n + zbirN(n - 1);
}



/* Печатење ѕвезди (рекурзивно) */

void dzvezdi(int n) {
	if (n > 0) {
		cout << '*';
		dzvezdi(n - 1);
	}
	else
		cout << endl;
}



/* Збир на цифри на број */

int zbirCifri(int n) {
	if (n < 10)
		return n;
	else
		return n % 10 + zbirCifri(n / 10);
}



