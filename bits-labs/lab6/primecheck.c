#include <stdio.h>

int primecheck(int num);

int primecheck(int num)
{
    int counter=0;
    for(int i=2; i<(num/2); i++)
    {
        if(num%i==0)
        return 0;
    }
    return 1;
}
int main(void)
{
    int input;
    printf("\nEnter the number: ");
    scanf("%d", &input);
    if(primecheck(input)==1)
    printf("\n%d is a prime number.\n\n", input);
    else
    printf("\n%d is not a prime number.\n\n", input);
    return 0;
}