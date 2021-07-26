#include <stdio.h>
void main()
{
    float a,b;
    char opt;
    printf("Please choose a desired operator[+,-,*,/]:");
    scanf("%c",&opt);
    printf("Enter two numbers for calculation:\n");
    scanf("%f %f",&a,&b);
    switch (opt)
    {
        case '+':
            printf("Addition of entered value is %.2f",a+b);
            break;
        case '-':
            printf("Substraction of entered value is %.2f",a-b);
            break;
        case '*':
            printf("Multiplication of entered value is %.2f",a*b);
            break;
        case '/':
            if (b!=0)
            {
                printf("Division of entered value is %.2f",a/b);
            }
            else
                printf("Division of entered value is INFINITY");
            break;
        default:
            printf("ERROR:Please choose operator from the list!!!"); 
    }



}