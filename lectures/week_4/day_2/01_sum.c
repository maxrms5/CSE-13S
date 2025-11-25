/* Using arrays to sum the square of numbers */

#include <stdio.h>

int main() {
    int n = 0, sum=0;
    printf("Enter a value for n: ");
    scanf("%d", &n);

    int num[n]; //static array 
    printf("Enter %d numbers: ", n);

    /* Reading values from the terminal */
    for(int i=0; i<n; i++)                  //indexing goes from 0 to n-1
        scanf("%d", &num[i]);   
    
    /* Computing the sum of squares of numbers */
    for(int i=0; i<n; i++) 
        sum = sum + num[i] * num[i];

    /* Printing the numbers */
    for(int i=0; i<n; i++) 
        printf("num[%d] = %d\n", i, num[i]);

    printf("The sum of squares is %d\n", sum);
    
    return 0;
}