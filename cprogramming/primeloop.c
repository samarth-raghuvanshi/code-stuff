#include <stdio.h>

int ctrlNUM, counter;

int main(void)
{
    scanf("%d", &ctrlNUM);
    for(int i = 1; i<=ctrlNUM; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            if(i%j==0)
            counter++;
        }
        if(counter<=2)
        printf("%d", i);
    }
}