// Name: condigit.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 06/19/2026

#include <stdio.h>

void clear_buffer(void);

int main(void) {
    char *ten[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *tens[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    char *units[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int numbers, digit1, digit2;
    do{
        printf("Enter a two-digit number: ");
        if(scanf("%2d", &numbers) != 1){
            printf("Invalid input. Please enter a valid two-digit number.\n");
            clear_buffer();
            continue;
        }
        if (numbers < 0 || numbers > 99) {
            printf("Invalid input. Please enter a positive number between 00 and 99.\n");
            printf("------------------------------------------------\n");
            continue;
        }

        clear_buffer();
        digit1 = numbers / 10;
        digit2 = numbers % 10;
        if(digit1 == 0 && digit2 == 0){
            printf("Program terminated...\n");
            break;
        }
        if(digit1 == 0 && digit2 > 0){
            printf("You entered the number %s", units[digit2 - 1]);
        } else if (digit1 == 1) {
            printf("You entered the number %s", ten[digit2]);
        } else if(digit2 == 0){
            printf("You entered the number %s", tens[digit1 - 2]);
        } else {
            printf("You entered the number %s-%s", tens[digit1 - 2], units[digit2 - 1]);
        }
        printf("\n------------------------------------------------\n");
    } while (1);

    return 0;
}
void clear_buffer(void){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}