#include <stdio.h>

int main() {
    // Using typedef
    typedef unsigned int uint;  // Create an alias 'uint' for 'unsigned int'
    uint age = 25;              // unsigned int age = 25
    printf("Age: %u\n", age);

    // Using enum
    enum Days {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday}; //default counting starts at 0
    enum Days today = Wednesday;
    printf("Today is day number %d of the week.\n", today); // Outputs: Today is day number 3 of the week.

    // Using typedef and enum
    typedef enum {Red, Green, Blue} Color;
    Color favoriteColor = Green;
    printf("My favorite color is %d!\n", favoriteColor);
    
    return 0;
}