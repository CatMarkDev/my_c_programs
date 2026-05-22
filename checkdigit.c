// Name: checkdigit.c
// PurPose: Learn C Programing
// Author: CatMarkDev
// Date: 05/22/2026

#include <stdio.h>

int main(void) {

    int n, digit;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n >= 0 && n <= 9)
        digit = 1;
    else if(n >= 10 && n <= 99)
        digit = 2;
    else if(n >= 100 && n <= 999)
        digit = 3;
    else if(n >= 1000 && n <= 9999)
        digit = 4;
    else if(n >= 10000 && n <= 32767)
        digit = 5;
    else if(n < 0 && n > 32767)
        printf("Out of bound");

    printf("The number %d has %d digits", n, digit);
    
    return 0;
}