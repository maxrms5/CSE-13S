/* Introducing loops */

#include <stdio.h>

int main() {
    int fahr, celsius;          // variable declaration
    int lower, upper, step;     
    
    lower = 0;                  
    upper = 300;
    step = 20;

    fahr = lower;
    while(fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;  //integer arithmetic returns integer outputs
        printf("%3d\t%5d\n", fahr, celsius); // we can right justify the values by specifying width. 
        fahr = fahr + step;
    }

    /* 
    printf("\n");

    for(fahr=lower;fahr<= 300; fahr = fahr + 20) { //initialization; condition; modification
        printf("%3d\t%5.1f\n", fahr, (5.0/9.0) * (fahr-32));
    }
    */

    return 0;
}