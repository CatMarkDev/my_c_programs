// Name: poker.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 05/23/2026

/* Classifies a poker hand */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

void read_cards(int nir[], int nis[]);
void analyze_hand(bool *st, bool *fl, bool *fo, bool *th, int *pa, int nr[], int ns[]);
void print_result(bool st, bool fl, bool fo, bool th, int pa);

int main(void) {
    int num_in_rank[NUM_RANKS];
    int num_in_suit[NUM_SUITS];
    bool straight, flush, four, three;
    int pairs;

    for (;;) {
        read_cards(num_in_rank, num_in_suit);
        analyze_hand(&straight, &flush, &four, &three, &pairs, num_in_rank, num_in_suit);
        print_result(straight, flush, four, three, pairs);
    }
}

void read_cards(int nir[], int nis[]) {
    bool card_exists[NUM_RANKS][NUM_SUITS];
    char token[4];
    int rank, suit;
    bool bad_card;
    int cards_read = 0;

    for (rank = 0; rank < NUM_RANKS; rank++){
        nir[rank] = 0;
        for (suit = 0; suit < NUM_SUITS; suit++){
            card_exists[rank][suit] = false;
        }
    }

    for (suit = 0; suit < NUM_SUITS; suit++){
        nis[suit] = 0;
    }

    while(cards_read < NUM_CARDS){
        bad_card = false;

        printf("Enter a card: ");
        if (scanf(" %3s", token) != 1) {
            exit(EXIT_SUCCESS);
        }

        if (token[0] == '0' && token[1] == '\0') {
            exit(EXIT_SUCCESS);
        }

        if (token[1] == '\0' || token[2] != '\0') {
            bad_card = true;
        } else {
            switch (token[0]){
                case '2':           rank = 0; break;
                case '3':           rank = 1; break;
                case '4':           rank = 2; break;
                case '5':           rank = 3; break;
                case '6':           rank = 4; break;
                case '7':           rank = 5; break;
                case '8':           rank = 6; break;
                case '9':           rank = 7; break;
                case 't': case 'T': rank = 8; break;
                case 'j': case 'J': rank = 9; break;
                case 'q': case 'Q': rank = 10; break;
                case 'k': case 'K': rank = 11; break;
                case 'a': case 'A': rank = 12; break;
                default:            bad_card = true;
            }

            switch (token[1]){
                case 'c': case 'C': suit = 0; break;
                case 'd': case 'D': suit = 1; break;
                case 'h': case 'H': suit = 2; break;
                case 's': case 'S': suit = 3; break;
                default:            bad_card = true;
            }
        }

        if (bad_card)
            printf("Bad card; ignored.\n");
        else if (card_exists[rank][suit])
            printf("Duplicate card; ignored.\n");
        else {
            card_exists[rank][suit] = true;
            nir[rank]++;
            nis[suit]++;
            cards_read++;
        }
    }
}

void analyze_hand(bool *st, bool *fl, bool *fo, bool *th, int *pa, int nr[], int ns[]){
    int num_consec = 0;
    int rank, suit;

    *st = false;
    *fl = false;
    *fo = false;
    *th = false;
    *pa = 0;

    for (suit = 0; suit < NUM_SUITS; suit++){
        if (ns[suit] == NUM_CARDS)
            *fl = true;
    }

    rank = 0;
    while (nr[rank] == 0) rank++;

    for (; rank < NUM_RANKS && nr[rank] > 0; rank++){
        num_consec++;
    }

    if (num_consec == NUM_CARDS){
        *st = true;
        return;
    }

    for (rank = 0; rank < NUM_RANKS; rank++){
        if (nr[rank] == 4) *fo = true;
        if (nr[rank] == 3) *th = true;
        if (nr[rank] == 2) (*pa)++;
    }
}

void print_result(bool st, bool fl, bool fo, bool th, int pa){
    if (st && fl)               printf("Straight flush");
    else if (fo)                printf("Four of a kind");
    else if (th && pa == 1)     printf("Full house");
    else if (fl)                printf("Flush");
    else if (st)                printf("Straight");
    else if (th)                printf("Three of a kind");
    else if (pa == 2)           printf("Two pairs");
    else if (pa == 1)           printf("Pair");
    else                        printf("High card");

    printf("\n\n");
}