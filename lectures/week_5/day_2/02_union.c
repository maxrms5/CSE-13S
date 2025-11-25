/* Using unions in C */

#include <stdio.h>

// Define a union with typedef to create an alias 'Data'
typedef union {
    int intValue;
    float floatValue;
    char charValue;
} Data;

int main() {
    // Declare a variable of type 'Data'
    Data data;

    // Assign a value to the int member
    data.intValue = 100;
    printf("intValue: %d\n", data.intValue);

    // Assign a value to the float member (overwrites intValue)
    //data.floatValue = 3.14159;
    //printf("floatValue: %.5f\n", data.floatValue);

    // Assign a value to the char member (overwrites floatValue)
    //data.charValue = 'B';
    //printf("charValue: %c\n", data.charValue);

    return 0;
}
