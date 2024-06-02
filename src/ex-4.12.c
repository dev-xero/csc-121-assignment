/** Header files */
#include <stdio.h>

/** C program to print a list of primes from 1 - 100 */
int main(void)
{
    int is_prime = 1;

    // Since 2, 3, 5 are primes, print those
    printf("%d %d %d ", 2, 3, 5);

    // Test for prime
    for (int i = 6; i < 101; i++)
    {
        is_prime = 1; // reset for every iteration

        for (int j = i-1; j > 1; j--)
        {
            // If divisible, then not prime
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) printf("%d ", i);
    }

    return 0;
}