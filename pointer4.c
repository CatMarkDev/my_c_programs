// Name: pointer4.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 05/24/2026

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void generate_elements(int a[], int n);
int *find_middle(int a[], int n);
int find_largest(int a[], int n);
void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(void) {
    srand((unsigned)time(NULL));

    int a[SIZE];
    int largest, second_largest;

    generate_elements(a, SIZE);
    find_two_largest(a, SIZE, &largest, &second_largest);

    printf("Largest element: %d\n", largest);
    printf("Second largest element: %d\n", second_largest);

    return 0;
}

void generate_elements(int a[], int n) {
    for (int *p = a; p < a + n; p++) {
        *p = rand() % 100;
    }
}

int *find_middle(int a[], int n) {
    return a + n / 2;
}

int find_largest(int a[], int n) {
    int largest = 0;
    for (int *p = a; p < a + n; p++) {
        if(*p > largest){
            largest = *p;
        }
    }
    return largest;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest) {
    *largest = a[0];
    *second_largest = a[0];

    for (const int *p = a; p < a + n; p++) {
        if (*p > *largest) {
            *second_largest = *largest;
            *largest = *p;
        } else if (*p > *second_largest && *p != *largest) {
            *second_largest = *p;
        }
    }
}