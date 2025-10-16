#include <stdio.h>

int power(int base, int exponent) {
        int i = 1;
	double result = 1;
	if (exponent >= 2) {
		//printf("exponent = %d\n", exponent);
     	  	for (i = 1; i <= exponent; i++) {
                	result *= base;
			//printf("result = %f for power  %d\n", result, i);
		}

	} else if (exponent >= 1) {
		//printf("power loop skipped\nresult = %d for power %d\n", base, exponent);
		return base;
	
        } else {
		//printf("power loop skipped\nresult = %f for power %d\n", result, exponent);
		return result;
	}

	//printf("%d to the power of %d is %f\n", base, exponent, result);
	return result;
}	

int main() {
	int n;
	printf("n = ");
	scanf("%d", &n);	
	//printf("input read as %d\n", n);

	double pi = 0.;
	int i = 0;

    	for (i = 0; i <= n; i++) {
		//printf("loop iteration %d reached\n", i);
		double denominator = power(16, i);
		pi += (4.0/(8*i+1) - 2.0/(8*i+4) - 1.0/(8*i+5) - 1.0/(8*i+6)) * (1.0 / denominator);
		//printf("pi = %.10f\n", pi);
		//printf("loop iteration %d complete\n", i);
	}

	printf("PI = %.10f\n", pi);
	return 0;
}
