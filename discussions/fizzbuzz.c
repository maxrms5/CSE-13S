#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    switch ((n % 3 == 0)*1 + (n % 5 == 0)*2) {
        case (0):
            printf("fizz\n");
            break;
        case (1):
            printf("buzz\n");
            break;
        case (2):
            printf("fizzbuzz\n");
            break;
        default:
            printf("%d", n);
    }

    return 0;
}