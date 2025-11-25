#include <stdio.h>
#include <limits.h> // For INT_MIN

int find_max(int *arr, int size) {
    /* TODO: Implement this function to return the largest element of the arr.
             If the array is empty, return INT_MIN. 
             Use only pointer arithmetic. */
             
}

int main(void) {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int num[n];
    printf("Enter %d int values: ", n);
    for(int i=0; i < n; i++)
        scanf("%d", num+i);

    printf("The max value is %d\n", find_max(num, n));  //find_max returns an int

    return 0;
}