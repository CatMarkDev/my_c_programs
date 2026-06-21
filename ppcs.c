// Name: ppcs.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 06/20/2026

#include <stdio.h>
#include <string.h>

#define AVG(x, y) (((x) + (y)) / 2)
#define AREA(x, y) ((x) * (y))
#define DOUBLE(x) (2*x)
#define NELEMS(a) (sizeof(a) / sizeof((a)[0]))
#define CUBE(x) ((x) * (x) * (x))
#define REMINDER(n) ((n) % 4)
#define TOUPPER(c) ('a' <= (c) && (c) <= 'z' ? (c) - 'a' + 'A' : (c))
#define PRODUCT(type)                           \
    type type##_product(type x, type y) {       \
        return ((x) / (y)) < 100 ? 1 : 0;       \
    }

PRODUCT(int)

int main(void){
    int x = 3;
    int y, i, e, d, avg, area;
    int a[] = {0, 0, 0, 0, 0, 0, 0, 0};
    char s[100];

    avg = AVG(4, 6);
    area = AREA(5, 4);
    d = 4 / DOUBLE(2);
    e = NELEMS(a);
    x = CUBE(x);
    y = REMINDER(300);

    strcpy(s, "abcd");
    i = 0;
    putchar(TOUPPER(s[++i]));
    printf("s = %s\n", s);

    i = 0;
    strcpy(s, "0123");
    putchar(TOUPPER(s[++i]));
    printf("s = %s\n", s);
    //i = int_product(y, x);

    
    // printf("The average of 4 and 6 is: %d\n", avg);
    // printf("The area of a rectangle with length 5 and width 4 is: %d\n", area);
    // printf("The result of 4 divided by the double of 2 is: %d\n", d);
    // printf("The number of elements in the array is: %d\n", e);
    // printf("The cube of 3 is: %d\n", x);
    // printf("The reminder of 300 divided by 4 is: %d\n", y);
    // printf("Is the product of y and x less than 100? %d\n", i);
    return 0;
}