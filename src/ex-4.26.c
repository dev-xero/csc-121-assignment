/** Header file */
#include <stdio.h>
#include <math.h>

/** C program to compute PI approximation */
int main(void)
{
    int terms_for_3_14 = 0;     // terms needed for 3.14
    int terms_for_3_141 = 0;    // terms needed for 3.141
    int terms_for_3_1415 = 0;   // terms needed for 3.1415
    int terms_for_3_14159 = 0;  // terms needed for 3.14159

    double term = 0.0;
    double approximation = 0.0;
    double const MAX_ITERS = 1000000;
    
    int n = 1;

    printf("%s", "PI Approximation Table");
    printf("%s", "----------------------\n");

    // Repeat indefinitely
    while (n <= MAX_ITERS)
    {
        term = 4.0 / (2 * n - 1);

        // Even number terms are negative
        if (n % 2 == 0)
            term = -term;
        
        // Add term to approximations
        approximation += term;

        // Print the result
        printf("%2d terms - PI = %.10f\n", n, approximation);

        if (n != 1)
        {
            // Count the number of terms needed to reach check points
            // Checks that the float absolute difference from the check point is very small
            if (fabs(approximation - 3.14) < 0.0001 && terms_for_3_14 == 0)
                terms_for_3_14 = n;

            else if (fabs(approximation - 3.141) < 0.0001 && terms_for_3_141 == 0)
                terms_for_3_141 = n;

            else if (fabs(approximation - 3.1415) < 0.0001 && terms_for_3_1415 == 0)
                terms_for_3_1415 = n;

            else if (fabs(approximation - 3.14159) < 0.0001 && terms_for_3_14159 == 0)
                terms_for_3_14159 = n;
        }

        if (terms_for_3_14 != 0 && terms_for_3_141 != 0 && terms_for_3_1415 != 0 && terms_for_3_14159 != 0)
            break;

        n += 1;
    }

    printf("\nIterations: %d", n);
    printf("\nTerms required to reach 3.14: %d", terms_for_3_14);
    printf("\nTerms required to reach 3.141: %d", terms_for_3_141);
    printf("\nTerms required to reach 3.1415: %d", terms_for_3_1415);
    printf("\nTerms required to reach 3.14159: %d", terms_for_3_14159);

    return 0;
}