#include <stdio.h>
#include <math.h>

#define PI 3.142857
const double pi = 22.0 / 7.0;

float main()
{
    float r,a;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    a=PI*pow(r,2);
    printf("area:%f",a);
    return 0;
}

