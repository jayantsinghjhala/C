#include <stdio.h>
int main()
{
    int i,j,temp,n,m,x;
    printf("Enter Number of elments in array:");
    scanf("%1d",&n);
    int array[n];
    printf("\nEnter array elements below:");
    for (i=0;i<n;i++)
    {
        printf("\nEnter %d Element :",i+1);
        scanf("%d",&array[i]);
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (array[i]>array[j])
            {
                temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
    printf("\nSecond largest Number is: %d",array[1]);
    return 0;
}