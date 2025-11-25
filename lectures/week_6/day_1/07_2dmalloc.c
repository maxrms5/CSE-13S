/* Demo for valgrind */

#include <stdio.h>
#include <stdlib.h>

void printMat(int n, int** x) {
	printf("%d\n", n);
	for(int i=0; i<n;i++) {
		for(int j=0;j<n;j++) {
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
	return;
}

int main() {
	int sz = 4;
	int **m2 = (int**)malloc(sizeof(int*) * sz);
	for(int i=0; i< sz; i++) {
		m2[i] = (int*)calloc(sz, sizeof(int));
		m2[i][i] = 1;
	}
	printMat(sz, m2);
	for(int i=0; i<sz; i++)
		free(m2[i]);
	free(m2);
	return 0;
}
