// Name: reverse.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 06/19/2026

#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("argc: %d\n", argc);
    for (int i = argc - 1; i > 0; i--){
        printf("%s ", argv[i]);
    }
    return 0;
}