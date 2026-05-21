// Name: polynomial
// Purpose: Display the value of polynomail.
// Author: CatMarkDev
// Date: 05/21/2026

#include <stdio.h>

int main(void) {

    int x, sum;
    
    printf("Enter a value of x: ");
    scanf("%d", &x);

    sum = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("Polynomial of X: %d", sum);

    return 0;
}