#include <stdio.h>

void merge_sort(int arr[], int left, int right);
void merge(int arr[], int left, int mid, int right);

int main() {
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unsorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    merge_sort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void merge_sort(int arr[], int left, int right) {

    if (left < right) {
        int mid = (right + left) / 2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void merge(int arr[], int left, int mid, int right) {
    int l = mid - left + 1;
    int r = right - mid;

    int left_arr[l + 1];
    int right_arr[r + 1];

    for (int i=1; i<=l; i++) {
        left_arr[i] = arr[left + i - 1];
    }
    for (int j=1; j<=r; j++) {
        right_arr[j] = arr[mid + j];
    }

    left_arr[l + 1] = 9999;
    right_arr[r + 1] = 9999; 

    int i = 1;
    int j = 1;

    for (int k=left; k<=right; k++) {
        if (left_arr[i] <= right_arr[j]) {
            arr[k] = left_arr[i];
            i += 1;
        } else {
            arr[k] = right_arr[j];
            j += 1;
        }
    }
}
