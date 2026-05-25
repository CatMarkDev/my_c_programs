// Name: pointer8.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 05/25/2026

#include <stdio.h>

#define SIZE 100

void get_message(char m[], int n, int *len);
void reverse_message(const char m[], int len);

int main(void) {
    char message[SIZE];
    int m_length = 0;

    printf("Enter message: ");
    get_message(message, SIZE, &m_length);
    reverse_message(message, m_length);

    return 0;
}

void get_message(char m[], int n, int *len) {
    char *s, ch;
    for (s = m; s < m + n; s++) {
        ch = getchar();
        if(ch == '\n')
            break;
        *s = ch;
        *len += 1;
    }
    *s = '\0';
    *len--;
}

void reverse_message(const char m[], int len) {
    printf("Reversal is: ");
    for (int i = len; i >= 0; i--){
        printf("%c", *(m + i));
    }
    printf("\n");
}