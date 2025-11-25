#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "string_reverse.h" // Include the header file

int main() {
    // Test cases
    char* empty = "";
    char* empty_reversed = string_reverse(empty);
    assert(strcmp(empty_reversed, "") == 0);
    free(empty_reversed);

    char* single = "a";
    char* single_reversed = string_reverse(single);
    assert(strcmp(single_reversed, "a") == 0);
    free(single_reversed);

    char* normal = "hello";
    char* normal_reversed = string_reverse(normal);
    assert(strcmp(normal_reversed, "olleh") == 0);
    free(normal_reversed);

    char* palindrome = "madam";
    char* palindrome_reversed = string_reverse(palindrome);
    assert(strcmp(palindrome_reversed, "madam") == 0);
    free(palindrome_reversed);

    printf("All tests passed!\n");
    return 0;
}