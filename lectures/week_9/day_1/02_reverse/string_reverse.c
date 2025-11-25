#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* string_reverse(char* str) {
    if (str == NULL) {
        return NULL; // Handle null input
    }

    int length = strlen(str);
    char* reversed = (char*)malloc((length + 1) * sizeof(char)); // Allocate memory for reversed string

    if (reversed == NULL) {
        return NULL; // Handle memory allocation failure
    }

    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0'; // Null-terminate the reversed string

    return reversed;
}