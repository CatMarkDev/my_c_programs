// Name: isprime.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 05/23/2026

#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    int divisor;

    if (n <= 1) {
        return false;
    }

    for (divisor = 2; divisor * divisor <= n; divisor++) {
        if (n % divisor == 0) {
            return false;
        }
    }

    return true;
}

int main(void) {
    int n;

    while (1) {
        printf("Enter a number: ");

        if (scanf("%d", &n) != 1) {
            printf("Invalid input. Program terminated.\n");
            break;
        }

        if (n <= 0) {
            printf("Program terminated.\n");
            break;
        }

        if (is_prime(n)) {
            printf("%d is a prime number.\n", n);
        } else {
            printf("%d is not a prime number.\n", n);
        }

        printf("\n");
    }

    return 0;
}
