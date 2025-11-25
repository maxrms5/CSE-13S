/* Macros for functions - remember to include the parentheses around the args */

#include <stdio.h>

#define MULG(x,y) ((x) * (y)) //((99+1) * (2)) // (100*2) = 200
#define MULB(x,y) (x * y)      //(99+1*2) //101

int main() {
    int x = MULG(99+1, 2);  //100, 2 = 200
    int y = MULB(99+1, 2);  //100, 2 = 200
    printf("x=%d\n", x);    // x = ?
    printf("y=%d\n", y);    // y = ?
    return 0;
}