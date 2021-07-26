
#include <stdio.h>
int main()
{
    int n,j,i;
    printf("Enter a num for row: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=(n);j>=i;j--)
        {
            printf(" ");
        }
        for (j=1;j<=i;j++)
        {
            printf("%d",j);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

