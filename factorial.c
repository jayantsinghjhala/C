#include <stdio.h>
int main()
{
    int num;
    double fact;
    printf("enter the value of number:\a ");
    scanf("%d",&num);
    fact=1;
    while(num>0)
    {
        fact*=num;
        num--;
    }
    printf("%.2llf",fact);
    return 0;
}