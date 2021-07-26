#include <stdio.h>
int addf(int k,int s)
{
    int m;
    m=s+k;
    return (m);
}
int main()
{
    int a=10,b=20;
    printf("%d+%d=%d",a,b,addf(a,b));
}