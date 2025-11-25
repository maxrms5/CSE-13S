/* Using break inside loops */

#include <stdio.h>

int main() {
    int num, i;
    do {
        printf("Enter a number: ");
        i = scanf("%d", &num);
        printf("num = %d\n", num);
        if(num > 10)
            break;
    } while(i==1);
    return 0;
}