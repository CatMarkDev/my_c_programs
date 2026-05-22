// Name: fib_numbers.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 05/22/2026

#include <stdio.h>

#define COUNT 40

int main(void) {
    
    long fib_numbers[COUNT] = {0, 1};

    printf("The first 40 fibonacci is : \n");

    for (int i = 0; i < COUNT; i++) {
        
        if (i >= 2) {
            fib_numbers[i] = fib_numbers[i - 2] + fib_numbers[i - 1];
        }
        printf("%d ", fib_numbers[i]);

        if((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}