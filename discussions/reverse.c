#include <stdio.h>

int main() {
    
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int m = 0;

    while (n > 0) {
        int digit = n % 10;
        m = m * 10 + digit;
        n /= 10;
    }

    printf("Reversed number is: %d\n", m);
    return 0;
}