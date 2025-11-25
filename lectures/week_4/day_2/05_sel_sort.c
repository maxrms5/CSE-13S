/* Selection sort in C
 * Comparison-based sorting algorithm
 * It sorts an array by repeatedly selecting the smallest (or largest) element from the unsorted portion and swapping it with the first unsorted element. 
*/

#include<stdio.h>

void selection_sort(int num[], int n) {
    int pos, min;
    for(int i=0; i<n; i++) {
        pos= i; //assume first of the remaining numbers is the min
        min = num[i];
        for(int j=i+1; j<n; j++) {
            if(num[j] < min) {
                min = num[j];
                pos = j;
            }
        }
        num[pos] = num[i];
        num[i] = min;
    }
}

int main() {
    int num[5];
    printf("Enter 5 values: ");
    for(int i=0; i < 5; i++) {
        scanf("%d", num+i);
        printf("num[%d] = %d\n", i, num[i]);
    }
    selection_sort(num, 5);
    printf("The sorted list is below: \n");
    for(int i=0; i < 5; i++) {
        printf("num[%d] = %d\n", i, num[i]);
    }
    return 0;
}