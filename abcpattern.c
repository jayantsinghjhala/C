
#include <stdio.h>
int main()
{
    char m;
    int n,j,i;
    m='A';
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        for(j=1;j<=i;++j)
        {
            printf("%c",m);
            printf(" ");  
            m++;   
        }
        printf("\n");    
    }
    return 0;
}