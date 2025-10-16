#include <stdio.h>

int main() {
    int n = 0;
    double x, total = 0.0, average=0.0;

    while (scanf("%lf", &x) == 1) {
        n++;
        total += x;
        average = total / n;
        printf("Total=%.3lf Average=%.3lf\n", total, average);
    };

    return 0;
}


