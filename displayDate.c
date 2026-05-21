// Name: displayDate.c
// PurPose: Learn C Programing
// Author: CatMarkDev
// Date: 05/21/2026

#include <stdio.h>

int main(void) {

    int date, month, years;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &date, &month, &years);

    printf("You entered the date %.4d%.2d%.2d", years, date, month);

    return 0;
}