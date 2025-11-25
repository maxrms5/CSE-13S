/* Calculating fibonacci numbers recursively */

#include<stdio.h>

int fib(int n) {                        //local to fib
    if(n==1 || n==2){                   //Base case
        return 1;
    } else return fib(n-1) + fib(n-2);  //Recursive case
}

int main() {
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);
    printf("The %d fibonacci number is %d\n", n, fib(n));   //call by value
    return 0;
}

