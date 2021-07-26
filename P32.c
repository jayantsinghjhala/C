#include<stdio.h>
#include<string.h>
void main()
{
    int i,j,n,m;
    printf("Enter the order of matrix for additon:\n");
    scanf("%1d",&n);
    printf("*\n");
    scanf("%1d",&m);
    int mat[n][m];
    int tmat[n][m];

    printf("Enter elements of matrix of order %d*%d :-\n",n,m);

    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("\nEnter matrix[%d][%d] element:",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            tmat[i][j]=mat[j][i];
        }
    }

    printf("\nTranspose matrix element:-->\n\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("%8d   ",tmat[i][j]);
        }
        printf("\n");
    }
}