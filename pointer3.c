// Name: pointer3.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 05/24/2026

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void generate_elements(double a[], int n);
double inner_product(const double *a, const double *b, int n);
void print_elements(double a[], int n);

int main(void) {
    srand((unsigned)time(NULL));

    double a[N], b[N], product;
    generate_elements(a, N);
    generate_elements(b, N);

    product = inner_product(a, b, N);
    printf("Inner product of the two vectors is: %.2f\n", product);

    print_elements(a, N);
    print_elements(b, N);

    return 0;
}

void generate_elements(double a[], int n) {
    for (double *p = a; p < a + n; p++){
        *p = rand() % 100;
    }
}

double inner_product(const double *a, const double *b, int n) {
    const double *p, *q;
    double product = 0.0;
    for (p = a, q = b; p < a + n; p++, q++) {
        product += (*p) * (*q);
    }
    return product;
}

void print_elements(double a[], int n) {
    for (double *p = a; p < a + n; p++) {
        printf("%.2f ", *p);
    }
}