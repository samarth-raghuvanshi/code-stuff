#include <stdio.h>
#include <math.h>

int factorial(int num);

int factorial(int num)
{
    if (num==1)
    return 1;
    else
    return (num*factorial(num-1));
}
int main(void)
{
    int input;
    printf("\nEnter the number: ");
    scanf("%d", &input);
    printf("The factorial of %d is %d.\n\n", input, factorial(input));
    return 0;
}