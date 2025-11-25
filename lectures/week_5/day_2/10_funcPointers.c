/* Function pointers or pointers to functions 
 * Using function pointers to sort data of any type
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ssort(void *base, size_t nel, size_t width, int (*compar)(const void *, const void *)) {
	int i, j, k;
	char tmp[width];
	for(i=0; i<nel;i++) {
		for(j=i; j<nel; j++) {
			if(compar(base+i*width, base+j*width) > 0) {    //call the appropriate function to compare values
				char* ei = base + i * width;
				char* ej = base + j * width;
				for(k=0;k<width;k++) tmp[k] = ei[k];
				for(k=0;k<width;k++) ei[k] = ej[k];
				for(k=0;k<width;k++) ej[k] = tmp[k];
			}
		}
	}
}

int compareStr(const void* a, const void* b) {
	return strcmp(*(char**)a, *(char**)b);
}

int compareInt(int* a, int* b) {
	return *a - *b;
}

int main() {
	int i;
	
	/* sorting strings using slow sort*/
    char* s[6] = {"hello", "bye", "aaaa", "b", "zz", "dddd"};
	for(i=0;i<6;i++)
		printf("s[%d] = %s\n", i, s[i]);
	printf("\n");
    ssort(s, 6, sizeof(char*), compareStr);
	for(i=0;i<6;i++)
		printf("s[%d] = %s\n", i, s[i]);
    printf("\n");

	/* sorting integers using slow sort */
	int t[10];
	for(i=0;i<10;i++)
		t[i] = abs((int)random()) % 1000;
	for(i=0;i<10;i++)
		printf("t[%d] = %d\n", i, t[i]);
	printf("\n");
    ssort(t, 10, sizeof(int), (int(*)(const void *, const void*))compareInt);
	for(i=0;i<10;i++)
		printf("t[%d] = %d\n", i, t[i]);
    printf("\n");

	return 0;
}
