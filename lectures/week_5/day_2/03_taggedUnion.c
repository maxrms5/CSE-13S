/* Using tagged value to associate type with union type */

#include <stdio.h>
#include <stdlib.h>

#define INTEGER_TAG 0
#define FLOAT_TAG 1
#define STRING_TAG 2

typedef struct tagged_value {
    int tag;    /* tag reporting the kind of value */
    union uTag {
        int iVal;
        float fVal;
        char* sVal; //string
    } u;
} UType;

void printUType(UType* x) {
    switch(x->tag) {
        case INTEGER_TAG: printf("Value as an int: %d\n", x->u.iVal); break;
        case FLOAT_TAG: printf("Value as a float: %f\n", x->u.fVal); break;
        case STRING_TAG: printf("Value as a string: %s\n", x->u.sVal); break;
    }
}

UType makeUTFloat(float v) {
    UType rv;
    rv.tag = FLOAT_TAG;
    rv.u.fVal = v;
    return rv;
}

UType makeUTString(char* s) {
    UType rv;
    rv.tag = STRING_TAG;
    rv.u.sVal = s;
    return rv;
}

UType makeUTInt(int i) {
    UType rv;
    rv.tag = INTEGER_TAG;
    rv.u.iVal = i;
    return rv;
}

int main() {
    UType x = makeUTFloat(5.25);
    printUType(&x);

    UType y = makeUTString("Hello world!");
    printUType(&y);

    UType z = makeUTInt(31);
    printUType(&z);

    return 0;
}