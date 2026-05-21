// Name: ex_bills.c
// Purpose: Learn C Programming.
// Author: CatMarkDev
// Date: 05/21/2026

#include <stdio.h>

int main(void) {

    int dollars, bill20, bill10, bill5, bill1, fract;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);

    bill20 = dollars / 20;
    fract = dollars % 20;
    bill10 = fract / 10;
    fract = fract % 10;
    bill5 = fract / 5;
    fract = fract % 5;
    bill1 = fract / 1;

    printf("$20 bills: %d\n", bill20);
    printf("$10 bills: %d\n", bill10);
    printf(" $5 bills: %d\n", bill5);
    printf(" $1 bills: %d\n", bill1);

    return 0;
}