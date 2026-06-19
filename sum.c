// Name: sum.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 06/19/2026

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int sum = 0;
    for (int i = 1; i < argc; i++){
        sum += atoi(argv[i]);
    }
    printf("Total: %d", sum);

    return 0;
}