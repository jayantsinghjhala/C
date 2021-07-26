#include <stdio.h>
int main()
{
    int i,j,n,m;
    printf("Enter the order of matrix for additon:\n");
    scanf("%1d",&n);
    printf("*\n");
    scanf("%1d",&m);
    int mat1[n][m];
    int mat2[n][m];
    int rstmat[n][m];

    printf("Enter elements of 1st %d*%d matrix:-\n",n,m);

    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("\nEnter matrix1[%d][%d] element:",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\nEnter elements of 2nd %d*%d matrix:-\n",n,m);
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("\nEnter matrix2[%d][%d] element:",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            rstmat[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    printf("\nResult matrix:->\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("%8d  ",rstmat[i][j]);
        }
        printf("\n");
    }
    return 0;
}