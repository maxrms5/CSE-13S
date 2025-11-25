#include <stdio.h>
#include <limits.h> // For INT_MIN

int find_max(int *arr, int size) {
    int max = arr[0];
    if (size <= 0) return INT_MIN;
    if (size > 0) {
        for (int i=0; i<size; i++) {
            if (*(arr + i) > max) max = arr[i]; // iterates to the next address rather than array index
        }
    }
    return max;
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