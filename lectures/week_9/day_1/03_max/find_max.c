#include <stdio.h>
#include <limits.h>

int find_max(int arr[], int size) {
    if (arr == NULL || size <= 0) {
        return INT_MIN; // Handle null or empty array
    }

    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}