#include <stdio.h>
#include <math.h>
#define PI 3.1415926536

int tripleF(int num);

int tripleF(int num)
{
    printf("The square of %d is %d units.", num, (num*num));
    printf("\nThe cube of %d is %d units.", num, (num*num*num));
    printf("\nThe area of the circle with %d unit radius is %.2f units.\n\n", num, (2*PI*num));
}
int main(void)
{
    int input;
    printf("\nEnter the value for the variable: ");
    scanf("%d", &input);
    tripleF(input);
    return 0;
}