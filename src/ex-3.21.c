/** Header files */
#include <stdio.h>

/** C program to demonstrate pre and post incrementing */
int main(void)
{
    int a = 7;

    printf("variable 'a': %d\n", a);
    printf("Pre-increment 'a': %d\n", ++a);
    printf("Post-increment 'a': %d\n", a++);
    printf("Current value of 'a': %d\n", a);

    return 0;
}