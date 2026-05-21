// Name: magicsquare.c
// PurPose: Learn C Programing
// Author: CatMarkDev
// Date: 05/21/2026

#include <stdio.h>

int main(void) {

    int n0, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15;
    int row0, row1, row2, row3;
    int col0, col1, col2, col3;
    int diagonal0, diagonal1;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &n0, &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);

    printf("\n%d %d %d %d\n", n0, n1, n2, n3);
    printf("%d %d %d %d\n", n4, n5, n6, n7);
    printf("%d %d %d %d\n", n8, n9, n10, n11);
    printf("%d %d %d %d\n", n12, n13, n14, n15);

    row0 = n0 + n1 + n2 + n3;
    row1 = n4 + n5 + n6 + n7;
    row2 = n8 + n9 + n10 + n11;
    row3 = n12 + n13 + n14 + n15;

    col0 = n0 + n4 + n8 + n12;
    col1 = n1 + n5 + n9 + n13;
    col2 = n2 + n6 + n10 + n14;
    col3 = n3 + n7 + n11 + n15;

    diagonal0 = n0 + n5 + n10 + n15;
    diagonal1 = n3 + n6 + n9 + n12;

    printf("\nRow sums: %d %d %d %d\n", row0, row1, row2, row3);
    printf("Column sums: %d %d %d %d\n", col0, col1, col2, col3);
    printf("Diagonal sums: %d %d", diagonal0, diagonal1);

    return 0;
}