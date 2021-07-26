#include<stdio.h>
int main()
{
    int i,j,temp,n,m,x;
    printf("Enter Number of elments in first array:\n");
    scanf("%1d",&n);
    printf("\n\nEnter Number of elments in second array:\n");
    scanf("%1d",&m);
    int array1[n];
    int array2[m];
    int arrayrst[m+n];
    printf("Enter array 1 elements below:\n");
    for (i=0;i<n;i++)
    {
        printf("Enter %d Element :\n",i+1);
        scanf("%d",&array1[i]);
    }
    printf("Enter array 2 elements below:\n");
    for (i=0;i<m;i++)
    {
        printf("Enter %d Element :\n",i+1);
        scanf("%d",&array2[i]);
    }
    x=n+m;
    for (i=0;i<x;i++)
    {
        if (i<n)
        {
            arrayrst[i]=array1[i];
        }
        else
        {
            arrayrst[i]=array2[i-n];
        }
    }
    for (i=0;i<x;i++)
    {
        for (j=0;j<x;j++)
        {
            if (arrayrst[i]<arrayrst[j])
            {
                temp=arrayrst[j];
                arrayrst[j]=arrayrst[i];
                arrayrst[i]=temp;
            }
        }
    }
    printf("\nSorted & merged list of elements after alteration:->\n");
    for (i=0;i<x;i++)
    {
        printf("Element number %d :%d\n",i+1,arrayrst[i]);
    }
    return 0;

}