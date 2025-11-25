/* Scope of global variables */

#include<stdio.h>

int fun1(void);
int fun2(void);
int fun3(void);

int x;  //global variable x

int main() {
    x = 10; //this is an assignment; refers to the global variable
    printf("x = %d\n", x);          //x = 10
    printf("x = %d\n", fun1());     //x = 20
    printf("x = %d\n", fun2());     //x = 1     // int ans = fun2(); ans = 1; print 
    printf("x = %d\n", fun3());     //x = 30
    return 0;
}

int fun1(void) {
    x = x + 10; //global or local? - global
}

int fun2(void) {
    int x = 1;  //global or local? - local
    return x;
}

int fun3(void) {
    x = x + 10; //global or local? - global
}
