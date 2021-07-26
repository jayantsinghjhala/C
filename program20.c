#include <stdio.h>
int main()
{
    int fact,i,n,m;
    printf("Enter a number to calculate its Factorial value:\n");
    scanf("%d",&n);
    fact=n;
    for (i=n-1;i>=1;i--)
    {
        fact*=i;
    }
    printf("The Factorial required: %d\n",fact);
    
    for (i=0;i<=sizeof(fact);i++)
    {
        m=fact%10;
        printf("%d",m);
        if (i%3==0)
            printf(",");
        fact/=10;
    }

}