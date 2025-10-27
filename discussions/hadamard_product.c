#include <stdio.h>

void hadamardProduct(int rows, int cols, int matrixA[rows][cols], int matrixB[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        printf(" | ");
        for (int j = 0; j < cols; j++) {
            printf("%d", (matrixA[i][j] * matrixB[i][j]));
        }
    }

}

int main() {
    int matrixA[3][3] = {{5, 2, 6},
                         {3, 4, 5},
                         {9, 8, 2}};

    int matrixB[3][3] = {{9, 2, 3},
                         {7, 5, 1},
                         {4, 6, 7}};

    int cols = sizeof(matrixB[0]) / sizeof(matrixA[0]);
    int rows = sizeof(matrixB) / sizeof(matrixA);

    hadamardProduct(rows, cols, matrixA, matrixB);

    return 0;
}