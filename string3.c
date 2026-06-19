// Name: string3.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 06/18/2026

#include <stdio.h>

size_t my_strlen(const char *s);
char *my_strcat(char *s1, const char *s2);

int main(void){
    char str1[] = {"Hello world."};
    char str2[] = {"My C Embedded System."};

    printf("Cat : %s", my_strcat(str1, str2));
    printf("\nLength of string: %d", my_strlen(str1) + my_strlen(str2));
    return 0;
}

size_t my_strlen(const char *s){
    const char *p = s;
    while (*s){
        s++;
    }
    return s - p;
}

char *my_strcat(char *s1, const char *s2){
    char *p = s1;

    while (*p) p++;
    while (*p++ = *s2++);

    return s1;
}