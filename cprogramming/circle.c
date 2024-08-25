#include <stdio.h>
#define PI 3.1415926536
int main(void)
{
    double radius, area, circumference;
    printf("Enter the radius of the circle \n");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("The area of the circle is %f and the circumference is %f", area, circumference);
    return(0);
}