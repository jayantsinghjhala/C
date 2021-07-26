#include <stdio.h>
int facts(int);
int main()
{
    int n;
    printf("Special series Result :-->>\n");
    printf("Enter the value up to which series is required:");
    scanf("%d",&n);
    printf("REQUIRED RESULT:%d",facts(n));
    return 0;

}
int facts(int n)
{
    int i,j,fact,rst=0;
    for (i=1;i<=n;i++)
    {
        fact=1;
        for(j=i;j>0;j--)
        {
            fact*=j;
        }
        rst+=fact/i;
    }
    return rst;

}