//write a program to solve the equation ((a+b/c*d-e)*(f-g))
#include <stdio.h>
float main()
{
    float a,b,c,d,e,f,g,rst;
    printf("SOLVE YOUR VALUES WITH ((a+b/c*d-e)*(f-g))-->> ");
    printf("Enter  a,b,c,d,e,f,g-->> : ");
    scanf("%f %f %f %f %f %f %f",&a,&b,&c,&d,&e,&f,&g);
    rst=((a+b/c*d-e)*(f-g));
    printf("Result According to the Eqation:%f",rst);
    return 0;
}