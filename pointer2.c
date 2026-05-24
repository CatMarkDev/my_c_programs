// Name: pointer2.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 05/24/2026

#include <stdio.h>

#define SIZE 100

void store_zeros(int a[], int n);
void print_array(int a[], int n);

int main(void){
    int a[SIZE];
    store_zeros(a, SIZE);
    print_array(a, SIZE);

    return 0;
}

void store_zeros(int a[], int n) {
    for (int *p = a; p < a + n; p++){
        *p = 0;
    }
}

void print_array(int a[], int n) {
    for (int *p = a; p < a + n; p++) {
        printf("%d ", *p);
        if((p - a + 1) % 10 == 0){
            printf("\n");
        }
    }
}