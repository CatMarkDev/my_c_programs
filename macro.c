// Name: macro.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 06/21/2026

#include <stdio.h>

#define DISP(f, x) printf(#f"(%g) = %g\n", x, f(x))
#define DISP2(f,x,y) printf(#f"(%g) + (%g) = %g\n", x, y, f(x,y))

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)
#define LINE_FILE "Line " TOSTRING(__LINE__) " of file " __FILE__

#define GENERIC_MAX(type)                   \
    type type##_max(type x, type y){        \
            return x > y ? x : y;           \
    }

#define CHECK(x,y,n) ((x) >= 0 && (x) <= (n) - 1) && ((y) >= 0 && (y) <= (n) - 1)
#define MEDIAN(x, y, z) (((x) >= (y) ? ((x) <= (z) ? (x) : ((y) >= (z) ? (y) : (z))) : ((x) >= (z) ? (x) : ((y) <= (z) ? (y) : (z)))))
#define POLYNOMIAL(x) (3*(x)*(x)*(x)*(x)*(x) + 2*(x)*(x)*(x)*(x) - 5*(x)*(x)*(x) - (x)*(x) + 7*(x) - 6)

#define ERROR(...) fprintf(stderr, __VA_ARGS__)

double sqrt(double x){
    return x / 2; // Placeholder implementation for demonstration
}
double pow(double x, double y){
    return x * y; // Placeholder implementation for demonstration
}

typedef unsigned long ulong;

GENERIC_MAX(ulong)

int main(void){
    DISP(sqrt, 3.0);
    DISP2(pow, 3.0, 4.0);
    const char *str = LINE_FILE;
    int result = CHECK(4, 5, 2);
    int median = MEDIAN(6, 4, 7);
    int pol = POLYNOMIAL(4);
    int index = 1;

    long l = ulong_max(12415, 211556);
    printf("long_max(12415, 211556) = %ld\n", l);
    printf("%s\n", str);
    printf("Result : %d\n", result);
    printf("Median: %d\n", median);
    printf("Polynomial(4) = %d\n", pol);

    ERROR("Hello world %d\n", index);

    return 0;
}