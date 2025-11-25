/* Demonstrating the use of if else ladder */

#include <stdio.h>

int main() {
    int score = 0;
    printf("Enter a score between 1-100: ");
    scanf("%d", &score);

    if(score >= 90) {
        printf("Grade: A\n");
    } else if(score >= 80 && score < 90) {
        printf("Grade: B\n");
    } else if(score >= 70 && score < 80) {
        printf("Grade: C\n");
    } else if(score >= 60 && score < 70) {
        printf("Grade: D\n");
    } else if(score >= 50 && score < 60) {
        printf("Grade: E\n");
    } else printf("Grade: F\n");
    return 0;
}