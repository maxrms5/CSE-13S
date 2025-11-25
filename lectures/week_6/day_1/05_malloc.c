/* Dynamic memory allocation using malloc/calloc and pointer arithmetic */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int *pox = (int*)malloc(4 * sizeof(int)); /* points to the start of memory block allocated - array of integers */
	
	for(int i=0; i < 4; i++) {
		pox[i] = i + 10;
	}
	for(int i=0; i < 4; i++) {
		printf("%d\n", *(pox+i));	//pox[i]
	}

	free(pox); /* ALWAYS FREE ANY MEMORY YOU MALLOC AND CALLOC */
	
	return 0;
}
