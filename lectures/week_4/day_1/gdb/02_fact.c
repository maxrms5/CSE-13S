/* Using gdb to debug recursive functions */
#include <stdio.h>

long fact(int n) {
    if(n==1)                    //Base case
        return n;
    else return n * fact(n-1);  //Recursive case
}

int main() {
    int n=4;
    printf("Factorial of %d is %ld\n", n, fact(n));
    return 0;
}


