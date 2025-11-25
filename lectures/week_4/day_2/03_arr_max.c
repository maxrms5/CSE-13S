/* Passing arrays as arguments 
 * Find the max element of an array */

#include<stdio.h>

float largest(float a[], int n);    //function that takes an array and integer

int main() {
    float values[4] = {2.5, -4.75, 1.2, 3.67};
    int n;
    printf("The largest value is %.2f\n", largest(values, 4));  //passing array by name - passes the address of the first element - call by reference
    return 0;
}

float largest(float a[], int n) {   
    float max;
    max = a[0];
    for(int i=1; i<n; i++) {
        if(max < a[i])
            max = a[i];
    }
    return max;
}
