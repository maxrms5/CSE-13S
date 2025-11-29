#include <stdlib.h>
#include <stdio.h>

/* This function copies integers from file infp to file outfp. */
int copy_integers(FILE *outfp, FILE *infp, int start, int end) // start = start index; end = end index
{
    long count = end - start + 1; // count of integers to be copied
    int buffer; // buffer for file
    
    if (fseek(infp, start * sizeof(int), SEEK_SET)) return -1; 
    /*  calls fseek(<input_file>, <offset>, <start_index>) and returns -1 if error
        REMEMBER: we have opened the file in main() so it is stored in memory now.
        fseek() searches that memory with: 
            <input_file> -> pointer to file
            <offset> -> pointer to start of seeked data in memory segment (offset from <start_index>)
            <start_index> -> pointer to start of memory segment, in this case we use constant SEEK_SET */
    
    // now that we have initilized our pointers on our memory segment, we interate over the data and copy specified values
    for (long i=0; i<count; i++) {

        // reads an integer from memory and stores it in a buffer
        if(fread(&buffer, sizeof(int), 1, infp) != 1) return -1;
    
        // writes integer to output file
        if(fwrite(&buffer, sizeof(int), 1, outfp) != 1) return -1;
    }
    

    return 0;
}

int main(int argc, char *argv[])
{
    if (argc < 4) {
        printf("Usage: %s <input-filename> <output-filename> range [range ..]\n", argv[0]);
        return -1;
    }
    
    FILE *infp, *outfp;

    /* TODO: Open the input and output files for read and write operations respectively. If the operations fail, return -1. */
    infp = fopen(argv[1], "rb");
    if (!infp) return -1;
    outfp = fopen(argv[2], "wb");
    if (!outfp) return -1;

    for (int i=3; i<argc; i++) {
        int start, end;
        if (sscanf(argv[i], "%d-%d", &start, &end) != 2) {
            if (sscanf(argv[i], "%d", &start) != 1) {
		printf("Invalid range!\n");
		return -1;
	    } 
            end = start;
        }

        if (start < 0 || end < 0 || end < start) {
	  printf("Start and end must be >= 0 and start must be <= end\n");
	  return -1;
	}
        if (copy_integers(outfp, infp, start, end)) {
	  printf("copy_integers() returned an error.\n");
	  return -1;
	}
    } 

    /* TODO: Close the files. If the operations fail, return -1. */
    if (fclose(infp) != 0) return -1;
    if (fclose(outfp) != 0) return -1;

    return 0;
}
