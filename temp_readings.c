// Name: temp_readings.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 05/22/2026

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DAYS 30
#define HOURS 24

int main(void) {

    srand((unsigned int)time(NULL)); // Seed the random number generator
    float temp_readings[DAYS][HOURS] = {0.0f};
    float total_temp = 0.0f;
    float avg_temp = 0.0f;
    
    // Display the temperature readings
    printf("\nTemperature Readings:\n");
    for (int day = 0; day < DAYS; day++) {
        printf("Day %2d: ", day + 1);
        for (int hour = 0; hour < HOURS; hour++) {
            temp_readings[day][hour] = (float)(rand() % 101); // Generate a random temperature between 0 and 100
            total_temp += temp_readings[day][hour];
            printf("%3.0f ", temp_readings[day][hour]);
        }
        printf("\n");
    }

    avg_temp = total_temp / (DAYS * HOURS);
    printf("\nAverage Temperature: %.2f\n", avg_temp);

    return 0;    
}