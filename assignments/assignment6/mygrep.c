#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define LINE_SIZE 1024

/* This function prints lines (in a file) that contain string s. Assume all lines have at most (LINE_SIZE - 2) ASCII characters. */
int print_matched_lines(const char *s, const char *filename) {

    FILE *fptr = fopen(filename, "r"); // open file in a buffer, and assign ptr to start of buffer
    if (fptr == NULL) { // checks for successful closing of file
        perror("Error opening file\n");
        return -1; // checks to make sure file was able to be opened
    }

    char line[LINE_SIZE]; // initilizes char array to store line of file

    while (1) {
        fgets(line, LINE_SIZE, fptr); // gets line from file, advances file ptr by one
        if (feof(fptr)) break; // if EOF then break loop

        // if string is found in targeted line, print entire line
        if (strstr(line, s) != NULL) { 
            printf("%s", line);
        }
    }

    if (fclose(fptr) != 0) { 
        perror("Error closing file\n");
        return -1; 
    }

    return 0;
}

int main(int argc, char **argv) {
    if (argc != 3) {
        printf("Usage: %s <string> <filename>\n", argv[0]);
        return -1;
    }

    if (print_matched_lines(argv[1], argv[2])) {
        printf("print_matched_lines() returned a non_zero value.\n");
	return -1;
    }
    return 0;
}
