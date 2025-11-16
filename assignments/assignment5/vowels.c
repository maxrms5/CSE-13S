/* Counting the number of vowels in a string */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int countVowels(char *str) {
    int count = 0;
    int i = 0;
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

    while (*(str + i) != '\0') { // while char is in string
        for (int j=0; j<=4; j++) {
            if (tolower(*(str + i)) == vowels[j]) { // checks if char is a vowel
                count++;
            }
        }
        i++;
    }
    return count;
}

int main() {
    int n;
    printf("Enter the maximum length of the string: ");
    scanf("%d", &n);

    char *str;  //pointer to the string
    int vowelCount; //variable to store the number of vowels

    str = malloc(sizeof(char) * n); // allocate memory for string
    if (str == NULL) { // checks if memory can be allocated
        printf("Memory allocation failed!\n");
        return 1;
    } else {
        printf("Enter a string: ");
        scanf(" ");
        fgets(str, n, stdin); // reads string from user
    }
    
    vowelCount = countVowels(str);
    free(str); // free memory allocated

    printf("Number of vowels: %d\n", vowelCount);

    return 0;
}
