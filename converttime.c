// Name: converttime.c
// PurPose: Learn C Programing
// Author: CatMarkDev
// Date: 05/22/2026

#include <stdio.h>

int main(void) {

    int hour, minute;

    printf("Enter a 24-hour time: ");
    if(scanf("%d:%d", &hour, &minute) != 2) {
        printf("Wrong time input...");
        return 0;
    }

    if(hour < 0 || hour >= 24 || minute < 0 || minute >= 60) {
        printf("Wrong time input...");
    }
    else {
        int hour12 = hour % 12;
        if(hour12 == 0) hour12 = 12;

        printf("Equivalent 12-hour time: %02d:%02d %s", hour12, minute, (hour < 12) ? "AM" : "PM");
    }

    return 0;
}