/* User-defined functions in C 
 * Convert a given range of temperatures from Farenheit to Celsius */

#include<stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 10

int fahrToCelsius(int degF);        //function prototype - function name, return type and type of arguments (name of arguments in optional)

int main() {
    for(int fahr = LOWER; fahr <= UPPER; fahr+=STEP) {
        int celsius = fahrToCelsius(fahr);      //function call using actual parameters
        printf("From %dF to %dC degrees\n", fahr, celsius);
    }
    return 0;
}

int fahrToCelsius(int degF) {   //function definition/implementation - formal arguments (local to the function being defined)
    int celsius = 5 * (degF - 32) / 9;
    return celsius;
}



