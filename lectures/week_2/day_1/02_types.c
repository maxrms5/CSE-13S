/* Introducing primitive data types */

#include <stdio.h>

int main() {
    int fahr, celsius;                  // variable declaration
    fahr = 100;                         // variable assignments
    celsius = 5 * (fahr - 32) / 9;      //the type should be same on lhs and rhs
    printf("%d\t%d\n", fahr, celsius);  //printing integers
    
    float f, c;
    f = 100.0;
    c = 5.0 * (f - 32) / 9;
    printf("%f\t%f\n", f, c);           //we can specify the width and precision of our output

    return 0;
}