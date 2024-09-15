#include <stdio.h>
#include <math.h>

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
    int input, counter=0;
    printf("\nEnter the number: ");
    scanf("%d", &input);
    for(int i=2; i<=input/2; i++)
    {
        if(primecheck(i)==0)
        continue;
        for(int j=2; j<=input-i; j++)
        {
            if (primecheck(j)==0)
            continue;
            if((i+j)==input && (i!=j))
            {
                printf("\n%d + %d = %d", i, j, input);
                counter++;
            }
        }
    }
    if(counter==0)
    {
        printf("\n%d cannot be represented as the sum of two prime numbers.\n\n ", input);
    }
    else
    printf("\n\n");
    return 0;
}