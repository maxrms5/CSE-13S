/* Implement an increasing triangle of asterisks. An example of the triangle consisting of n=5 rows is shown below. 

*
* *
* * *
* * * *
* * * * *

*/

#include<stdio.h>

int main() {
    int n;
    printf("Enter n (number of rows): ");
    scanf("%d", &n);	

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
