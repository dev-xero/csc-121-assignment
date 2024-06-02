/** Header files */
#include <stdio.h>
#include <string.h>

/** Function prototypes */
int isEven(int num);

/** C program to test whether an integer is even or odd */
int main(void)
{
    int user_number;
    char choice = 'y';

    // Keep prompting the user for a number and checking
    while (1)
    {
        printf("%s", "\nEnter a number to check if even or odd: ");
        scanf("%d", &user_number);
        getchar(); // handles new line being left

        if (isEven(user_number))
            printf("1: '%d' is even.", user_number);
        
        else
            printf("0: '%d' is odd.", user_number);
        
        // Prompt user to continue?
        printf("\nContinue? (y/n): ");
        scanf("%c", &choice);

        // End the loop if choice if not 'y'
        if (choice != 'y')
            break;
    }

    return 0;
}

/** Function definitions */

/** Returns 1 if the num argument is even, 0 if odd */
int isEven(int num)
{
    return (num % 2 == 0) ? 1 : 0;
}