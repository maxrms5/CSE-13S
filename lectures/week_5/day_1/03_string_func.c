/* String handling in C */

#include<stdio.h>
#include<string.h>

int main() {
    char s1[40], s2[20], s3[40];
    printf("Enter two strings: ");
    scanf("%s %s", s1, s2);

    /* Comparing strings s1 and s2 */
    if(strcmp(s1, s2) != 0) {  //strings are not equal
        printf("Strings are not equal\n");
        strcat(s1, s2);
    } else {
        printf("Strings are equal\n");
    }

    /* Copy s1 to s3 */
    strcpy(s3, s1);

    /* printing the strings and their length */
    printf("str1 = %s and has a length of %ld\n", s1, strlen(s1));
    printf("str2 = %s and has a length of %ld\n", s2, strlen(s2));
    printf("str3 = %s and has a length of %ld\n", s3, strlen(s3));

    return 0;
}