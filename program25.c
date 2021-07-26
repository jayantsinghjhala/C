#include<stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter the number to calculate factorial:");
    scanf("%d",&n);
    printf("REQUIRED FACTORIAL IS %d",fact(n));
    return 0;
}
int fact(int n)
{
    int fact=1,i;
    for (i=n;i>0;i--)
    {
        fact*=i;
    }
    return fact;
}