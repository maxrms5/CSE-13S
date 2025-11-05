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

    for (int i=0; i<(str_len / 2); i++) {
        int j = str_len - i - 1; // j is end index of str (i is start index)
        
        if (!isalnum(*(str + i))) i++; // skips over non alphanumeric chars
        if (!isalnum(*(str + j))) j++; // skips over non alphanumeric chars

        if (*(str + i) != *(str + j)) {
            printf("The string is not a palindrome.");
            return 0;
        }
    }
    printf("The string is a palindrome.");
    return 0;
}
