/** Header files */
#include <stdio.h>

/** C program to calculate car-pool saving based on user input */
int main(void)
{
    // Declare variables
    double miles_per_day;
    double gasoline_cost_per_gallon;
    double average_miles_per_gallon;
    double daily_parking_fees;
    double tolls_per_day;

    double gasoline_cost_per_day = 0.0;
    double savings = 0.0;

    puts("Car Pool Savings Calculator");
    puts("---------------------------");

    // Receive input from users
    printf("%s", "1. Miles per day: ");
    scanf("%lf", &miles_per_day);

    printf("%s", "2. Gasoline cost per gallon: ");
    scanf("%lf", &gasoline_cost_per_gallon);

    printf("%s", "3. Average miles per gallon: ");
    scanf("%lf", &average_miles_per_gallon);

    printf("%s", "4. Parking fees per day: ");
    scanf("%lf", &daily_parking_fees);

    printf("%s", "5. Tolls per day: ");
    scanf("%lf", &tolls_per_day);

    // Formula to calculate savings: Gasoline Cost Per Day + Daily Parking Fees + Tolls Per Day
    gasoline_cost_per_day = (miles_per_day / average_miles_per_gallon) * gasoline_cost_per_gallon;
    savings = gasoline_cost_per_day + daily_parking_fees + tolls_per_day;

    printf("\nYour savings per day is: $%.2lf\n", savings); // Using dollars for convenience
}