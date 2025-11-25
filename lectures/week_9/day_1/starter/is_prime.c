#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0; // 0 and 1 are not prime
    }
    if (n <= 3) {
        return 1; // 2 and 3 are prime
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return 0; // Divisible by 2 or 3, not prime
    }
    for (int i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0; // Divisible by numbers of the form 6k ± 1, not prime
        }
    }
    return 1; // If no divisors found, it's prime
}