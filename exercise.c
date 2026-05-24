// Name: exercise.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 05/23/2026

/*************************************************************************************
    Version 2: This code generates a 2D array of random integers, 
    calculates their sum and average using a function, 
    finds the largest and second largest elements using another function, 
    and prints the elements, sum, average, largest, 
    and second largest values to the console.
**************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN 10

void avg_sum(int a[][LEN], int n, int *avg, int *sum);
void find_two_largest(int a[][LEN], int n, int *largest, int *second_largest);

int main(void) {

    srand(time(NULL));
    int avg, sum, largest, second_largest;

    int a[LEN][LEN];
    for (int i = 0; i < LEN; i++){
        for (int j = 0; j < LEN; j++){
            a[i][j] = rand() % 100;
        }
    }

    avg_sum(a, LEN, &avg, &sum);
    find_two_largest(a, LEN, &largest, &second_largest);

    printf("\nElements of the 2D array(10x10):\n\n");
    for (int i = 0; i < LEN; i++) {
        for (int j = 0; j < LEN; j++) {
            printf("%0.2d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nThe sum of the 2D array is: %d\n", sum);
    printf("The average of the 2D array is: %d\n", avg);
    printf("The largest element in the 2D array is: %d\n", largest);
    printf("The second largest element in the 2D array is: %d\n", second_largest);

    return 0;
}

void avg_sum(int a[][LEN], int n, int *avg, int *sum) {
    
    *sum = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            *sum += a[i][j];
        }
    }
    *avg = *sum / (n * n);
}

void find_two_largest(int a[][LEN], int n, int *largest, int *second_largest){
    *largest = a[0][0];
    *second_largest = a[0][0];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] > *largest){
                *second_largest = *largest;
                *largest = a[i][j];
            } else if (a[i][j] > *second_largest && a[i][j] != *largest){
                *second_largest = a[i][j];
            }
        }
    }
}






/****************************************************************** 
    Version 1: This code generates an array of random integers, 
    calculates their sum using a function, 
    and prints the elements and the total sum to the console.
*******************************************************************/ 

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// #define LEN 5

// int sum_arr(int len, int a[]);

// int main(void) {

//     srand(time(NULL)); 

//     int a[LEN], total;

//     for (int i = 0; i < LEN; i++){
//         a[i] = rand() % 100; 
//     }

//     total = sum_arr(LEN, a);
//     printf("Elements of array: ");
//     for (int i = 0; i < LEN; i++) {
//         printf("%d ", a[i]);
//     }

//     printf("\nThe sum of the array is: %d\n", total);

//     return 0;
// }

// int sum_arr(int len, int a[]) {
//     int sum = 0;
//     for (int i = 0; i < len; i++){
//         sum += a[i];
//     }
//     return sum;
// }