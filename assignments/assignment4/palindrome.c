#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[101];
    printf("Enter a string (max 100 characters): ");

    fgets(str, sizeof(str), stdin);
    int str_len = strlen(str);
    str[str_len] = 0; // gets rid of newline
    str_len--; // str_len w/o newline

    for (int i=0; i<str_len; i++) *(str + i) = tolower(*(str + i)); // lowercase all letters

    int j = str_len - 1; // end of string index

    for (int i=0; i<(str_len / 2); i++) { // start of string index
        char char_i = *(str + i);
        char char_j = *(str + j);

        if (!isalnum(char_i)) i++; // skips over non alphanumeric chars
        if (!isalnum(char_j)) j--; // skips over non alphanumeric chars

        char_i = *(str + i); 
        char_j = *(str + j);

        if (char_i != char_j) {
            printf("The string is not a palindrome.");
            return 0;
        }
        j--;
    }
    printf("The string is a palindrome.");
    return 0;
}
