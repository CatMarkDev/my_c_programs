// Name: string5.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 06/19/2026

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define LEN 100

int read_line(char s[], int n);

int main(void) {
    char str[LEN];
    printf("Enter string: ");
    read_line(str, LEN);

    printf("%s", str);

    return 0;
}
int read_line(char s[], int n){
    int ch, i = 0;
    
    while((ch = getchar()) != EOF && isspace(ch)){}

    if(ch == EOF){
        s[i] = '\0';
        return i;
    }
    do{
        if(i >= n)
            break;
        s[i++] = ch;

        if(ch == '\n')
            break;

        ch = getchar();
    } while (ch != EOF && !isspace(ch));
    s[i] = '\0';
    return i;
}