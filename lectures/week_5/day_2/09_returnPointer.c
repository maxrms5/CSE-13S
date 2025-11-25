/* Pointers as return types */

#include <stdio.h>

int *larger (int*, int*);

int main() {
    int a = 10;
    int b = 20;
    int *p;
    p = larger(&a, &b);
    printf("%d\n", *p);
    return 0;
}

int *larger(int *x, int *y) {
    if(*x > *y) //if value pointed to by x (stored in a) is greater than y (stored in b)
        return x;   //address of a
    else
        return y;   //address of b
}