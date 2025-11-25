/* Pointers to 2d arrays */

#include <stdio.h>

int main() {
    // 1. Declare and initialize a 2D array
    int matrix[3][4] = {
        {10, 11, 12, 13},
        {20, 21, 22, 23},
        {30, 31, 32, 33}
    };

    int (*p)[4];     //p points to an array of 4 integers - different from int *p[4] which is an array of pointers since [] has higher precedence than *
    p = matrix;      //p points to the first row

    //Accessing element at row i=1, column j=2 (matrix[1][2])
    int i = 1;
    int j = 2;
    printf("Accessing element at index [%d][%d]:\n", i, j);
    printf("  Using matrix[i][j] = %d\n", matrix[i][j]);
    printf("  Using *(*(p + i) + j) = %d\n", *(*(p + i) + j));
    printf("\n");

    return 0;
}