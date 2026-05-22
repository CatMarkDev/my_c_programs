// Name: findLnum.c
// PurPose: Learn C Programing
// Author: CatMarkDev
// Date: 05/22/2026

#include <stdio.h>
#include <stdbool.h>

int main(void) {

    float num;
    float largestNum = 0.00f;

    while(true) {
        printf("Enter a number: ");

        if(scanf("%f", &num) != 1){
            return 1;
        }        

        if(num > 0) {
            if(num > largestNum) {
                largestNum = num;
            }
        }
        else break;
    }

    printf("The largest number entered was %.2f", largestNum);

    return 0;
}