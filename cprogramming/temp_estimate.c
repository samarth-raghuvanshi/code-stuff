/*
 * -------------------------------------------
 * Temperature Estimator
 * PS&PDiC(5/e), Chap - 2, Pg No. 91
 * Written 26-08-2024
 * -------------------------------------------
*/

#include <stdio.h>

double time, temp;
int hours, minutes;

int main(void)
{
    printf("\n\n------------------------------------------------------------");
    printf("\nTEMPERATURE ESTIMATOR");
    printf("\n\nEnter time elapsed since power failure in hours and minutes.\n");
    scanf("%d %d", &hours, &minutes);
    time = hours + (minutes/60.0);
    temp = ((4 * time * time)/(time + 2)) - 20;
    printf("The estimated temperature in the freezer is %.2f°C.", temp);
    printf("\n------------------------------------------------------------\n\n");
    return(0);
}