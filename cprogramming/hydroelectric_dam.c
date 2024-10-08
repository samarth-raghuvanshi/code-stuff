/*
 * -------------------------------------------
 * Hydroelectric Dam Power Generation
 * PS&PDiC(5/e), Chap - 2, Pg No. 91
 * Written 26-08-2024
 * -------------------------------------------
*/

#include <stdio.h>
#define efficiency 0.90
#define grav_const 9.80

double height, volume, power;

int main(void)
{
    printf("\n\n------------------------------------------------------------");
    printf("\nHYDROELECTRIC DAM POWER GENERATION");
    printf("\n\nEnter the height of the dam in metres => ");
    scanf("%lf", &height);
    printf("Enter volume of water flowing per second in cubic metres => ");
    scanf("%lf", &volume);
    power = efficiency * (height * volume * 1000 * grav_const);
    printf("The power generated by the dam is %.3f MW.", (power/1000000.0));
    printf("\n------------------------------------------------------------\n\n");
    return(0);
}