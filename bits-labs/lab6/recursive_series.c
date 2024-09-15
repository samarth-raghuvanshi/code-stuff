#include <stdio.h>
#include <math.h>

double recSer(int num)
{
    if (num == 1)
    {
        return 1.0;
    }
    else
    {
        return ((tgamma(num+1)/num) + recSer(num-1));
    }
}

int main(void)
{
    int upper;
    printf("\nEnter limit of the series: ");
    scanf("%d", &upper );
    printf("%.2lf", recSer(upper));
    return 0;

}