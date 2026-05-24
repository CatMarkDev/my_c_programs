// Name: pointer.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 05/24/2026

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

void random_numbers(int a[]);
bool search(const int a[], int key);

int main(void) {
    srand(time(NULL));
    int a[SIZE], key;
    random_numbers(a);

    printf("Enter a number to search in the array: ");
    if(scanf("%d", &key) != 1){
        fprintf(stderr, "Invalid input. Please enter an integer.\n");
        return 1;
    }

    if(search(a, key)){
        
        printf("%d is found in the array.\n", key);
    }else {
        printf("%d is not found in the array.\n", key);
    }

    return 0;
}

void random_numbers(int a[]) {
    int *p;
    for (p = a; p < a + SIZE; p++) {
        *p = rand() % 100;
    }
}

bool search(const int a[], int key) {
    const int *p;
    for (p = a; p < a + SIZE; p++) {
        if(key == *p) {
            return true;
        }
    }
    return false;
}