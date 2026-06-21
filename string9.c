// Name: string9.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 06/19/2026

#include <stdio.h>

#define NUM_MONTHS 12

int main(void) {
    char *months[NUM_MONTHS] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int month, day, year;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d", &month, &day, &year);
    if (month < 1 || month > NUM_MONTHS) {
        printf("Invalid month. Please enter a month between 1 and %d.\n", NUM_MONTHS);
        return 1;
    }
    printf("You entered the date: %s %d, %d\n", months[month - 1], day, year);
    return 0;
}