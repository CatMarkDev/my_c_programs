// Name: product_info.c
// PurPose: Learn C Programing
// Author: CatMarkDev
// Date: 05/21/2026

#include <stdio.h>

int main(void) {

    int itemNumber, date, month, years;
    float price;

    printf("Enter item number: ");
    scanf("%d", &itemNumber);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &date, &years);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("    \t\tPrice\t\tDate\n");
    printf("%d\t\t$  %.2f\t%.2d/%.2d/%.4d", itemNumber, price, month, date, years);

    return 0;
}