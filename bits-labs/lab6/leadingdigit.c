#include <stdio.h>
#include <math.h>

int lead(int num);

int lead(int num)
{
    int numc = num; int counter = 0;
    while (numc > 0)
    {
       counter++;
       numc = numc/10; 
    }
    return (num/(pow(10,(counter-1))));
}
int main(void)
{
    int input;
    printf("\nEnter the number: ");
    scanf("%d", &input);
    printf("\nThe leading digit of %d is %d.\n\n ", input, lead(input));
    return 0;
}