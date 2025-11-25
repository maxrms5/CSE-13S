#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "file_reader.h"

char* read_file(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        return NULL; // Handle file open error
    }

    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);
    fseek(file, 0, SEEK_SET);

    char* buffer = (char*)malloc((file_size + 1) * sizeof(char));
    if (buffer == NULL) {
        fclose(file);
        return NULL; // Handle memory allocation error
    }

    fread(buffer, 1, file_size, file);
    buffer[file_size] = '\0'; // Null-terminate the buffer

    fclose(file);
    return buffer;
}