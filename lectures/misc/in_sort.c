#include<stdio.h>

void insertion_sort(int num[], int n) {
    for (int i=1; i<=n; i++) {
        int k = num[i];
        int j = i - 1;
        while (j >= 0 && num[j] > k) {
            num[j + 1] = num[j];
            j -= 1;
        }
        num[j + 1] = k;
    }
}

int main() {
    int num[5];
    printf("Enter 5 values: ");
    for(int i=0; i < 5; i++) {
        scanf("%d", num+i);
        printf("num[%d] = %d\n", i, num[i]);
    }
    insertion_sort(num, 5);
    printf("The sorted list is below: \n");
    for(int i=0; i < 5; i++) {
        printf("num[%d] = %d\n", i, num[i]);
    }
    return 0;
}