// Name: telephone.c
// PurPose: Learn C Programing
// Author: CatMarkDev
// Date: 05/21/2026

#include <stdio.h>

int main(void) {
    int path1, path2, path3;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &path1, &path2, &path3);

    printf("You enterd %.3d.%.3d.%.4d", path1, path2, path3);

    return 0;
}