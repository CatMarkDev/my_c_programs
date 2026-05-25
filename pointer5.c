// Name: pointer5.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 05/24/2026

#include <stdio.h>

#define N 10

int main(void) {
    int ident[N][N];
    int zero_count = 0;

    for (int *p = &ident[0][0]; p < &ident[0][0] + N * N; p++){
        if(zero_count % (N + 1) == 0){
            *p = 1;
        } else {
            *p = 0;
        }
        zero_count++;
    }
    for (int *p = &ident[0][0]; p < &ident[0][0] + N * N; p++){
        printf("%d ", *p);
        if(((&ident[N][N] - 1) - p) % N == 0) {
            printf("\n");
        } 
    }
    return 0;
}