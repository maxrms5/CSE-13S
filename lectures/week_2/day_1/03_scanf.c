/* Reading input from the user */

#include <stdio.h>

int main() {
    int fahr, celsius;                  // variable declaration
    scanf("%d", &fahr);                 //reads a value from the user and stores it as int in the location called fahr
    celsius = 5 * (fahr - 32) / 9;      //the type should be same on lhs and rhs
    printf("%d\t%d\n", fahr, celsius);  //printing integers
    
    float f, c;
    scanf("%f", &f);                    //reads a value from the user and stores it as float in the location called f
    c = 5.0 * (f - 32) / 9;
    printf("%f\t%f\n", f, c);           //we can specify the width and precision of our output

    return 0;
}