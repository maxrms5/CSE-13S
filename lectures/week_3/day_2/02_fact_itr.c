/* Computing factorials iteratively */

#include<stdio.h>

long fact(int n) {  //copy of the value that I have passed
    long ans = 1;
    while(n > 1) {
        ans = ans * n;
        n--;
    }
    return ans;
}

int main() {
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);

    long ans = fact(n); //call by value
    printf("Factorial of %d is %ld\n", n, ans); 
    
    return 0;
}
