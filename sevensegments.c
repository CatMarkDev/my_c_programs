// Name: sevensegments.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 05/22/2026

#include <stdio.h>

int main(void) {

    int input;
    int segments[7];    
    char led[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    // Define the segment patterns for digits 0-9
    const int patterns[10][7] = { 
        {1, 1, 1, 1, 1, 1, 0}, // 0
        {0, 1, 1, 0, 0, 0, 0}, // 1
        {1, 1, 0, 1, 1, 0, 1}, // 2
        {1, 1, 1, 1, 0, 0, 1}, // 3
        {0, 1, 1, 0, 0, 1, 1}, // 4
        {1, 0, 1, 1, 0, 1, 1}, // 5
        {1, 0, 1, 1, 1, 1, 1}, // 6
        {1, 1, 1, 0, 0, 0, 0}, // 7
        {1, 1, 1, 1, 1, 1, 1}, // 8
        {1, 1, 1, 1, 0, 1, 1}  // 9
    };

    // Prompt the user for input
    printf("Enter a number 0-9 : ");
    if (scanf("%d", &input) != 1 || input < 0 || input > 9) {
        printf("Invalid input. Please enter a digit from 0 to 9.\n");
        return 1;
    }

    for (int i = 0; i < 7; i++) {
        segments[i] = patterns[input][i];
    }
    
    // Map the segments to the LED representation
    led[0][1] = segments[0] ? '_' : ' ';
    led[1][2] = segments[1] ? '|' : ' ';
    led[2][2] = segments[2] ? '|' : ' ';
    led[2][1] = segments[3] ? '_' : ' ';
    led[2][0] = segments[4] ? '|' : ' ';
    led[1][0] = segments[5] ? '|' : ' ';
    led[1][1] = segments[6] ? '_' : ' ';

    // Display the seven-segment representation
    printf("Seven-segment display: \n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++) {
            printf("%c", led[i][j]);
        }
        printf("\n");
    }
    return 0;
}