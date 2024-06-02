/** Header files */
#include <stdio.h>
#include <stdlib.h>

/** C program to receive a five digit integer and print individual digits */
int main(void)
{
    // Declare variables
    int number;
    int divisor = 10000;

    // Receive five digit number
    printf("%s", "Enter 5 digit number: ");
    scanf("%d", &number);

    // Keep the number in a five digit range
    if ((number < 10000) || (number > 99999))
    {
        puts("Entered number is not five digits.");
        exit(1);
    }

    printf("%s", "Result: ");

    // Keep dividing number by decreasing powers of 10 and finding modulus
    while (divisor > 0)
    {
        printf("%d\t", (number / divisor) % 10);
        divisor /= 10;
    }

    return 0;
}