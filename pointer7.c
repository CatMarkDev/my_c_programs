// Name: pointer7.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 05/25/2026

#include <stdio.h>

#define SIZE 8

int eveluate_position(const char board[SIZE][SIZE]);

int main(void) {
    char board[SIZE][SIZE] = {
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
        {'p', 'p', 'p', 'p', '.', 'p', 'p', 'p'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', 'p', '.', '.', '.'},
        {'.', '.', '.', '.', 'P', '.', '.', '.'},
        {'.', '.', '.', '.', '.', 'N', '.', 'Q'},
        {'P', 'P', 'P', 'P', '.', 'P', 'P', 'P'},
        {'R', 'N', 'B', '.', 'K', 'B', '.', 'R'}
    };
    int result = eveluate_position(board);
    if (result > 0) {
        printf("White is in a better position with a score of %d\n", result);
    } else if (result < 0) {
        printf("Black is in a better position with a score of %d\n", -result);
    } else {
        printf("The position is balanced.\n");
    }
    
    printf("Press Enter to exit...");
    getchar();
    return 0;
}

int eveluate_position(const char board[SIZE][SIZE]) {
    int white_score = 0;
    int black_score = 0;

    const char *len = &board[0][0] + (SIZE * SIZE);
    const char *p = &board[0][0];

    while(p < len){
        switch (*p) {
            // White Pieces
            case 'Q': white_score += 9; break;
            case 'R': white_score += 5; break;
            case 'B': white_score += 3; break;
            case 'N': white_score += 3; break;
            case 'P': white_score += 1; break;

            // Black Pieces
            case 'q': black_score += 9; break;
            case 'r': black_score += 5; break;
            case 'b': black_score += 3; break;
            case 'n': black_score += 3; break;
            case 'p': black_score += 1; break;

            default: break; 
        }
        p++;
    }

    return white_score - black_score;
}