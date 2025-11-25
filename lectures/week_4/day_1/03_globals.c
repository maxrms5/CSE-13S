/* Side-effects of using global variables */

#include <stdio.h>

int hidden = 0; //can be accessed from anywhere in the program

int silly(int x) {          //x=1, 2; x=1, 3; x = 1, 4
    return x * 2 + hidden++;    
}

int main() {
    printf("silly(1) = %d\n", silly(1)); // silly(1) = 2
    printf("silly(1) = %d\n", silly(1)); // silly(1) = 3
    printf("silly(1) = %d\n", silly(1)); // silly(1) = ?
    return 0;
}