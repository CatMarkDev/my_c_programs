// Name: string2.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 06/18/2026

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);

int main(void){
    char reminders[MAX_REMIND][MSG_LEN + 15];
    char date_time_str[15],  msg_str[MSG_LEN + 1];
    int month, day, hour, minute, i, j, num_remind = 0;

    for (;;){
        if(num_remind == MAX_REMIND){
            printf("-- No space left --\n");
            break;
        }
        printf("Enter month/day, time and reminder: ");
        scanf("%2d/%2d %2d:%2d", &month, &day, &hour, &minute);

        if(month == 0) break;
        if(month < 1 || month > 12 || day < 1 || day > 31 || 
           hour < 0 || hour > 23 || minute < 0 || minute > 59) {
            printf("-- Invalid date or time --\n");
            
            while (getchar() != '\n'); 
            continue;
        }

        sprintf(date_time_str, " %2d/%2d %02d:%02d ", month, day, hour, minute);
        read_line(msg_str, MSG_LEN);

        for (i = 0; i < num_remind; i++){
            if(strcmp(date_time_str, reminders[i]) < 0)
                break;
        }
        for (j = num_remind; j > i; j--){
            strcpy(reminders[j], reminders[j - 1]);
        }
        strcpy(reminders[i], date_time_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }
    printf("\nMonth/Day Time Reminder\n");
    for (i = 0; i < num_remind; i++){
        printf(" %s\n", reminders[i]);
    }
    return 0;
}
int read_line(char str[], int n){
    int ch, i = 0;
    while((ch = getchar()) != '\n'){
        if(i < n)
            str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}
