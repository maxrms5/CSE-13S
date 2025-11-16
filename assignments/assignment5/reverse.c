/* Reversing an array using pointers */

#include <stdio.h>

void reverseArray(int *arr, int size) {
    for (int i=0; i<size/2; i++) {
        int j = size - i - 1; // jth element
        int temp = *(arr + i); // temp to store ith element
        *(arr + i) = *(arr + j); // ith element = jth element
        *(arr + j) = temp; // jth element = (ith element -> temp)
    }
}

int main() {
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for(int i=0; i< n; i++) {
        scanf("%d", arr+i);
    }

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, n);    

    printf("Reversed Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
