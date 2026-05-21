// Name: displayDate.c
// PurPose: Learn C Programing
// Author: CatMarkDev
// Date: 05/21/2026

#include <stdio.h>

int main(void) {

    //int digit, reversal, d0, d1, d2;
    int d1, d2, d3;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d%1d", &d1, &d2, &d3);
    // scanf("%d", &digit);

    // d0 = digit / 100;
    // d1 = ((digit % 100) / 10) * 10;
    // d2 = (digit % 10) * 100;

    // reversal = d2 + d1 + d0;

    printf("The reversal is : %d%d%d",d3 , d2, d1);

    return 0;
}