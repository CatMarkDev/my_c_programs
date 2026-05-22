// Name: checker_board.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 05/22/2026

#include <stdio.h>

int main(void) {
    char checker_board[8][8];
    // Initialize the checker board
    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {            
            checker_board[row][col] = (row + col) % 2 == 0 ? 'B' : 'R'; // Alternate between 'B' and 'R'
        }
    }
    // Display the checker board
    printf("\nChecker Board:\n");
    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
            printf("%c ", checker_board[row][col]);
        }
        printf("\n");
    }
    return 0;
}