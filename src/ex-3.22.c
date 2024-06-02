/** Header files */
#include <stdio.h>

/** C program to test if a number is prime */
int main(void)
{   
    // Declare variables
    int is_prime = 1;
    int num;

    // Receive input from users
    printf("%s", "Enter a number to test for prime: ");
    scanf("%d", &num);

    if (num == 1) 
        puts("The number 1 is not prime!");

    else if (num == 2 || num == 3)
        printf("The number '%d' is prime.", num);

    else
    {   
        // Handle negatives
        int abs_num = num;
        if (num < 0) abs_num = -num;

        // Test for divisibility until the num
        for (int i = 2; i < abs_num; i ++)
        {
            if (abs_num % i == 0) {
                is_prime = 0;
                break;
            }
        }

        (is_prime == 1) ? printf("The number '%d' is prime.", num) : printf("The number '%d' is not prime.", num);
    }

    return 0;
}