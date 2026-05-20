// Name: tax.c
// Date: 2024-06-01
// Description: This program calculates the total amount including tax based on user input.
// C17 standard is used for this project.
// Author: CatMarkDev

#include <stdio.h>

int main(void) {

    float amount;
    float tax_rate = 5.0f;

    printf("Enter an amount: ");    
    scanf("%f", &amount);

    float tax = amount * (tax_rate / 100.0f);
    float total = amount + tax;

    printf("With tax added: $%.2f\n", total);
    return 0;
}