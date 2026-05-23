// Name: rsn.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 05/23/2026

#include <stdio.h>

#define N 10

int main(void) {
    int numbers[N];
    int lenght = (int)sizeof(numbers) / sizeof(numbers[0]);
    printf("Enter %d numbers: ", N);
    for (int i = 0; i < lenght; i++) {
        scanf("%d%*c", &numbers[i]);
    }

    printf("In reverse order: ");
    for (int i = lenght - 1; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
