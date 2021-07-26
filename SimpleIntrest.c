#include <stdio.h>
int SI(int p,int r,int t)
{
    int sint;
    sint=(p*r*t)/100;
    return sint;
}
int main()
{
    int p,r,t,rst;
    printf("Enter The Value of Principle,Rate And Time(year):\n ");
    scanf("%d %d %d",&p,&r,&t);
    rst=SI(p,r,t);
    printf("Required Resut:\n%d",rst);
    return 0;
}