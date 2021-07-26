#include <stdio.h>
#include <conio.h>
int print(int n,int m,int a[n][n]);

void add(int n,int m,int a[n][m],int b[n][m])
{
    int i,j;
    int rstmat[n][m];
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            rstmat[i][j]=a[i][j]+b[i][j];
        }
    }
    print(n,m,rstmat);
}
void sub(int n,int m,int a[n][m],int b[n][m])
{
    int i,j;
    int rstmat[n][m];
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            rstmat[i][j]=a[i][j]-b[i][j];
        }
    }
    print(n,m,rstmat);
}

void mul(int n,int m,int a[n][m],int b[n][m])
{
    int i,j,k;
    int rstmat[n][m];

    for (i=0;i<n;++i) 
    {
        for (j=0;j<m;++j)
        {
            rstmat[i][j]=0;
        }
    }

    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            for(k=0;k<m;k++)
            {
                rstmat[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    print(n,m,rstmat);
}

int print(int n,int m,int a[n][m])
{
    int i,j;
    printf("\nResult matrix:->\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("%8d ",a[i][j]);
        }
        printf("\n");
    }return 0;
}


void main()
{
    int i,j,n,m;
    char opt;
    printf("Enter the order of matrix for ADD/SUB/MUL:\n");
    scanf("%1d",&n);
    printf("*\n");
    scanf("%1d",&m);
    int mat1[n][m];
    int mat2[n][m];
    int rstmat[n][m];
    printf("Enter the operation for matrices[+,- or *]:\n"
    "1.Addition-> +\n"
    "2.Substraction-> -\n"
    "3.Multiplication-> *\n");
    opt=getche();

    printf("\nEnter elements of 1st %d*%d matrix:-\n",n,m);

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
    switch (opt)
    {
    case '+':
        add(n,m,mat1,mat2);
        break;
    case '-':
        sub(n,m,mat1,mat2);
        break;
    case '*':
        mul(n,m,mat1,mat2);
        break;
    default:
        printf("Error!!!Please choose correct operator!");
        break;
    }

}
