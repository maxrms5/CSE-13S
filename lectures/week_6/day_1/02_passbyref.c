/* Pass by value vs Pass by ref */

#include <stdio.h>

void ops(int x, int y, int *sum, int *diff);

int main() {
    int x = 20, y = 10, s, d;
    ops(x, y, &s, &d);
    printf("s=%d and d=%d\n", s, d);

    return 0;
}

void ops(int a, int b, int *sum, int *diff) {
    *sum = a + b;
    *diff = a - b;
}