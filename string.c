// Name: string.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 06/18/2026


#include <stdio.h>
#include <string.h>

#define LEN 100

int input(char str[], int n);
int count_spaces(const char str[]);

int main(void) {
    char str1[LEN];
    char str2[LEN];
    int length, spaces;

    printf("Enter string1: ");
    input(str1, LEN);
    printf("Enter string2: ");
    input(str2, LEN);

    spaces = count_spaces(str1);
    printf("Comparision of string1 and string2: %d", strcmp(str1, str2));

    printf("\nString1: %s", str1);
    printf("\nString2: %s", str2);

    printf("\nLength of string1: %d ", strlen(str1));
    printf("\nLength of string2: %d ", strlen(str2));

    printf("\nCount of spaces: %d", spaces);

    printf("\nSize of string1: %d", sizeof(str1));
    printf("\nSize of string2: %d", sizeof(str2));

    printf("\n");
    return 0;
}

int input(char str[], int n){
    int ch, i = 0;
    char endl = '\n';
    while((ch = getchar()) != endl && ch != EOF){
        if(i < n){
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}

int count_spaces(const char *str){
    int count = 0;
    while(*str){
        if(*str++ == ' ')
            count++;
    }
    return count;
}