// Name: swap.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 05/23/2026

#include <stdio.h>

void swap(int *x, int *y);

int main(void) {
    int x = 7;
    int y = 4;

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}