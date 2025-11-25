/* Sum of first n numbers */

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int sum = 0;

    // Calculating sum using while loop
    int i = 1;
    while (i <= n) 
        sum = sum + i++;
    printf("The sum of first %d numbers is %d\n", n, sum);

    // Calculating sum using a for loop
    sum = 0;
    for(int i=1; i<=n; i++){
        sum = sum + i;
    }
    printf("The sum of first %d numbers is %d\n", n, sum);
    return 0;
}