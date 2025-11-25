/* Calculating the square root of x using the Halley's method */

#include <stdio.h>
#include <math.h>

double halleys(double x, double epsilon) {
	/* TODO: complete this function to compute halleys sequence
	 * s = prev_s * (prev_s * prev_s + 3 * x) / (3 * prev_s * prev_s + x)
	 * calculate s as long as |s - prev_s| exceeds a threshold epsilon
	 * when the difference is less than epsilon, return the value of s */
}

int main() {
	double x = 0.0, eps = 0.0;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of epsilon: ");
    scanf("%lf", &eps);
	
	double res;
	/* TODO: call halley's method to compute the sqrt of x and store the result in res */
	
	printf("Sqrt of %lf is %lf\n", x, res);
	return 0;
}
