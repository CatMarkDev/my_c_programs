// Name: pointer12.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 05/25/2026

/* Finds the largest and smallest elements in an array */

#include <stdio.h>

#define N 10

void max_min(const int a[], int n, int *max, int *min);

int main(void) {
    int b[N], i, big, small;

    printf("Enter %d numbers: ", N);
    for(i = 0; i < N; i++){
        if(scanf("%d", &b[i]) != 1){
            printf("Invalid input. Please enter integers only.\n");
            return 1; // Exit with an error code
        }
    }
    max_min(b, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}
void max_min(const int a[], int n, int *max, int *min){
    *max = *min = *a;
    for (const int *p = a + 1; p < a + n; p++) {
        if (*p > *max) {
            *max = *p;
        } else if (*p < *min) {
            *min = *p;
        }
    }
}