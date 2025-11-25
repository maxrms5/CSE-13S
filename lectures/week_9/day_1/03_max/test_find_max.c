#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include "find_max.h" // Include the header file

int main() {
    // Test cases
    int empty_arr[] = {};
    assert(find_max(empty_arr, 0) == INT_MIN);

    int single_arr[] = {5};
    assert(find_max(single_arr, 1) == 5);

    int identical_arr[] = {3, 3, 3, 3};
    assert(find_max(identical_arr, 4) == 3);

    int max_at_beginning_arr[] = {10, 5, 2, 1};
    assert(find_max(max_at_beginning_arr, 4) == 10);

    int max_at_end_arr[] = {1, 2, 5, 10};
    assert(find_max(max_at_end_arr, 4) == 10);

    int normal_arr[] = {2, 8, 1, 9, 6};
    assert(find_max(normal_arr, 5) == 9);

    int negative_arr[] = {-10, -5, -20, -1};
    assert(find_max(negative_arr, 4) == -1);

    printf("All tests passed!\n");
    return 0;
}