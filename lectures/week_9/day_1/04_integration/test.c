#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "file_reader.h"
#include "data_processor.h"

int main() {
    // 1. Valid input file
    FILE* valid_file = fopen("valid_input.txt", "w");
    fprintf(valid_file, "This is valid data.");
    fclose(valid_file);

    char* valid_data = read_file("valid_input.txt");
    assert(valid_data != NULL);
    assert(process_data(valid_data) == 19); // Check data processing
    free(valid_data);
    remove("valid_input.txt"); // Clean up

    // 2. Missing input file
    char* missing_data = read_file("missing_file.txt");
    assert(missing_data == NULL);

    // 3. Different data formats (test with a numeric file)
    FILE* numeric_file = fopen("numeric_input.txt", "w");
    fprintf(numeric_file, "12345");
    fclose(numeric_file);

    char* numeric_data = read_file("numeric_input.txt");
    assert(numeric_data != NULL);
    assert(process_data(numeric_data) == 5); // Check data processing
    free(numeric_data);
    remove("numeric_input.txt");

    printf("All integration tests passed!\n");
    return 0;
}