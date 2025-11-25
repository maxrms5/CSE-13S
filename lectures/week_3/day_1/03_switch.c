/* Demonstrating the use of switch for printing grades */

#include <stdio.h>

int main() {
    int score;
    printf("Enter a score between 1-100: ");
    scanf("%d", &score);

    int grade = score / 10;
    switch(grade) {
        case 10: 
        case 9: printf("Grade: A\n"); break;
        case 8: printf("Grade: B\n"); break;
        case 7: printf("Grade: C\n"); break;
        case 6: printf("Grade: D\n"); break;
        case 5: printf("Grade: E\n"); break;
        default: printf("Grade: F\n"); break;
    }
    
  

    return 0;
}