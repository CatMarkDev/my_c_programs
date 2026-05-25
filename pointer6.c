// Name: pointer6.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 05/24/2026

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define DAYS 7
#define HOUR 24

void generate_temperatures(int a[][HOUR], int n);
bool search(const int a[][HOUR], int n, int key);
void print_temp(const int a[][HOUR], int n);
void find_largest(const int *a, int n, int *largest);
int sum_two_dimensional_array(const int a[][HOUR], int n);

int main(void) {
    srand(time(NULL));

    int temperatures[DAYS][HOUR];
    int largest;

    generate_temperatures(temperatures, DAYS);
    print_temp(temperatures, DAYS);
    printf("\n\n");
    for (int i = 0; i < DAYS; i++){
        find_largest(&temperatures[i][0], HOUR, &largest);
        printf("Day %d: %d\n", i + 1, largest);
    }
    printf("\nSum of all temperatures: %d\n", sum_two_dimensional_array(temperatures, DAYS));

    return 0;
}

void generate_temperatures(int a[][HOUR], int n) {
    for (int *p = &a[0][0]; p < &a[0][0] + (n * HOUR); p++) {
        *p = rand() % 50;
    }
}
bool search(const int a[][HOUR], int n, int key) {
    for (const int *p = &a[0][0]; p < &a[0][0] + (n * HOUR); p++){
        if(key == *p)
            return true;
    }
    return false;
}

void print_temp(const int a[][HOUR], int n) {
    int count_hour = 0;
    for (const int *p = &a[0][0]; p < &a[0][0] + (n * HOUR); p++) {
        if((count_hour % HOUR) == 0){
            printf("\nDay %d: ", (count_hour / HOUR) + 1);
            printf("%02d ", *p);
        } else {
            printf("%02d ", *p);
        }
        count_hour++;
    }
}

void find_largest(const int *a, int n, int *largest) {
    *largest = *a;
    for (const int *p = a + 1; p < a + n; p++) {
        if (*p > *largest) {
            *largest = *p;
        }
    }
}

int sum_two_dimensional_array(const int a[][HOUR], int n) {
    int sum = 0;
    const int *len = &a[0][0] + (n * HOUR);
    for (const int *p = &a[0][0]; p < len; p++) {
        sum += *p;
    }
    return sum;
}