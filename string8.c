// Name: scrabble.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 06/20/2026

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define LEN 100
#define ALPHABET_SIZE 26

int read_line(char s[], int n);
int compute_scrabble_value(const char *word);
int compute_vowel_count(const char *sentence);
double compute_average_word_length(const char *sentence);
void reverse_name(char *name);
void reverse_sentence(char *sentence, int n);
void reverse_message(char *message);
void encrypt(char *message, int shift);
bool are_anagrams(const char *word1, const char *word2);

void find_scrabble_value(void);
void find_vowel_count(void);
void show_reversed_name(void);
void average_of_sentence(void);
void reversed_sentence(void);
void show_reversed_message(void);
void encrypt_message(void);
void check_are_anagrams(void);

int main(void) {
    //find_scrabble_value();
    //find_vowel_count();
    //show_reversed_name();
    //average_of_sentence();
    //reversed_sentence();    
    //encrypt_message();
    //check_are_anagrams();
    show_reversed_message();
    return 0;
}
int read_line(char s[], int n){
    int ch, i = 0;
    if (n <= 0) {
        return 0;
    }
    while ((ch = getchar()) != EOF && isspace((unsigned char)ch)) {;}
    while (ch != '\n' && ch != EOF) {
        if (i < n - 1) {
            s[i++] = (char)ch;
        }
        ch = getchar();
    }
    s[i] = '\0';
    return i;
}
int compute_scrabble_value(const char *word){
    static const int values[26] = {
        1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
        1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10
    };

    int value = 0;

    if (word == NULL) {
        return 0;
    }
    for (const char *p = word; *p != '\0'; p++) {
        unsigned char c = (unsigned char)toupper((unsigned char)*p);
        if (c >= 'A' && c <= 'Z') {
            value += values[c - 'A'];
        }
    }
    return value;
}
int compute_vowel_count(const char *sentence){
    int count = 0;
    for (const char *p = sentence; *p != '\0'; p++){
        char ch = toupper(*p);
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            count++;
        }
    }
    return count;
}
double compute_average_word_length(const char *sentence){
    int words = 0;
    int letters = 0;
    bool in_word = 0;

    if(sentence == NULL){
        return 0.0;
    }
    while(*sentence){
        unsigned char ch = (unsigned char)*sentence;
        if(isalpha(ch)){
            letters++;
            if(!in_word){
                words++;
                in_word = true;
            }
        }else{
            in_word = false;
        }
        sentence++;
    }
    if(words == 0){
        return 0.0;
    }
    return (double)letters / words;
}
void reverse_name(char *name){
    if (name == NULL || *name == '\0') 
        return;

    char result[LEN];
    char *space = strchr(name, ' ');

    if (space == NULL) return;
    char first_initial = name[0];
    while (*space == ' ')
        space++;

    snprintf(result, sizeof(result), "%s, %c.", space, first_initial);
    strcpy(name, result);
}
void reverse_sentence(char *sentence, int n){
    if (sentence == NULL || n <= 0) {
        return;
    }
    char words[30][20] = {0};
    char mark = '\0';
    int rows = 0, cols = 0;
    int len = (int)strlen(sentence);

    if (len > 0) {
        char last_ch = sentence[len - 1];
        if (last_ch == '.' || last_ch == '!' || last_ch == '?') {
            mark = last_ch;
            len--; 
        }
    }

    for (int i = 0; i < len; i++) {
        if (!isspace((unsigned char)sentence[i])) {
            if (rows < 30 && cols < 19) { 
                words[rows][cols++] = sentence[i];
            }
        } else {
            if (cols > 0) {
                words[rows][cols] = '\0';
                rows++;
                cols = 0; 
            }
        }
    }    
    if (cols > 0 && rows < 30) {
        words[rows][cols] = '\0';
    } else {
        rows--;
    }
    printf("Reversal of sentence: ");
    for (int i = rows; i >= 0; i--) {
        if (words[i][0] != '\0') {
            printf("%s", words[i]);
            if (i > 0) {
                printf(" ");
            }
        }
    }
    if (mark != '\0') {
        printf("%c", mark);
    }
    printf("\n");
}
void reverse_message(char *message){
    char *p1, *p2;
    if (message == NULL) {
        return;
    }
    p1 = message;
    p2 = message + strlen(message) - 1;
    while (p1 < p2) {
        char temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++;
        p2--;
    }
}
void encrypt(char *message, int shift){
    int len = strlen(message);
    for (int i = 0; i < len; i++){
        char ch = message[i];
        if (isalpha((unsigned char)ch)){
            char base = isupper((unsigned char)ch) ? 'A' : 'a';
            message[i] = (char)((ch - base + shift) % 26 + base);
        }
    }
}
bool are_anagrams(const char *word1, const char *word2){
    char alphabet[ALPHABET_SIZE] = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G',
        'H', 'I', 'J', 'K', 'L', 'M', 'N',
        'O', 'P', 'Q', 'R', 'S', 'T', 'U',
        'V', 'W', 'X', 'Y', 'Z'
    };
    int letters[ALPHABET_SIZE] = {0};

    for (int i = 0; word1[i] != '\0'; i++){
        if(isalpha((unsigned char)word1[i])){
            int ch_index = toupper((unsigned char)word1[i]) - 'A';
            letters[ch_index]++;
        }
    }
    for (int i = 0; word2[i] != '\0'; i++){
        if(isalpha((unsigned char)word2[i])){
            int ch_index = toupper((unsigned char)word2[i]) - 'A';
            letters[ch_index]--;
        }
    }
    for (int i = 0; i < ALPHABET_SIZE; i++){
        if (letters[i] != 0){
            return false;
        }
    }
    return true;
}
void find_scrabble_value(void){
    char word[LEN];
    printf("Enter a word: ");
    read_line(word, LEN);
    printf("Scrabble value: %d\n", compute_scrabble_value(word));
}
void find_vowel_count(void){
    char sentence[LEN];
    printf("Enter a sentence: ");
    read_line(sentence, LEN);
    printf("Your sentence contains %d vowels.\n", compute_vowel_count(sentence));
}
void show_reversed_name(void){
    char name[LEN];
    printf("Enter a first and last name: ");
    read_line(name, LEN);
    reverse_name(name);
    printf("%s", name);
}
void average_of_sentence(void){
    char sentence[LEN];
    printf("Enter a sentence: ");
    read_line(sentence, LEN);
    printf("Average word length: %.2f\n", compute_average_word_length(sentence));
}
void reversed_sentence(void){
    char sentence[LEN];
    printf("Enter a sentence: ");
    read_line(sentence, LEN);
    reverse_sentence(sentence, LEN);
}
void show_reversed_message(void){
    char message[LEN];
    printf("Enter a message: ");
    read_line(message, LEN);
    reverse_message(message);
    printf("Reversal is: %s\n", message);
}
void encrypt_message(void){
    char message[LEN];
    int shift;
    printf("Enter message to be encrypted: ");
    read_line(message, LEN);
    printf("Enter shift amount (1-25): ");
    if(scanf("%d", &shift) != 1 || shift < 1 || shift > 25){
        printf("Invalid shift amount. Please enter a number between 1 and 25.\n");
        return;
    }
    encrypt(message, shift);
    printf("Encrypted message: %s\n", message);
}
void check_are_anagrams(void){
    char word1[LEN], word2[LEN];
    printf("Enter first word: ");
    read_line(word1, LEN);
    printf("Enter second word: ");
    read_line(word2, LEN);
    if(are_anagrams(word1, word2)){
        printf("The words are anagrams.\n");
    } else {
        printf("The words are not anagrams.\n");
    }
}