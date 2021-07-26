#include <stdio.h>
int SI(int p,int r,int t)
{
    int sint;
    sint=(p*r*t)/100;
    printf("Required Result is:%d ",sint);
}
void main()
{
    int p,r,t;
    printf("To Calculate Simple Intreset Enter Values\n");
    printf("Enter The Value of Principle,Rate And Time(year):\n ");
    scanf("%d %d %d",&p,&r,&t);
    SI(p,r,t);
    
}