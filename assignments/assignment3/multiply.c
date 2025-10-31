/* Multiplying 2-D matrices */

#include <stdio.h>

int printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int main() {
    int n, m; //store the size of a
    printf("Enter the number of rows and columns for matrix a: ");
    scanf("%d %d", &n, &m);

    int p, q; //store the size of b
    printf("Enter the number of rows and columns for matrix b: ");
    scanf("%d %d", &p, &q);

    int a[n][m], b[p][q], c[n][q]; //declaring 3 matrices

    if (m != p) {
        printf("The given matrix sizes are not compatible!\n");
        return -1;
    } else {
        // read matrix a from user
        printf("Enter %d values for matrix a: ", n * m);
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                int num;
                scanf("%d", &num);
                a[i][j] = num;
            }
        }
        // read matrix b from user
        printf("Enter %d values for matrix b: ", p * q);
        for (int i=0; i<p; i++) {
            for (int j=0; j<q; j++) {
                int num;
                scanf("%d", &num);
                b[i][j] = num;
            }
        }
    }

    // multiply matricies
    for (int i=0; i<n; i++) {
        for (int j=0; j<q; j++) {
            int num = 0;
            for (int k=0; k<m; k++) {
                num += a[i][k] * b[k][j];
            }
            c[i][j] = num;
        }
    }

    // print matricies
    printf("Matrix a:\n");
    printMatrix(n, m, a);
    printf("Matrix b:\n");
    printMatrix(p, q, b);
    printf("Matrix c:\n");
    printMatrix(n, q, c);

    return 0;
}
