/* Computing fibonacci numbers iteratively */

#include<stdio.h>

int fib(int n) {
    int ans[n+1];   //declaring an array of values  
    ans[0] = -1;
    ans[1] = 1;     //base case
    ans[2] = 1;     //base case
    for(int i=3; i<=n; i++) 
        ans[i] = ans[i-1] + ans[i-2];
    return ans[n];
    
}

int main() {
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);

    printf("The %d fibonacci number is %d\n", n, fib(n));
    return 0;
}

