/* C program using pointers to compute the sum of all elements in an array */

#include <stdio.h>
int main() {
    int *p, sum = 0, i=0;
    int x[5] = {5, 9, 1, 2, 3};
    p = x; /* assinging the base address of x to p */ //
    printf("Element\tValue\tAddress\n");
    while(i < 5) {
        printf("x[%d]\t%d\t%p\n", i, *(p+i), p+i);  
        sum += *(p+i);
        i++;
    }
    printf("The sum of elements is %d\n", sum);
    return 0;
}