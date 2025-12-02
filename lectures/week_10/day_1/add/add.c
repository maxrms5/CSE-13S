#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
    if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b)) { //overflows and underflows
        return INT_MIN;
    }
    return a + b;
}

int main(int argc, char *argv[]) {
    if(argc < 3) {
        printf("Usage: ./add num1 num2\n");
        return 1;
    }
    int sum = add(atoi(argv[1]), atoi(argv[2]));
    printf("Sum of %d and %d = %d\n", atoi(argv[1]), atoi(argv[2]), sum);
    return 0;
}