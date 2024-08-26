/*
 * -------------------------------------------
 * Mileage Reimbursement Calculator
 * PS&PDiC(5/e), Chap - 2, Pg No. 90
 * Written 26-08-2024
 * -------------------------------------------
*/

#include <stdio.h>
#define rate_per_mile 0.35

double init_reading, final_reading, distance, compensation;

int main(void)
{
    printf("\n\n-------------------------------------------------");
    printf("\nMILEAGE REIMBURSEMENT CALCULATOR");
    printf("\nEnter beginning odometer reading => ");
    scanf("%lf", &init_reading);
    printf("Enter ending odometer reading => ");
    scanf("%lf", &final_reading);
    distance = final_reading - init_reading;
    compensation = distance * rate_per_mile;
    printf("You traveled %.2f miles. At $0.35 per mile,\nyour reimbursement is $%.2f", distance, compensation);
    printf("\n-------------------------------------------------\n\n");
    return (0);
}