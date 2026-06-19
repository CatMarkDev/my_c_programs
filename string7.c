// Name: string7.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 06/19/2026

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LEN 21

int read_line(char *s, int n);

int main(void) {
    char current_word[LEN], smallest_word[LEN], largest_word[LEN];
    printf("Enter word: ");
    read_line(current_word, LEN);
    strcpy(smallest_word, current_word);
    strcpy(largest_word, current_word);

    while(strlen(current_word) != 5){
        if(strcmp(current_word, smallest_word) < 0){
            strcpy(smallest_word, current_word);
        }
        if(strcmp(current_word, largest_word) > 0){
            strcpy(largest_word, current_word);
        }
        printf("Enter word: ");
        read_line(current_word, LEN);
    }
    printf("\nSmallest word: %s", smallest_word);
    printf("Largest word: %s\n", largest_word);

    return 0;
}
int read_line(char *s, int n){
    int ch, i = 0;
    while ((ch = getchar()) != EOF && isspace(ch)){}
    if (ch != EOF) s[i++] = ch;
    
    while (ch != EOF && ch != '\n'){
        ch = getchar();
        if (i < n) s[i++] = ch;        
    }
    s[i] = '\0';
    return i;
}