#include <math.h>
#include <stdio.h>

int isArmstrong(int num)
{
    int numCopy = num; int numCopy2 = num;
    int digitCount=0, sum=0;
    while(numCopy > 0)
    {
        digitCount++;
        numCopy = numCopy/10;
    }

    while(numCopy2 > 0)
    {
        sum = sum + pow((numCopy2%10),digitCount);
        numCopy2 = numCopy2/10;
    }
    if (sum == num)
    return 1;
    return 0;
}
int main(void)
{
    int upper, lower;
    printf("\nEnter upperlimit and lowerlimit for Armstrong Numbers: ");
    scanf("%d %d", &upper, &lower);
    printf("Armstrong numbers between %d and %d are: ", lower, upper);
    for(;lower<=upper;lower++)
    {
        if((isArmstrong(lower))==1)
        printf("\n%d", lower);
    }
    return 0;
}