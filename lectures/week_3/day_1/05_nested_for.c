/* Demonstrating the use of nested for loops - printing identity matrix */

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows and columns: ");
    scanf("%d", &n);
    
    for(int i=0; i < n; i++) {
        for(int j=0; j<n; j++) {
            if(i!=j)
             printf("0 ");
            else printf("1 ");
        }
        printf("\n");
    }
    
    return 0;
}