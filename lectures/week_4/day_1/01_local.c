/* Scope and lifetime of local/automatic variables */

#include<stdio.h>

void function1(void);
void function2(void);

int main() {
    int m = 1000;       //local
    function2();
    printf("m = %d\n", m);      // m = 1000
    int i = 5;
    for(int i = 0; i<5; i++ ) { //inner i
        printf("y");    // yyyyy
    }
    printf("\n");
    i = 4; //outer i from line 12
    return 0;
}

void function1(void) {
    int m = 10; //local
    printf("m = %d\n", m);   // m = 10
}

void function2(void) {
    int m = 100;    //local
    function1();
    printf("m = %d\n", m);     // m = 100
}