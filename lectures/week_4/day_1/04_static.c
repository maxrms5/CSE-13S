/* Side-effects of using static variables */

#include <stdio.h>

#define PI 3.14       //constants

int silly(int x) {
    static int hidden = 0;  //static variables survive every invocation
    return x * 2 + hidden++;   //x=1, 2 ; x = 1, 3 ; x=1, 4
}

int main() {
    printf("silly(1) = %d\n", silly(1)); // silly(1) = 2
    printf("silly(1) = %d\n", silly(1)); // silly(1) = ?
    printf("silly(1) = %d\n", silly(1)); // silly(1) = ?
    return 0;
}