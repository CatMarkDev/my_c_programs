// Name: pointerArr.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 06/18/2026

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void input_numbers(int arr[], int n);
void random_elements(int arr[], int n);
void print_array(int arr[], int n);
void reverse_array(int arr[], int n);
int sum_array(int arr[], int n);

int main(void){
    srand(time(NULL));

    int a[N];
    int sum = 0;

    //random_elements(a, N);
    printf("------------------------------------------------------------");

    printf("\nEnter %d numbers: ", N);
    input_numbers(a, N);

    printf("\nThe elements of array : ");
    print_array(a, N);

    printf("\nIn reverse order: ");
    reverse_array(a, N);

    sum = sum_array(a, N);
    printf("\nSum of elements: %d\n", sum);
    printf("------------------------------------------------------------");

    return 0;
}

void input_numbers(int arr[], int n){
    int *p;
    for (p = arr; p < arr + n; p++){
        scanf("%d", p);
    }
}

void random_elements(int arr[], int n){
    for (int i = 0; i < n; i++){
        int r = rand() % 100;
        arr[i] = r;
    }
}

void print_array(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

void reverse_array(int arr[], int n){
    int *p;
    for (p = arr + (n - 1); p >= arr;p--){
        printf("%d ", *p);
    }
}

int sum_array(int arr[], int n){
    int *p, sum = 0;
    for (p = arr; p < arr + n; p++){
        sum += *p;
    }
    return sum;
}