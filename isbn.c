// Name: isbn.c
// PurPose: Learn C Programing
// Author: CatMarkDev
// Date: 05/21/2026

#include <stdio.h>

int main(void) {

    int gsi, group, publisher, itemnumber, digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsi, &group, &publisher, &itemnumber, &digit);

    printf("GSI prefix: %d\n", gsi);
    printf("Group identifier: %d\n", group);
    printf("Publisher code: %d\n", publisher);
    printf("Item number: %d\n", itemnumber);
    printf("Check digit: %d", digit);

    return 0;
}