#include <stdio.h>
int main()
{
    int m,i,s,sum=0;
    printf("Enter a no. to calculate the sum of digits: ");
    scanf("%d",&m);
    for(i=1;i<=sizeof(m);i++)
    {
        s=m%10;
        sum+=s;
        m/=10;
    }
    printf("Sum of digits=%d",sum);
} 