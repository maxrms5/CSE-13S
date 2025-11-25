/* Scope and visibility of variables */

#include <stdio.h> 

int main() {
    int a = 1;                  //what is the scope and visibility of a?
    printf("a = %d\n", a);
    {
        int a = 3;  
        int b = 2;
        printf("a = %d\n", a);
        printf("b = %d\n", b);      // what is the scope and visibility of b?
    }
    printf("a = %d\n", a); //the output of this is? a= 1

    //what happens if you try to print b here?
    
    return 0;
}
