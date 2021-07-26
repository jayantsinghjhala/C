#include <stdio.h>
int main()
{
    int fib,a=0,b=1,i,x;
    printf("Enter the no. of sequence to generate:");
    scanf("%d",&x);
    for(i=0;i<=x-1;i++)
    {
        printf("%d\n",a);
        fib=a+b;
        a=b;
        b=fib;
       
    }
    return 0;
}