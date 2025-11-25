#include <stdio.h>

int main(int argc, char *argv[]) {
    int h;
    scanf("%d", &h);
    
    // allocate memory for triangle
    int **triangle = malloc(h * sizeof(*triangle));

    // allocate memory for rows
    for (int i=0; i<h; i++) {
        *(triangle + i) = malloc((i+1) * sizeof(int));
    }
    
    for(int i=0; i<h; i++) {
        triangle[i][0] = 1;
        triangle[i][i] = 1;
        for (int j=0; j<i; j++) {
            triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
        }
    }

    for(int i=0; i<h; i++) {
        for (int j=0; j<i; j++) {
            printf("%d", triangle[i][j]);
        }
    }

    for (int i=1; i<h; i++) {
        free(triangle[i]);
    }
    
    free(triangle);
    return 0;
}