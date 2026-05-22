// Name: weekend.c
// PurPose: Learn C Programing
// Author: CatMarkDev
// Date: 05/22/2026

#include <stdio.h>
#include <stdbool.h>

int main(void) {

    bool weekend[] = {true, [6] = true};

    for (int i = 0; i < 7; i++) {
        printf("Index[%d] : %d\n", i, weekend[i]);
    }

    return 0;
}