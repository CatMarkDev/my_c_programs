// Name: pointer10.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 05/25/2026

#include <stdio.h>

#define SIZE 100

void get_sentence(char _sentence[], int size, int *length, char *_terminator);
void print_word(const char *start, const char *end);
void reverse_sentence(const char _sentence[], int length, char terminator);

int main(void){
    char sentence[SIZE];
    char terminator = ' ';
    int length = 0;

    printf("Enter a sentence: ");
    get_sentence(sentence, SIZE, &length, &terminator);
    printf("Reversal of sentence: ");
    reverse_sentence(sentence, length, terminator);

    return 0;
}

void get_sentence(char _sentence[], int size, int *length, char *_terminator){
    char ch, *s;
    for (s = _sentence; s < _sentence + (size - 1); s++){
        ch = getchar();
        if(ch == '.' || ch == '?' || ch == '!'){
            *_terminator = ch;
            break;
        }
        *s = ch;
        *length += 1;
    }
    *s = '\0';
}
void print_word(const char *start, const char *end){
    for (const char *s = start; s < end; s++){
        printf("%c", *s);
    }
}
void reverse_sentence(const char _sentence[], int length, char terminator){
    const char *end = _sentence + length;
    for (const char *s = _sentence + (length - 1); s >= _sentence; s--){
        if(*s == ' '){
            print_word(s + 1, end);
            printf(" ");
            end = s;
        }
        if(s == _sentence){
            print_word(s, end);
            printf("%c", terminator);
        }
    }
}