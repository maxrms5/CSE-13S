/* Computing factorials recursively */

#include <stdio.h>

long fact(int n) {
    if(n==1)                    //Base case
        return n;
    else return n * fact(n-1);  //Recursive case
}

int main() {
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);
    printf("Factorial of %d is %ld\n", n, fact(n));
    return 0;
}
