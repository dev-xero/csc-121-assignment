/** Header files */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/** Function prototypes */
double area(double a, double b, double c);

/** C program to compute the area of a triangle given 3 sides */
int main(void)
{
    double side_a, side_b, side_c;
    double computed_area = 0.0;

    printf("%s", "Enter the sides of the triangle as: a, b, c: ");
    scanf("%lf, %lf, %lf", &side_a, &side_b, &side_c);

    printf("Side A: %.2lf units\nSide B: %.2lf units\nSide C: %.2lf units", side_a, side_b, side_c);

    computed_area = area(side_a, side_b, side_c);
    printf("\nArea of the triangle is: %.2lf sq. units", computed_area);

    return 0;
}

/** Function definitions */

/** Computes the area of a triangle using Heron's formula 
 * 
 * Area = sqrt(s * (s - a) * (s - b) * (s - c))
 * where s: is the semi perimeter = (a + b + c) / 2
*/
double area(double a, double b, double c)
{
    /**
     * Check that sides are those of a triangle
     * if the sum of two sides is less than the third side, it is not a triangle
    */
    if (((a + b) < c) || ((a + c) < b) || ((b + c) < a))
    {
        printf("Sides do not represent those of a triangle.");
        exit(1);
    }

    // Calculate semi perimeter
    int s = (a + b + c) / 2;

    return sqrt(s*(s-a)*(s-b)*(s-c));
}