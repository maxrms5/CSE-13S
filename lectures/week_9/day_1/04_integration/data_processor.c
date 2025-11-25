#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "data_processor.h"

int process_data(const char* data) {
    if (data == NULL) {
        return -1; // Handle null data
    }

    // Simple processing: count the number of characters
    return strlen(data);
}