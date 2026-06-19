// Name: deal.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 06/19/2026

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void) {
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
    int num_cards, rank, suit;
    const char *rank_code[] = {"Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};
    const char *suit_code[] = {"clubs", "diamonds", "hearts", "spades"};

    srand((unsigned)time(NULL));
    printf("Enter number of cards in hand: ");
    scanf("%d", &num_cards);

    printf("Your hand:\n");
    while(num_cards > 0){
        suit = rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;
        if(!in_hand[suit][rank]){
            in_hand[suit][rank] = true;
            printf("\t%s of %s\n", rank_code[rank], suit_code[suit]);
            num_cards--;
        }
    }
    printf("\n");
    return 0;
}