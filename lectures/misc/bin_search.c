#include <stdio.h>

int binary_search(int num[], int left, int right, int v); 

int main() {
    int num[5], loc, val;
    printf("Enter 5 values in sorted order: ");
    for(int i=0; i < 5; i++) {
        scanf("%d", num+i);
        printf("num[%d] = %d\n", i, num[i]);
    }
    printf("Enter the value you wish to search for: ");
    scanf("%d", &val);
    loc = binary_search(num, 0, 4, val);
    if(loc==-1)
        printf("Value not found.\n");
    else printf("Value found at index %d\n", loc);
    
    return 0;
}

int binary_search(int num[], int left, int right, int v) {

    while (left <= right) {
        int mid = (left + right) / 2;
        if (v == num[mid]) {
            return mid;
        } else if (v < num[mid]) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return -1;
}