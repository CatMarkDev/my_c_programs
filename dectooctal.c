// Name: decimaltooctal.c
// PurPose: Learn C Programing
// Author: CatMarkDev
// Date: 05/21/2026

#include <stdio.h>

int main(void) {
    int decimal, quotient, r1, r2, r3, r4, r5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &decimal);

    quotient = decimal / 8;
    r1 = decimal % 8;
    r2 = quotient % 8;
    quotient = quotient / 8;
    r3 = quotient % 8;
    quotient = quotient / 8;
    r4 = quotient % 8;
    quotient = quotient / 8;
    r5 = quotient % 8;

    printf("In octal, your number is: %d%d%d%d%d", r5, r4, r3, r2, r1);

    return 0;
}