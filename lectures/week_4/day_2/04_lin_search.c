/* Linear search in C */

#include <stdio.h>

int linear_search(int num[], int n, int v); //array of numbers, number of values and value to search for

int main() {
    int num[5], loc, val;
    printf("Enter 5 values: ");
    for(int i=0; i < 5; i++) {
        scanf("%d", &num[i]); 
        printf("num[%d] = %d\n", i, num[i]);
    }
    printf("Enter the value you wish to search for: ");
    scanf("%d", &val);
    
    loc = linear_search(num, 5, val);
    if(loc==-1)
        printf("Value not found.\n");
    else printf("Value found at index %d\n", loc);
    
    return 0;
}

int linear_search(int num[], int n, int v) {
    for(int i=0; i< n; i++) {
        if(num[i]==v)
            return i;
    }
    return -1;
}