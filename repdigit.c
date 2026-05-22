// Name: repdigit.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 05/22/2026

// Version 3: Check for repeated digits and list the repeated digits without duplicates
#include <stdio.h>
#include <stdbool.h>

#define MAX_DIGITS 10

int main(void) {
    int number;
    int repeated_digits[MAX_DIGITS] = {0};

    while (true) {
        printf("Enter a positive integer: ");
        scanf("%d", &number);
        if (number <= 0) {
            printf("Program terminated.\n");
            break;
        }

        int temp = number;
        while (temp > 0 && temp < 1000000000) { // Limit to 9 digits
            int digit = temp % 10;
            repeated_digits[digit]++;
            temp /= 10;
        }

        printf("Digit:\t\t");
        for (int i = 0; i < MAX_DIGITS; i++) {
            printf("%d ", i);
        }
        printf("\nOccurrences:\t");
        for (int i = 0; i < MAX_DIGITS; i++) {
            printf("%d ", repeated_digits[i]);
        }
        for (int i = 0; i < MAX_DIGITS; i++) {
            repeated_digits[i] = 0; // Reset for the next input
        }
        printf("\n\n");
    }    
    return 0;    
}

// Version 1: Check for repeated digits and print a message
// #include <stdio.h>
// #include <stdbool.h>

// #define MAX_DIGITS 10

// int main(void) {
//     bool digit_seen[MAX_DIGITS] = {false}; // Array to track seen digits
//     int repdigit[MAX_DIGITS];
//     int digit;
//     long numbers;

//     printf("Enter a number: ");
//     scanf("%ld", &numbers);

//     while (numbers > 0) {
//         digit = numbers % 10;
//         if (digit_seen[digit]) {
//             printf("The number contains a repeated digit.\n");
//             return 0;
//         }
//         digit_seen[digit] = true;
//         numbers /= 10;
//     }

//     printf("The number does not contain a repeated digit.\n");
//     return 0;
// }
//-------------------------------------------------------------------------------
// Version 2: Check for repeated digits and list the repeated digits
// #include <stdio.h>
// #include <stdbool.h>

// #define MAX_DIGITS 10


// int main(void) {
//     bool digit_seen[MAX_DIGITS] = {false}; // Array to track seen digits
//     int repeated_digit[MAX_DIGITS] = {0}; // Array to store repeated digits
//     int count = 0;
//     int digit;
//     long numbers;

//     printf("Enter a number: ");
//     scanf("%ld", &numbers);

//     while (numbers > 0) {
//         digit = numbers % 10;
//         if (digit_seen[digit]) {
//             repeated_digit[count] = digit;
//             count++; 
//         }
//         digit_seen[digit] = true;
//         numbers /= 10;
//     }

//     if (count > 0) {
//         printf("Repeated digits: ");
//         for (int i = 0; i < count; i++) {
//             printf("%d ", repeated_digit[i]);
//         }
//         printf("\n");
//     } else {
//         printf("The number does not contain a repeated digit.\n");
//     }
//     return 0;
// }
//-------------------------------------------------------------------------------