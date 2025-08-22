// Created by Elena Petkovska on 5.4.2025.
//

/* C Course University of California Santa Cruz */

// Rational number processing - Sum and Average
// Written by [Your Name]
// Date: [Insert Date]

#include <stdio.h>
#include <stdlib.h>

// Define the rational structure
typedef struct {
    int numerator;
    int denominator;
} Rational;

// Function to compute GCD (for simplification)
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to simplify a rational number
Rational simplify(Rational r) {
    int divisor = gcd(r.numerator, r.denominator);
    r.numerator /= divisor;
    r.denominator /= divisor;
    return r;
}

// Function to add two rational numbers
Rational add(Rational a, Rational b) {
    Rational result;
    result.numerator = a.numerator * b.denominator + b.numerator * a.denominator;
    result.denominator = a.denominator * b.denominator;
    return simplify(result);
}

// Function to subtract two rational numbers
Rational subtract(Rational a, Rational b) {
    Rational result;
    result.numerator = a.numerator * b.denominator - b.numerator * a.denominator;
    result.denominator = a.denominator * b.denominator;
    return simplify(result);
}

// Function to multiply two rational numbers
Rational multiply(Rational a, Rational b) {
    Rational result;
    result.numerator = a.numerator * b.numerator;
    result.denominator = a.denominator * b.denominator;
    return simplify(result);
}

// Function to divide two rational numbers
Rational divide(Rational a, Rational b) {
    Rational result;
    result.numerator = a.numerator * b.denominator;
    result.denominator = a.denominator * b.numerator;
    return simplify(result);
}

// Function to print a rational number
void printRational(Rational r) {
    printf("%d/%d", r.numerator, r.denominator);
}

int main() {
    FILE *fp = fopen("rationals.txt", "r");
    if (!fp) {
        printf("Error opening file.\n");
        return 1;
    }

    int count;
    fscanf(fp, "%d", &count);

    Rational *data = (Rational *)malloc(count * sizeof(Rational));

    // Read the rational numbers from file
    for (int i = 0; i < count; i++) {
        fscanf(fp, "%d %d", &data[i].numerator, &data[i].denominator);
    }

    fclose(fp);

    // Compute sum of all rationals
    Rational sum = data[0];
    for (int i = 1; i < count; i++) {
        sum = add(sum, data[i]);
    }

    // Compute average
    Rational avg;
    avg.numerator = sum.numerator;
    avg.denominator = sum.denominator * count;
    avg = simplify(avg);

    // Print results
    printf("Sum of rationals: ");
    printRational(sum);
    printf("\n");

    printf("Average of rationals: ");
    printRational(avg);
    printf("\n");

    // Clean up
    free(data);
    return 0;
}