#include <stdio.h>
float main()
{
    float num1,num2,num3,grt;
    printf("Enter three numbers to get the greater no. of all : ");
    scanf("%f %f %f",&num1,&num2,&num3);
    grt=(num1>num2 && num1>num3)?num1:num2;
    grt=(num2>num1 && num2>num3)?num2:grt;
    grt=(num3>num1 && num3>num2)?num3:grt;

     

    printf("The greatest no. of all three is %.2f",grt);
    return 0;
}
 