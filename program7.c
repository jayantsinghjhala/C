//write a program to swap the values of two variables without using third variable
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two no. for swap: ");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("A=%d B=%d",a,b);
    return 0;

}