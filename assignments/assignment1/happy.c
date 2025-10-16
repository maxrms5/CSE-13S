#include <stdio.h>

int main() {
	int n;
	printf("n = ");
	scanf("%d", &n);

	int m = n;
	
	while (n != 4) {
		
		if (n == 1) {
			break;
		
		} else {
			int ones_digit = (n / 1) % 10;
			int tens_digit = (n / 10) % 10;
			int hundreds_digit = (n / 100) % 10;

			n = ones_digit * ones_digit + tens_digit * tens_digit + hundreds_digit * hundreds_digit;
			printf("%d\n", n);
		}

	}

	if(n == 1) 
        printf("%d is a happy number.\n", m);
	else 
        printf("%d is NOT a happy number.\n", m);
	return 0;
}
