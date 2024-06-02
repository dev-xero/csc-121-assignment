/** Header files */
#include <stdio.h>

/** C program to print the sum of multiples of 7 from 1 - 100 */
int main(void)
{
    int sum = 0;

    // Iterate through the numbers form 1 - 100
    for (int i = 1; i < 101; i++)
    {
        // If this number is divisible by 7, add it to sum
        if (i % 7 == 0)
            sum += i;
    }

    printf("Sum of multiples of 7 from 1 - 100: %d", sum);

    return 0;
}