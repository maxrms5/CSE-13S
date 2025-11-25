#include <limits.h>

int add(int a, int b) {
    if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b)) { //overflows and underflows
        return INT_MIN;
    }
    return a + b;
}