#include <stdio.h>
int main()
{
    int x,i,j;

    printf("Enter the number upto which prime no. is required:");
    scanf("%d",&x);
    for (i=2;i<x;i++)
    {
        for (j=2;j<=i-1;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==i)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}