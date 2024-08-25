/*
 * -------------------------------------------
 * Supermarket Coin Processor 
 * PS&PDiC(7/e), Chap - 2, Pg No. 38
 * Written 25-08-2024
 * -------------------------------------------
*/
#include <stdio.h>
char first, middle, last;
int dollars, quarters, dimes, nickels, pennies;
int total_dollars, change, total_cents;
int main(void)
{
    printf("Enter the first, middle and last initials of your name\n");
    scanf("%c %c %c", &first, &middle, &last);
    printf("Enter the number of Dollars, quarters and dimes\n");
    scanf("%d %d %d", &dollars, &quarters, &dimes);
    printf("Finally, enter the number of nickels and pennies\n");
    scanf("%d %d", &nickels, &pennies);
    
    total_cents = 100 * dollars + 25 * quarters + 10 * dimes + 5 * nickels + pennies; //counting number of pennies
    total_dollars = total_cents/100; change = total_cents%100; //dollars is integer division quotient, change is integer division remainder.
    
    printf("\n\n-----------------------------------\n");
    printf("%c%c%c's Coin Credit", first, middle, last);
    printf("\nDollars: %d", total_dollars);
    printf("\nChange: %d cents\n", change);
    printf("-----------------------------------\n\n"); //formatting with spaces, newlines and dashes.
    return(0);
}