#include <stdio.h>
int main()
{
    int i,j;
    int mat1[2][2],mat2[2][2],rstmat[2][2];
    printf("Enter elements of 1st [2x2] matrix:-\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("\nEnter matrix1[%d][%d] element:",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\n\nEnter elements of 2nd [2x2] matrix:-\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("\nEnter matrix2[%d][%d] element:",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            rstmat[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    printf("\nResult matrix:->\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%d  ",rstmat[i][j]);
        }
        printf("\n");
    }
    return 0;
}