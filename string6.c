// Name: string6.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 06/19/2026

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define LEN 100

int read_line(char s[], int n);
int my_strcmp(char *s, char *t);
void get_extension(const char *file_name, char *extension);
void build_index_url(const char *domain, char *index_url);
void censor(char s[]);
void capitalize(char s[]);

bool test_extension(const char *file_name, const char *extension);

int main(void){
    char file_name[LEN], extension[LEN];
    printf("Enter file name: ");
    read_line(file_name, LEN);

    get_extension(file_name, extension);
    printf("Extension: %s\n", extension);

    char index_url[LEN];
    build_index_url("example.com", index_url);
    printf("Index URL: %s\n", index_url);

    char str[LEN] = "foo bar baz";
    censor(str);
    printf("Censored string: %s\n", str);

    char capitalized_str[LEN] = "hello world";
    capitalize(capitalized_str);
    printf("Capitalized string: %s\n", capitalized_str);

    if (test_extension(file_name, "txt") == 0)    {
        printf("The file is a text file.\n");
    }
    else    {
        printf("The file is not a text file.\n");
    }

    return 0;
}
int read_line(char s[], int n){
    int ch, i = 0;

    while ((ch = getchar()) != EOF && isspace(ch)){}
    if (ch != EOF)    {
        s[i++] = ch;
    }
    while (ch != EOF && ch != '\n'){
        ch = getchar();
        if (i < n){
            s[i++] = ch;
        }
    }
    s[i] = '\0';
    return i;
}
int my_strcmp(char *s, char *t){
    while (*s == *t){
        if (*s == '\0')
            return 0;
        s++;
        t++;
    }
    return *s - *t;
}
void get_extension(const char *file_name, char *extension){
    const char *dot = strrchr(file_name, '.');
    if (dot != NULL)    {
        strcpy(extension, dot + 1);
    }
    else    {
        extension[0] = '\0';
    }
    extension[LEN - 1] = '\0';
}
void build_index_url(const char *domain, char *index_url){
    const char *prefix = "https://www.";
    const char *suffix = "/index.html";
    strcpy(index_url, prefix);
    strcat(index_url, domain);
    strcat(index_url, suffix);
}
void censor(char s[]){
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'f' && s[i + 1] == 'o' && s[i + 2] == 'o')
        {
            s[i] = 'x';
            s[i + 1] = 'x';
            s[i + 2] = 'x';

            i += 2;
        }
    }
}
void capitalize(char s[]){
    char *p;
    for (p = s; *p != '\0'; p++){
        *p = toupper(*p);
    }
}
bool test_extension(const char *file_name, const char *extension){
    char file_extension[LEN], extension_upper[LEN];
    get_extension(file_name, file_extension);
    capitalize(file_extension);
    for (int i = 0; extension[i] != '\0'; i++){
        extension_upper[i] = toupper(extension[i]);
    }
    extension_upper[strlen(extension)] = '\0';
    return my_strcmp(file_extension, extension_upper) == 0;
}