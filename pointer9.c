// Name: pointer9.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 05/25/2026

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

#define SIZE 100

void get_message(char m[], int n, int *len);
bool is_palindrome(const char *message);

int main(void) {
    char message[SIZE];
    int length = 0;

    printf("Enter message: ");
    get_message(message, SIZE, &length);

    if(is_palindrome(message)){
        printf("Palindrome.\n");
    } else {
        printf("Not a palindrome.\n");
    }
    return 0;
}

// Function to get a message from the user and calculate its length
void get_message(char m[], int n, int *len) {
    char *s, ch;
    for (s = m; s < m + n - 1; s++) {
        ch = getchar();
        if(ch == '\n')
            break;
        *s = ch;
        *len += 1;
    }
    *s = '\0'; // Null-terminate the string
}

// Function to check if the message is a palindrome
bool is_palindrome(const char *message){
    const char *left, *right;

    left = message;
    right = message + strlen(message) - 1;
    while(left < right){
        while(left < right && !isalnum((unsigned char)*left)){
            left++;
        }
        while(left < right && !isalnum((unsigned char)*right)){
            right--;
        }
        if(tolower((unsigned char)*left) != tolower((unsigned char)*right)){
            return false;
        }
        left++;
        right--;
    }
    return true;
}