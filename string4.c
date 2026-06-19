// Name: string4.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 06/18/2026

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

void capitalize(char *s);

int main(int argc, char *argv[]) {
    char *planets[] = {"MERCURY", "VENUS", "EARTH", "MARS", "JUPITER", "SATURN", "URANUS", "NEPTUNE", "PLUTO"};
    char command[10];
    int i, j;

    for (i = 1; i < argc; i++){
        strcpy(command, argv[i]);
        capitalize(command);
        for (j = 0; j < NUM_PLANETS; j++){
            if(strcmp(command, planets[j]) == 0){
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        }
        if(j == NUM_PLANETS){
            printf("%s is not a planet\n", argv[i]);
        }
    }
    return 0;
}
void capitalize(char *s){
    while(*s){
        *s++ = toupper(*s);
    }
}