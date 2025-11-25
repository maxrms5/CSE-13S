#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include "add.h" // Include the header file for the add function

int main() {
    // Test cases   : assert(cond)
    assert(add(2, 3) == 5);
    assert(add(-1, 1) == 0);
    assert(add(0, 0) == 0);
    assert(add(INT_MAX, 1) == INT_MIN);
    assert(add(INT_MIN, -1) == INT_MIN);
    printf("All tests passed!\n");
    return 0;
}