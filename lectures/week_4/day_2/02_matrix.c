/* Adding 2 matrices of size n x n */

#include <stdio.h>

int main() {
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);

    int a[n][n], b[n][n], c[n][n];  //declaring 3 matrices of sizes nxn

    /* Input values for a */
    printf("Enter %d values for matrix a: ", n*n);
    for(int i=0; i<n; i++) //goes over n rows (0 to n-1)
        for(int j=0; j<n; j++)  // goes over n columns (0 to n-1)
            scanf("%d", &a[i][j]);

    /* Input values for b */
    printf("Enter %d values for matrix b: ", n*n);
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &b[i][j]);

    /* Compute values for c */
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            c[i][j] = a[i][j] + b[i][j];

    /* Print a, b, and c */
    printf("Matrix a: \n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    
    printf("Matrix b: \n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }

    printf("Matrix c: \n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
    return 0;
}