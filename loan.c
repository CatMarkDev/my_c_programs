// Name: loan.c
// Purpose: Learn C Programming.
// Author: CatMarkDev
// Date: 05/21/2026

#include <stdio.h>

int main(void) {

    float loan, rate, payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    float monthly_rate = rate / 100.0f / 12.0f;
    float balance = loan;

    printf("\n");

    balance = balance + balance * monthly_rate - payment;
    printf("Balance after first payment: $%.2f\n", balance);

    balance = balance + balance * monthly_rate - payment;
    printf("Balance after second payment: $%.2f\n", balance);

    balance = balance + balance * monthly_rate - payment;
    printf("Balance after third payment: $%.2f\n", balance);

    return 0;
}