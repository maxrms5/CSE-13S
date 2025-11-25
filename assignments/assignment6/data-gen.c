#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;
    unsigned int seed;

    if (argc != 4) {
        printf("Usage: %s <seed> <n> <filename>\n", argv[0]);
        return -1;
    }

    seed = atoi(argv[1]);
    n = atoi(argv[2]);
    srand(seed);

    FILE *fp = fopen (argv[3], "w");
    if (fp == NULL) {
	printf("Error opening file.\n");
	return -1;
    }

    for (int i = 0; i < n; i ++) {
        int r = rand(); // get a pseudo-random value
        if (fwrite(&r, sizeof(r), 1, fp) != 1)  {	// write the integer to the file and check the return value!!
            printf("fwrite() failed.\n");
	    return -1;
	}
    }

    fclose(fp);
    return 0;
}
